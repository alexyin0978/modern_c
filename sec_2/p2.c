#include <stdio.h>

#define PI 3.14f

int main(void)
{
	int r = 10;

	printf("PI: %.2f\n", PI);

	printf("\n");

	printf("Below is 4 / 3\n");
	printf("output: %f\n", 4 / 3 * PI * r * r * r);

	printf("\n");

	printf("Below is 4.0f / 3.0f\n");
	printf("output: %f\n", 4.0f / 3.0f * PI * r * r * r);
}
