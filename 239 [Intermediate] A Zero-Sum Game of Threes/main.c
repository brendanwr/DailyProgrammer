// [2015-11-04] Challenge #239 [Intermediate] A Zero-Sum Game of Threes
// https://www.reddit.com/r/dailyprogrammer/comments/3rhzdj/20151104_challenge_239_intermediate_a_zerosum/
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

		else if((n - 1) % 3 == 0){
			printf("%d -1\n", n);
			n = (n - 1) / 3;
		}

		else if((n + 2) % 3 == 0){
			printf("%d 2\n", n);
			n = (n + 2) / 3;
		}

		else{
			printf("%d -2\n", n);
			n = (n - 2) / 3;
		}
	}
	printf("%d\n", n);
}



int main(int argc, char *argv[]) {
	char p;
	int start = strtol(argv[1], &p, 10);

	threes(start);
}

