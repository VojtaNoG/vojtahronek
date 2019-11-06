/*
Decode the task02.dat file and find out the birth dates of John Doe and Sam Sepiol.

format: N records of 6 bytes:
  byte 1-2: birth date yyyyyyyd ddddmmmm (year of birth LSB - 1900)
  byte 3-6: height (float LSB)

separator 0xFF (after N records)
name1|name2|...|nameN|
*/


#include <cstdio>

#define byte unsigned char //definice datoveho typu byte

byte data[8];

int main() {
  FILE * fd = fopen("task02.dat", "rb"); //otevreni souboru pro cteni bin
  //char bytes = fgetc(fd);
  //fread(fd, byte[0], byte[2], byte);
  byte in = fread(data, 8, 1, fd); //cteni dat ye souboru
  //Potrebuji si nastudovat, jak to presneji funguje...
  printf("%X %X", in);
  //fclose();
}