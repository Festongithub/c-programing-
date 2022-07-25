#include <stdio.h>
int main(){
	double c, f;
	printf("Celcius Farenheit\n\n");
	for (c=0; c<=100; c+=10){
		f=32 +9*c/5;
		printf("%5.0f %9.0f\n", c, f);
	}
}
