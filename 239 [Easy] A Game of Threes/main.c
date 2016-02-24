// [2015-11-02] Challenge #239 [Easy] A Game of Threes
// https://www.reddit.com/r/dailyprogrammer/comments/3r7wxz/20151102_challenge_239_easy_a_game_of_threes/
#include <stdio.h>


void threes(int n){
	while(n != 1){
		if(n % 3 == 0){
			printf("%d 0\n", n);
			n = n / 3;
		}

		else if((n + 1) % 3 == 0){
			printf("%d 1\n", n);
			n = (n + 1) / 3;
		}

		else{
			printf("%d -1\n", n);
			n = (n - 1) / 3;
		}
	}
	printf("%d\n", n);
}



int main(int argc, char *argv[]) {
	char p;
	int start = strtol(argv[1], &p, 10);

	threes(start);
}

