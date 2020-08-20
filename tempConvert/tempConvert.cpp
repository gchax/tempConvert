#include<stdio.h>

int main() {
	double f, c;
	printf("Input the temperature (Farenheit) : ");
	scanf_s("%lf", &f);


	if (f >= 32) {
		c = (5 * (f - 32)) / 9;
		printf("It's %.2lf degree celcius", c);
	}
	else {
		printf("It's too cold to live");
	}
	return 0;
}