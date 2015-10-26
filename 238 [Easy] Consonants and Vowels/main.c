// [2015-10-26] Challenge #238 [Easy] Consonants and Vowels
// https://www.reddit.com/r/dailyprogrammer/comments/3q9vpn/20151026_challenge_238_easy_consonants_and_vowels/
#include <stdio.h>
#include <string.h> 
#include <time.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
	char *con = "bcdfghjklmnpqrstvwxyz";
	char *vow = "aeiou";
	srand(time(NULL));
	int i, length = strlen(argv[1]), clength = strlen(con), vlength = strlen(vow);
	for(i = 0; i < length; i++){
		switch(argv[1][i]){
			case 'c' :
				printf("%c",con[rand() % clength]);
				break;
			case 'C' :
				printf("%c",toupper(con[rand() % clength]));
				break;
			case 'v' :
				printf("%c",vow[rand() % vlength]);
				break;
			case 'V' :
				printf("%c",toupper(vow[rand() % vlength]));
				break;
			default:	
				printf("\nPlease input a word of only c's and v's\n");
				return -1;
		}
	}
	printf("\n");
}


 