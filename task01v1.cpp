#include <cstdio>
#include <ctype.h>

char* toUpper(char* input) {
  for(int i=0; input[i]!=0; i++) {
    input[i] = toupper(input[i]);
  }
  return input;
}
int main() {
	char input[] = "Hello, World!";
	puts(toUpper(input)); // should print HELLO, WORLD!
}