#include <stdio.h>
int main(){
	char ch;
	int position(char);
	printf("Type some letters and non-letters and press 'Enter' \n");
	while ((ch = getchar()) ! ='\n')
		printf("%c%2d\n", ch,position(ch ));
}//end main 
int isUpperCase(char, ch){
	return ch >= 'A' && ch <= 'Z';
}// end isUpperCase 
int isLowerCase(char, ch){
	return ch >= 'a' && ch <= 'z';
}// end isLowerCase
 
int position(char ch ){
	int isUpperCase(char), isLowerCase(char);
	if (isUpperCase(ch)) return ch- 'A' +1;
	if (isLowerCase(ch))return ch - 'a' + 1;
	return 0;
	}// end isPosition 

