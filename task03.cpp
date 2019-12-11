/*
  Write a "task03" program for basic adding. It should handle -f, -i and -v parameters

  task03 -f data.txt // outputs sum of numbers in data.txt
  task03 -i // interactive mode: sums numbers from standard input until empty input provided
  task03 4 7 12 // outputs sum of any number of arguments (23 in this case)
  implement verbose mode -v, which outputs additional info about arguments, i.e.
    task03 -f data.txt -v // should print "sum of numbers in data.txt is 13"
    task03 -v -f data.txt // same result
    task03 -v -i // should print like "sum of 7 numbers from standard input is 38"
    task03 2 2 13 6 -v // should print "sum of 4 arguments is 23"
    task03 -v 13 4 // should print "sum of 2 arguments is 17"
*/

#include <stdio.h>
#include <stdlib.h>

bool isV = false;

int hasArg(char checkChar, int argc, char* argv[]) {
  bool result = false;
  for(int i=1; i<=argc; i++) {
      char* arg = argv[i];
      if(arg[0]!='-') continue;
      if(arg[1]==checkChar) return i;
  }
  return 0;
}

void handleFile(char* file) {
  printf("%s %s", "Zpracovavam soubor", file);
}

void handleVerbose() {
  
}

void handleInteractive(/*input*/) {
 // TODO
 printf("%s", "Zadej input");
}

int main(int argc, char* argv[]) {
  int pos;
  if(pos=hasArg('f', argc, argv)) if(pos+1<argc) handleFile(argv[pos+1]);
  if(hasArg('i', argc, argv)) if(pos+1<argc) handleInteractive();
  if(hasArg('v', argc, argv)) if(pos+1<argc) handleVerbose();
  return 0;
}