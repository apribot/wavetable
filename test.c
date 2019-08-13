//SAW 0-11
//SQUARE 0-11
//TRIANGLE 0-11

#include <stdio.h>
#include "wavetable.h"

int main()
{
	int bit;

   	for(int t = 0; t < 256; t++) {
  		bit = (TRIANGLE0[t] + SAW11[t]) / 2;
  		printf("%d \n", bit);
	}
   return 0;
}