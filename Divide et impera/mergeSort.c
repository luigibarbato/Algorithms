#include <stdio.h>
#include <stdlib.h>

/*

*Merge Sort**

- Divide l'array in due porzioni
- Ordina ogni porzione
- Unisce le porzioni per ottenere l'array ordinato

*/


int main(){

int a[]={0,6,3,1};
int arr_size = sizeof(a)/sizeof(a[0]); 
int l = 0;
int r = arr_size -1;

printf("Prima: \n");
printArray(a,arr_size);
mergeSort(a,l,r);
printf("Prima: \n");
printArray(a,arr_size);
}

int mergeSort(int a[],int l, int r){

if(l>r) return -1;

if(l<r){

int med = l+(r-l)/2; // rimuovo l'overflow in caso di numeri grandi.

mergeSort(a,l,med); // porzione di sinistra
mergeSort(a,med+1,r); // porizione di destra
merge(a,l,med,r); // unisco

}

return a;

}

void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    /* Creo due array temporanei:
    L[l...m]	R[m+1..r] */
    int L[n1], R[n2]; 
  
    /* li riempio */
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    /* ad ogni passo confronto gli elementi ed inserisco il più piccolo nel terzo array d'appoggio*/
    i = 0; // indice prima porzione
    j = 0; // indice seconda porzione
    k = l; // indice dell'array soluzione 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    /* Termino la copia degli elementi di sinistra L[]*/
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Termino la copia degli elementi di destra R[]*/
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 


void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 