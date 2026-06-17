// -----------------------------------------------------------
// Longest Common Subsequence (Performance version)
// from Wikipedia:
// The longest common subsequence (LCS) problem is the problem of 
// finding the longest subsequence common to all sequences in a set of sequences.
// It differs from problems of finding common substrings: unlike substrings, 
// subsequences are not required to occupy consecutive positions within the original sequences.
// 
// Task
// Write a function lcs that accepts two strings and returns their longest common 
// subsequence as a string. Performance matters.
// 
// Examples
// lcs( "abcdef", "abc" ) => "abc"
// lcs( "abcdef", "acf" ) => "acf"
// lcs( "132535365", "123456789" ) => "12356"
// lcs( "abcdefghijklmnopq", "apcdefghijklmnobq" ) => "acdefghijklmnoq"
// 
// Testing
// This is a performance version of xDranik's kata of the same name.
// This kata, however, has much more full and heavy testing. Intermediate random tests have string arguments 
// of 20 characters; hard random tests 40 characters; extreme 60 characters (characters are chosen out of 36 different ones).
// 
// Notes
// The subsequences of "abc" are "", "a", "b", "c", "ab", "ac", "bc", "abc".
// "" is a valid subsequence in this kata, and a possible return value.
// All inputs will be valid.
// Two strings may have more than one longest common subsequence. When this occurs, return any of them.
// 
// lcs( string0, string1 ) === lcs( string1, string0 )
// 
// Wikipedia has an article that may be helpful.(https://en.wikipedia.org/wiki/Longest_common_subsequence)

#include <stdlib.h>  // malloc(), free()
#include <string.h> //strlen()

static int** create_dp_table(int m, int n);
static void initialize_dp_table(int **dp, int m, int n);
static void fill_dp_table(const char *x, const char *y, int **dp, int m, int n);
static char* reconstruct_lcs(const char *x, const char *y, int **dp, int m, int n);
static void free_dp_table(int **dp, int m);

char *lcs(const char *x, const char *y) {
    int m, n;
    int **dp;  
    char *result;

    m = strlen(x);
    n = strlen(y);

    dp = create_dp_table(m, n);
    if (dp == NULL) {
        return NULL;
    }

    initialize_dp_table(dp, m, n);
    fill_dp_table(x, y, dp, m, n);

    result = reconstruct_lcs(x, y, dp, m, n);

    free_dp_table(dp, m);

    return result;
}

static int** create_dp_table(int m, int n) {
    int **dp;
    int i;

    dp = (int **)malloc((m + 1) * sizeof(int *));
    if (dp == NULL) return NULL;

    i = 0;
    while (i <= m) {
        dp[i] = (int *)malloc((n + 1) * sizeof(int));
        if (dp[i] == NULL) {
            int j = 0;
            while (j < i) {
                free(dp[j]);
                j++;
            }
            free(dp);
            return NULL;
        }
        i++;
    }
    return dp;
}

static void initialize_dp_table(int **dp, int m, int n) {
    int i, j;

    i = 0;
    while (i <= m) {
        dp[i][0] = 0;
        i++;
    }

    j = 0;
    while (j <= n) {
        dp[0][j] = 0;
        j++;
    }
}

static void fill_dp_table(const char *x, const char *y, int **dp, int m, int n) {
    int i, j;

    i = 1;
    while (i <= m) {
        j = 1;
        while (j <= n) {
            if (x[i - 1] == y[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                if (dp[i - 1][j] > dp[i][j - 1]) {
                    dp[i][j] = dp[i - 1][j];
                } else {
                    dp[i][j] = dp[i][j - 1];
                }
            }
            j++;
        }
        i++;
    }
}

static char* reconstruct_lcs(const char *x, const char *y, int **dp, int m, int n) {
    int lcs_length, i, j, index;
    char *result;

    lcs_length = dp[m][n];
    result = (char *)malloc((lcs_length + 1) * sizeof(char));
    if (result == NULL) return NULL;

    result[lcs_length] = '\0';

    i = m;
    j = n;
    index = lcs_length - 1;

    while (i > 0 && j > 0) {
        if (x[i - 1] == y[j - 1]) {
            result[index] = x[i - 1];
            i--;
            j--;
            index--;
        } else if (dp[i - 1][j] > dp[i][j - 1]) {
            i--;
        } else {
            j--;
        }
    }

    return result;
}

static void free_dp_table(int **dp, int m) {
    int k;

    k = 0;
    while (k <= m) {
        free(dp[k]);
        k++;
    }
    free(dp);
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