// -----------------------------------------------------------
// Introduction
// 
// Brainfuck is one of the most well-known esoteric programming languages. 
// But it can be hard to understand any code longer that 5 characters. 
// In this kata you have to solve that problem.
// 
// Description
// 
// In this kata you have to write a function which will do 3 tasks:
// 
// Optimize the given Brainfuck code.
// Check it for mistakes.
// Translate the given Brainfuck programming code into C programming code.
// More formally about each of the tasks:
// 
// Your function has to remove from the source code all useless command 
// sequences such as: '+-', '<>', '[]'. Also it must erase all characters except +-<>,.[].
// Example:
// "++--+." -> "+."
// "[][+++]" -> "[+++]"
// "<>><" -> ""
// If the source code contains unpaired braces, your function should return "Error!" string.
// 
// Your function must generate a string of the C programming code as follows:
// 
// Sequences of the X commands + or - must be replaced by \*p += X;\n or \*p -= X;\n.
// 
// Example:
// "++++++++++" -> "\*p += 10;\n"
// "------" -> "\*p -= 6;\n"
// Sequences of the Y commands > or < must be replaced by p += Y;\n or p -= Y;\n.
// 
// Example:
// ">>>>>>>>>>" -> "p += 10;\n"
// "<<<<<<" -> "p -= 6;\n"
// . command must be replaced by putchar(\*p);\n.
// 
// Example:
// ".." -> "putchar(\*p);\nputchar(\*p);\n"
// , command must be replaced by \*p = getchar();\n.
// 
// Example:
// "," -> "\*p = getchar();\n"
// [ command must be replaced by if (\*p) do {\n. ] command must be replaced by } while (\*p);\n.
// 
// Example:
// "[>>]" ->
// if (\*p) do {\n
//   p += 2;\n
// } while (\*p);\n
// Each command in the code block must be shifted 2 spaces to the right 
// accordingly to the previous code block.
// 
// Example:
// "[>>[<<]]" ->
// if (\*p) do {\n
//   p += 2;\n
//   if (\*p) do {\n
//     p -= 2;\n
//   } while (\*p);\n
// } while (\*p);\n
// 
// Examples
// 
// Input:
// +++++[>++++.<-]
// Output:
// *p += 5;
// if (*p) do {
//   p += 1;
//   *p += 4;
//   putchar(*p);
//   p -= 1;
//   *p -= 1;
// } while (*p);

#include <stdio.h>    // sprintf, printf
#include <stdlib.h>   // malloc, calloc, realloc, free
#include <string.h>   // strlen, memcpy, strcpy

// Макросы для часто используемых символов Brainfuck / Macro per simboli Brainfuck
#define VALID(c) ((c)=='+'||(c)=='-'||(c)=='<'||(c)=='>'||(c)=='.'||\
                  (c)==','||(c)=='['||(c)==']')
#define INC '+'  // увеличение / incremento
#define DEC '-'  // уменьшение / decremento
#define LEFT '<' // сдвиг влево / spostamento a sinistra
#define RIGHT '>'// сдвиг вправо / spostamento a destra
#define OUT '.'  // вывод / output
#define IN ','   // ввод / input
#define LOOP_START '[' // начало цикла / inizio ciclo
#define LOOP_END ']'   // конец цикла / fine ciclo

// strdup, копирование строки в куче / duplicazione di stringa in heap
static char *my_strdup(const char *str){
    size_t length = strlen(str);
    char *copy = malloc(length + 1);
    if (!copy) return NULL;
    memcpy(copy, str, length + 1);
    return copy;
}

// Добавление текста в выходной буфер с расширением 
// Aggiunge testo al buffer con realloc
static void append(char **buffer, int *size, int *capacity, const char *text){
    int text_len = strlen(text);
    if (*size + text_len + 1 > *capacity){
        while (*size + text_len + 1 > *capacity) *capacity *= 2;
        *buffer = realloc(*buffer, *capacity);
    }
    memcpy(*buffer + *size, text, text_len);
    *size += text_len;
    (*buffer)[*size] = '\0';
}

// Добавление отступа в виде двух пробелов * indent 
// Aggiunge indentazione (2 spazi * indent)
static void append_indent(char **buffer, int *size, int *capacity, int indent){
    for (int i=0; i<indent; i++) append(buffer,size,capacity,"  ");
}

