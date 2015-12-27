// [2015-12-14] Challenge # 245 [Easy] Date Dilemma
// https://www.reddit.com/r/dailyprogrammer/comments/3wshp7/20151214_challenge_245_easy_date_dilemma/
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

	int y, m, d;
	int b = 0;

	char *str = argv[1];
	char *p = str;
	
		while (*p) { 
		    if (isdigit(*p)) { 
		        long val = strtol(p, &p, 10);

		        if(b > 0){
		        	if(b == 1){
		        		m = val;
		        		b+=2;
		        	}
		        	if(b == 2){
		        		d = val;
		        		b+=2;
		        	}

		        	if(b == 3){
		        		d = val;
		        	}
		        	if(b == 4){
		        		y = val;
		        	}
		        }
		        else {
			        if(val > 13 ) {
			        	y = val;
			        	b = 1;
			        } else {
			        	m = val;
			        	b = 2; 
			        }

	        	}	

		    } 
		    else { 
		        p++;
		    }
	}
	if(y < 1999){
		y += 2000;
	}

	printf("%d-%02d-%02d\n", y,m,d); 
		
}

