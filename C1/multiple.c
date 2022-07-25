#include <stdio.h>
int main (){
	int factor, start, finish;
	printf("Type of table? ");
	scanf("%d", &factor);
	printf("From ?");
	scanf("%d", &start);
	printf("To ?");
	scanf("%d", &finish);
	printf("\n");
	for (int m=1 ; m<=finish; m++)
		printf("%2d* %d= %2d\n", m, factor, m* factor);
}