// Подсчет последовательности символов +,- или <,> 
// Conta sequenza di simboli +,- o <,>
static int consume_sequence(const char *src, int *index, char positive, char negative){
    int count = 0;
    while (src[*index]==positive || src[*index]==negative){
        if (src[*index]==positive) count++;
        else count--;
        (*index)++;
    }
    return count;
}

// Очистка исходного кода от недействительных символов и cancel-пар
// Pulisce il codice sorgente da caratteri non validi e coppie annullate
static char *clean_source(const char *source){
    int length = strlen(source);
    char *cleaned = malloc(length + 1);
    int pos = 0;
    for (int i=0; i<length; i++){
        char c = source[i];
        if (!VALID(c)) continue;
        if (pos>0 && ((c==INC && cleaned[pos-1]==DEC) || 
                      (c==DEC && cleaned[pos-1]==INC) ||
                      (c==LEFT && cleaned[pos-1]==RIGHT) ||
                      (c==RIGHT && cleaned[pos-1]==LEFT) ||
                      (c==LOOP_END && cleaned[pos-1]==LOOP_START))){
            pos--;
        } else cleaned[pos++] = c;
    }
    cleaned[pos] = '\0';
    return cleaned;
}

// Проверка корректности скобок [] 
// Controlla la correttezza delle parentesi []
static int check_brackets(const char *src){
    int balance=0;
    for (int i=0; src[i]; i++){
        if (src[i]==LOOP_START) balance++;
        if (src[i]==LOOP_END){
            balance--;
            if (balance<0) return 0;
        }
    }
    return balance==0;
}

// Основная функция преобразования Brainfuck в C 
// Funzione principale per convertire BF in C
char *brainfuck_to_c(const char *source){
    char *src_copy = my_strdup(source);
    if (!src_copy) return NULL;

    char *cleaned = clean_source(src_copy);
    free(src_copy);

    if (!check_brackets(cleaned)){
        free(cleaned);
        char *err = malloc(7);
        strcpy(err,"Error!");
        return err;
    }

    int capacity = 1024, size=0, indent=0;
    char *output = calloc(capacity,1);
    char buffer[64];

    for (int i=0; cleaned[i];){
        char c = cleaned[i];
        switch(c){
            case INC: case DEC: {
                int count = consume_sequence(cleaned,&i,INC,DEC);
                if (count!=0){
                    append_indent(&output,&size,&capacity,indent);
                    sprintf(buffer,"*p %c= %d;\n",(count>0?'+':'-'),
                            (count>0?count:-count));
                    append(&output,&size,&capacity,buffer);
                }
                break;
            }
            case LEFT: case RIGHT: {
                int count = consume_sequence(cleaned,&i,RIGHT,LEFT);
                if (count!=0){
                    append_indent(&output,&size,&capacity,indent);
                    sprintf(buffer,"p %c= %d;\n",(count>0?'+':'-'),
                            (count>0?count:-count));
                    append(&output,&size,&capacity,buffer);
                }
                break;
            }
            case OUT:
                append_indent(&output,&size,&capacity,indent);
                append(&output,&size,&capacity,"putchar(*p);\n");
                i++;
                break;
            case IN:
                append_indent(&output,&size,&capacity,indent);
                append(&output,&size,&capacity,"*p = getchar();\n");
                i++;
                break;
            case LOOP_START:
                append_indent(&output,&size,&capacity,indent);
                append(&output,&size,&capacity,"if (*p) do {\n");
                indent++;
                i++;
                break;
            case LOOP_END:
                indent--;
                append_indent(&output,&size,&capacity,indent);
                append(&output,&size,&capacity,"} while (*p);\n");
                i++;
                break;
            default:
                i++;
        }
    }

    free(cleaned);
    return output;
}

// -----------------------------------------------------------
// License
// Tasks are the property of Codewars (https://www.codewars.com/) 
// and users of this resource.
// 
// All solution code in this repository 
// is the personal property of Vladimir Rukavishnikov
// (vladimirrukavishnikovmail@gmail.com).
// 
// Copyright (C) 2026 Vladimir Rukavishnikov
// 
// This file is part of the HungryVovka/Codewars-C
// (https://github.com/HungryVovka/Codewars-C)
// 
// License is GNU General Public License v3.0
// (https://github.com/HungryVovka/Codewars-C/blob/main/LICENSE)
// 
// You should have received a copy of the GNU General Public License v3.0
// along with this code. If not, see http://www.gnu.org/licenses/
// -----------------------------------------------------------