#include <stdio.h>
#include <string.h>

char tracks[][80] = {
	"I left my heart in some cage",
	"Norfolk, Norfolk - a wonderful",
	"Dancing with a fork",
	"From here to somewhere",
	"The boy from Japan",
};

void find_track(char search_for[])
{
	int i;
	for (i = 0; i < 5; i++) {
		if (strstr(tracks[i], search_for))
			printf("Track %i: '%s'\n", i, tracks[i]);
	}
}

int main() 
{
	char search_for[80];
	printf("Search for: \n");
	scanf("%s", search_for);
	find_track(search_for);
	return 0;
}