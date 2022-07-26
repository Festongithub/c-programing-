#include <stdio.h>
int main() {
	int x1, x2;
	 int min(int , int);
	 printf("Enter two whole numbers: ");
	 scanf("%d %d", &x1, &x2);
	 while (x1 != 0 || x2 !=0){
		 printf("The smaller is %d \n", min(x1, x2));
		 printf("Enter two whole numbers : ");
		 scanf("%d %d", &x1, &x2);
	 }
}// end main 
 int min(int a, int b){
	 if (a<b) return a;
	 return b; 
 }// end min 

	 
