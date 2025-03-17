#include <stdio.h>

#define FIVE_PERCENT 1.05f

int main(void)
{
	float user_input = 0.00f;

	printf("Enter an amount: ");
	scanf("%f", &user_input);

	printf("With tax added: $%.2f\n", user_input * FIVE_PERCENT);

	return 0;	
}
