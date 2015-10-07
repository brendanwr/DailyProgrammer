// [2015-10-05] Challenge #235 [Easy] Ruth-Aaron Pairs
// https://www.reddit.com/r/dailyprogrammer/comments/3nkanm/20151005_challenge_235_easy_ruthaaron_pairs/
#include <stdio.h>

void ruth_aaron(int a, int b){

	int a_add = 0, b_add = 0;
	int divisor = 2;
	int a_num = a;
	int b_num = b;

	while(a_num != 1) {
		if(a_num % divisor == 0){
			a_num = a_num / divisor;
			a_add += divisor;
		}
		divisor++;
		if(divisor > a)
			break;
	}

	divisor = 2;

	while(b_num != 1) {
		if(b_num % divisor == 0){
			b_num = b_num / divisor;
			b_add += divisor;
		}
		divisor++;
		if(divisor > b)
			break;
	}

	printf("(%d,%d) %s\n", a,b, (a_add == b_add) ? "VALID" : "NOT VALID" );
}


int main(int argc, char *argv[]) {
	ruth_aaron(714,715);
	ruth_aaron(77,78);
	ruth_aaron(20,21);
	ruth_aaron(5,6);
	ruth_aaron(2107,2108);
	ruth_aaron(492,493);
	ruth_aaron(128,129);
}

