#include <stdio.h>
#include <stdlib.h>

/*Fibonacci versione iterativa*/
void fibonacci_memo_iter(int j);
void printArray(int arr[], int size);

int main()
{

    fibonacci_memo_iter(5);

}

void fibonacci_memo_iter(int j)
{

	// tabella memoization
    int f[j];
    // (Per definizione) assegno alle prime due posizioni il valore 1
    f[0] = 1;
    f[1] = 1;

    // ad ogni i-esimo elemento viene assegnato il valore risultante dalla somma dei due precedenti (i-1 e i-2)
    // (Parto da 2 per l'assegnamento precedente)
    for(int i = 2; i <= j; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }


    printArray(f, j);

}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}