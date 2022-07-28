#include <stdio.h>
#include <string.h>
#define MaxNameSize 14 
#define MaxNameBuffer MaxNameSize+1 
#define MaxNames 8 

int main(){
	void insertionSort3(int, int, int max, char [] [max]);
	char name[MaxNames][MaxNameBuffer] =
	  {"Samlal, Rawle", "williams ,Mark" "Delwin, Mac", "Taylor ,Victor", "mohamed, Abu",
	   "Singh, Krishna ", "Tawari, Tau", "abdol , Zaid "};
	int id [MaxNames] ={8742, 5418, 4833, 4230, 8583, 2546, 5768,3313};
	parallelSort(0, MaxNames-1, MaxNameBuffer, name,id);
	printf("\nThe sorted names and IDS are \n\n");
        for (int h =0; h<MaxNames; h++)
		printf("%-18s %d\n", name[h], id[h]);
}//end main 
