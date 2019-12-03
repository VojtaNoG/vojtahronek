/*
Decode the task02.dat file and find out the birth dates of John Doe and Sam Sepiol.

format: N records of 6 bytes:

  byte 1-2: birth date yyyyyyyd ddddmmmm (year of birth LSB - 1900)

  byte 3-6: height (float LSB)

separator 0xFF (after N records)

name1|name2|...|nameN|
*/

#include <cstdio>
#include <windows.h>

#define byte unsigned char

byte data[8];

byte flipBits(byte number) {
	byte result = 0;
	for(int i=0; i<8; ++i) {
		bool bit = number & (1<<i);
		result |= bit<<(7-i);
	}
	return result;
}

void readDate(int* y, int* m, int* d, byte b1, byte b2) {
	*m = b2 & 0b1111;
  *d = b2>>4 | ((b1 & 0b1)<<4);
  *y = flipBits(b1>>1)>>1;
}

int main() {
//   byte buffer[8];
//   byte bufferCopy[8];
//   FILE * fd = fopen("task02.data", "rb");
//   fread(buffer, sizeof(buffer), 1, fd);
//
//   for(int j=0; j<1; j++) {
//     bufferCopy[j] = buffer[j] >> 1;
//     printf("%u", bufferCopy[j]);
//   }
//   byte data[8];
//   FILE * fd = fopen("task02.dat", "rb"); //otevreni souboru pro cteni bin, za predpokladu, ze se nachazi ve stejne slozce
//   char bytes = fgetc(fd);
//   fread(fd, byte[0], byte[2], byte);
//   byte in = fread(data, 8, 1, fd); //cteni dat ze souboru
//   printf("%X %X", in);
//   fclose();

  FILE * fd = fopen("task02.dat", "rb");
  int y, m, d;

  fread(data, 8, 1, fd);
  readDate(&y, &m, &d, data[0], data[1]);
  printf("John Doe se narodil: %d.%d.%d\n", d, m, y+1900);

  fread(data, 8, 1, fd);
  readDate(&y, &m, &d, data[0], data[1]);
  printf("Sam Sepiol se narodil: %d.%d.%d\n", d, m, y+1900);
  printf("\n");
}