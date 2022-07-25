/** read the first character in the data, print it, its code and the value of EOF*/
#include <stdio.h>
int main(){
	printf("Type some data and press 'Enter' \n");
	char ch = getchar();
	printf("\nThe first character is %c \n", getchar());        printf("its code is %d \n", ch);
	printf("Its code is %d \n", getchar()); // wrong 
}
