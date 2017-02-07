// [2016-02-16] Challenge #254 [Easy] Atbash Cipher
// https://www.reddit.com/r/dailyprogrammer/comments/45w6ad/20160216_challenge_254_easy_atbash_cipher/
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){

	int i, length = strlen(argv[1]);

	for(i = 0; i < length - 1; i++){
		if(argv[1][i] >= 97 && argv[1][i] <= 122) {
			printf("%c", 122 - (argv[1][i] - 97));
		}
		else{
			printf("%c", argv[1][i]);
		}
	}
	printf("\n");
}