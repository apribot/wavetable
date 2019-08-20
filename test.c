//SAW 0-11
//SQUARE 0-11
//TRIANGLE 0-11

#include <stdio.h>
#include "wavetable.h"

int * getWave(int pos) {
	static int form[256];
	int position;
	int remainder;

	position = pos / 28;

	remainder = pos % 28;
	// interpolate position
	// 1008 positions (36 is a factor)
	// arduino returns 0 - 1023 via analogRead()
	// trim off top/bottom?
	if (remainder == 0)
	{
		for (int i = 0; i < 256; ++i) {
			form[i] = wavetable[position][i];
		}
	} else {
		for (int i = 0; i < 256; ++i) {
			form[i] = ((wavetable[position+1][i] * remainder) + (wavetable[position][i] * (28 - remainder))) / 28;
		}
	}
	return form;
}

int main()
{
	int *bit;
	bit = getWave(999);
   	
   	for(int t = 0; t < 255; t++) {
  		printf("%d \n", *(bit + t));
	}
   return 0;
}