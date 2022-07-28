#include <stdio.h>
#include <string.h>
#define MaxNameSize 14 
#define MaxNameBuffer MaxNameSize+1 
#define MaxNames 8 

int main(){
	void insertionSort3(int, int, int max, char [] [max]);
	char name[MaxNames][MaxNameBuffer] =
	{"Samlal, Rawle", "williams ,Mark" "Delwin,Mac", "Taylor ,Victor", "mohamed , Abu", "Singh, Krishna ", "Tawari, Tau", "abdol , Zaid "};
	insertionSort3(0, MaxNames-1, MaxNameBuffer, name);
	printf("\NThe sorted names are\n\n");
	for (int h=0; h<MaxNames; h++)printf("%s\n",name[h]);
}// end main
 void insertionSort3(int lo , int hi , int max , char list [][max]){
	 //Sort the strings in list [lo] to list [hi] in alphabetical order .
	 //The maximum string size is max -1 (char taken up by \0).
	char key [max];
	for (int h= lo+1; h<= hi; h++){
		strcpy (key, list[h]);
		int k= h-1; //start comparing with previous item 
	        while (k>= lo && strcmp (key, list[k])<0){--k;
		}
		strcpy(list[k+1],key );
	}// end for 
	}// end insertionSort3

