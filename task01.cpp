#include <cstdio>
#include <ctype.h>

char* toUpper(char* input) {
	// TO DO
  for(int i=0; i<=13; i++) {
    input[i] = toupper(input[i]);
  }
  return input;
}

int main() {

	char input[] = "Hello, World!";
	puts(toUpper(input)); // should print HELLO, WORLD!

}