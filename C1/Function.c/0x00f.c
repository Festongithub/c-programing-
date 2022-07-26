#include <stdio.h>
int main(){
	void skiplines(int);
	printf("Sing a song of sixpence\n");
	skiplines(2);
	printf("A pocket full of rye \n");
}//end main 
 
void skiplines (int n){
	for (int h=1; h<=n; h++)
		printf("\n");
} // end skiplines 


