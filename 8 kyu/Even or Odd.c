// -----------------------------------------------------------
// Create a function that takes an integer as an argument and returns "Even" for even numbers or "Odd" for odd numbers.
// -----------------------------------------------------------

const char *even_or_odd (int number){
  // you can return string literals
	return number % 2 == 0 ? "Even" : "Odd";
}