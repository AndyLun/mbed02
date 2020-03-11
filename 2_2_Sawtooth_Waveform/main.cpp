#include "mbed.h"

AnalogOut Aout(DAC0_OUT);

int main() {
	float i;

	while(true) {
		for(i = 0; i < 1; i += 0.1) {
			Aout = i;
			wait(0.001);
		}
	}
}