#include <stdio.h>

int main()
{
	int x;
	printf("Enter Number: ");
	scanf("%d", &x);


	(x & 1) ? printf("Odd\n") : printf("Even\n");
	
	return (0);
}
