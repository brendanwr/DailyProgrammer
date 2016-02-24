// [2015-07-20] Challenge #224 [Easy] Shuffling a List
// http://www.reddit.com/r/dailyprogrammer/comments/3e0hmh/20150720_challenge_224_easy_shuffling_a_list/
#include <stdio.h>
#include <time.h>

char** shuffle(char* a[], int n){
	int i, j;
	char* temp;
	srand(time(NULL));
	for(i=n-1; i > 0; i--){
		j = rand()% i;
		temp = a[j];
		a[j] = a[i];
		a[i] = temp;
	}
	return a;
}


int main(int argc, char *argv[]) {
	char* input[] = {"apple", "blackberry","cherry", "dragonfruit", "grapefruit", "kumquat", "mango", "nectarine", "persimmon", "raspberry", "raspberry"};
	int i, length =  sizeof (input) / sizeof (*input);
	char** output = shuffle(input, length);
	for(i = 0; i < length; i++){
		printf("%s ", output[i]);
	}
	printf("\n");

	char* vowels[] = {"a", "e", "i", "o", "u"};
	length =  sizeof (vowels) / sizeof (*vowels);
	char** vowels_out = shuffle(vowels, length); 
	for(i = 0; i < length; i++){
		printf("%s ", vowels_out[i]);
	}
	printf("\n");


	return 0;

}

