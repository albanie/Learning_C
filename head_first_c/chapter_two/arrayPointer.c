#include <stdio.h>

int main() 
{
	int drinks[] = {4,3,2};
	printf("first order: %i drinks\n", drinks[0]);
	printf("first order: %i drinks\n", *drinks);

	printf("third order: %i drinks\n", drinks[2]);
	printf("first order: %i drinks\n", *(drinks+2));


}