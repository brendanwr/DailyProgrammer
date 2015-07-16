// [2015-07-15] Challenge #223 [Intermediate] Eel of Fortune
// http://www.reddit.com/r/dailyprogrammer/comments/3ddpms/20150715_challenge_223_intermediate_eel_of_fortune/
#include <stdio.h>
#include <string.h>


int main(int argc, char* argv[]){
	printf("-> %s\n",(problem("synchronized", "snond")) ? "true" : "false");
	printf("-> %s\n",(problem("misfunctioned", "snond")) ? "true" : "false");
	printf("-> %s\n",(problem("mispronounced", "snond")) ? "true" : "false");
	printf("-> %s\n",(problem("shotgunned", "snond")) ? "true" : "false");
	printf("-> %s\n",(problem("snond", "snond")) ? "true" : "false");
	return 0;
}

int problem(char* secret, char* offen){
	int i,j,x;
	for(i = 0; i < strlen(secret); i++){
		for(x = 0; x < strlen(offen); x++){
			if(secret[i] == offen[x]){
				if(x-1 != j && x!=0)
					return 0;
				j = x;
				i++;
			}
		}
	}
	return 1;
}