#include <stdio.h>

#define PI 3.14159f

int main(void)
{
	int r = 0;

	printf("Enter radius: ");
	scanf("%d", &r);

	printf("4.0f / 3.0f * PI * r * r * r = %f\n", 4.0f / 3.0f * PI * r * r * r);
}
