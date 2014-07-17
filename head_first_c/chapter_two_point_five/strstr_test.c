#include <stdio.h>
#include <string.h>

int main()
{
	char s1 [] = "My house is small";
	char s2 [] = "My car is green";

	printf("Returned string one: %s\n", strstr(s1, "house"));
	printf("Returned string two: %s\n", strstr(s2, "car"));
}