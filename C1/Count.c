/** find and print the first non-blank character in the data, count the number of blanks before the first non-blank */
#include <stdio.h>
int main(){
	char ch;
	int numBlanks=0;
	printf("type some data and press 'Enter'\n");
	while ((ch=getchar())==' ')// repeat as long as ch is blank 
		numBlanks++;     // add 1 to numBlanks
	printf("the number of leading blanks is %d\n", numBlanks);
	printf("the first non-blank is %c \n", ch);
}
