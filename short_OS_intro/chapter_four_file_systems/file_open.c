#include <stdio.h>

int main()
{
	FILE *fp = fopen("/Users/Sam/learn_c/learning_C/short_OS_intro/chapter_four_file_systems/raw.txt", "r'");
	char ch[100];
	fgets(ch, 99, fp);
	printf("%s", ch);
	fclose(fp);
	return 0;
}