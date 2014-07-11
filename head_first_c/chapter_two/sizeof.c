#include <stdio.h>

void fortune_cookie(char msg[])
{
	printf("Message reads: %s\n", msg);
	printf("msg occupies %lu bytes\n", sizeof(msg));
	printf("The array variable points to %p\n", msg);
}

int main() 
{
	printf("Size of int: %lu\n", sizeof(int));
	printf("size of turtles!: %lu\n", sizeof("turtles!"));
	fortune_cookie("Cookies make you fat!");
}