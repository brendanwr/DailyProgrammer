// [2015-07-06] Challenge #222 [Easy] Balancing Words
// http://www.reddit.com/r/dailyprogrammer/comments/3c9a9h/20150706_challenge_222_easy_balancing_words/
#include <stdio.h>
#include <string.h>

int balance(char *word){
	int i, pos, pivot = 1, left = 0, right = 0, len = strlen(word);


	while(pivot < len){
		left = 0;
		right = 0;

		pos = pivot;
		for(i=0; i< pivot; i++){
			left += (pos--) * (word[i] - 64);
		}

		pos = 1;
		for(i=pivot+1; i < len; i++){
			right += (pos++) * (word[i] - 64);
		}

		if(left == right) {
			for(i=0;i<pivot;i++)
				printf("%c", word[i]);
			printf(" %c ",  word[pivot] );
			for(i=pivot+1;i<len;i++)
				printf("%c", word[i]);
			printf("- %d\n", left);
			return 0;
		}
		pivot++;
	}
	printf("%s DOES NOT BALANCE\n", word);
	return 0;
}

int main(int argc, char *argv[]) {
	balance("CONSUBSTANTIATION");
	balance("WRONGHEADED");
	balance("UNINTELLIGIBILITY");
	balance("SUPERGLUE");
	return 0;
}

