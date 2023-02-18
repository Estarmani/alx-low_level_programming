#include <stdio.h>

int main(void)
{	int i;
	char c;
	float f;
	double d;
	long int e;
	long long int g;

		printf("The size of an int:\n"); sizeof(i);
		printf("The size of a char:\n"); sizeof(c);
		printf("The size of a flaot:\n"); sizeof(f);
		printf("The size of a double:\n"); sizeof(d);
		printf("The size of a long int:\n"); sizeof(e);
		printf("The size of a long long int:\n"); sizeof(g);

		return (0);
}
/*
 * main - entry point
 * This code will display the different variable sizes of my computer
 * return - always 0 (success)
*/
