// [2015-07-13] Challenge #223 [Easy] Garland words
// http://www.reddit.com/r/dailyprogrammer/comments/3d4fwj/20150713_challenge_223_easy_garland_words/
#include <stdio.h>
#include <string.h>

int garland(char *word){
	int i;
	for(i = strlen(word) - 1; i>=0; i--) {
		if(0 == strncmp(word,word+(strlen(word)-i),i))
			return i;
	}
}

int main(int argc, char *argv[]) {
	printf("-> %d\n",garland("programmer"));
	printf("-> %d\n",garland("ceramic"));
	printf("-> %d\n",garland("onion"));
	printf("-> %d\n",garland("alfalfa"));

	return 0;
}