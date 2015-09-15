// [2015-09-14] Challenge #232 [Easy] Palindromes
// http://www.reddit.com/r/dailyprogrammer/comments/3kx6oh/20150914_challenge_232_easy_palindromes/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void clean(char *a) {
    char *x = a, *i = a;

    while (*x) {
    	if (*x == ' '){
    		x++;
    	}
       	else if (ispunct(*x)) {
          	x++;
      	}
       	else if (isupper(*x)) {
          	*i++ = tolower(*x);
          	x++;
       	}
       	else if (x == i) {
          	x++;
          	i++;
       	}
       	else {
          	*i++ = *x++;
       	}
    }

    *i = 0;
}


int main(int argc, char *argv[]) {

	char a[256];
	strcpy(a, argv[1]);
	clean(a);
	int len = strlen(a);
	int x,i;

	for(i = 0, x = len-1; i < len/2; i++, x--) {
		printf("%c %c\n", a[i],a[x] );
		if(a[i] != a[x]){
			printf("Not a palindrome\n");
			return 0;
		}
	}
	printf("Palindrome\n");
	return 0;
}

