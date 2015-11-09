// [2015-11-09] Challenge #240 [Easy] Typoglycemia
// https://www.reddit.com/r/dailyprogrammer/comments/3s4nyq/20151109_challenge_240_easy_typoglycemia/
#include <stdio.h>
#include <time.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int i, x, length, random;
	char temp;
	for(i = 1; i < argc; i++){
		length = sizeof(argv[i]) - 2;
		if(length > 3) {
			for(x = 1; x < length; x++){
				random = 1+(rand() % length);
				temp = argv[i][x];
				argv[i][x] = argv[i][random];
				argv[i][random] = temp;
			}
		}
		printf("%s ", argv[i]);
	}
}
