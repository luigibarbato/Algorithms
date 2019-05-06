#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>


int main(){


// Array di inizi
int s[]={9,9,9,11,11,13,13,14,15,15};
int n = sizeof(s)/sizeof(s[0]); 
// Array di fini
int f[]={10.30,10.30,12.30,12.30,2,2.30,2.30,4.30,4.30,4.30};
// Soluzione
int k[]={0};
// Per greedy ordino gli inizi
selectionSort(s,n);

// Assegno il primo elemento alla soluzione
k[0]=s[0];


// Numero di assegnamenti
int d=0;	

for(int i=0; i<n; i++){

if(s[i]<=k[i]){

printf("Compatibile \n");
	k[i]=s[i];
}
else
{
	k[d+1]=s[i];
	d++;
	printf("Non Compatibile \n");
	printf("aula: %d Aperta!\n",d);

}

}

printArray(k,n);
}












void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 
  
    // One by one move boundary of unsorted subarray 
    for (i = 0; i < n-1; i++) 
    { 
        // Find the minimum element in unsorted array 
        min_idx = i; 
        for (j = i+1; j < n; j++) 
          if (arr[j] < arr[min_idx]) 
            min_idx = j; 
  
        // Swap the found minimum element with the first element 
        swap(&arr[min_idx], &arr[i]); 
    } 
} 

void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 