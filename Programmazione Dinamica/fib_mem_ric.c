#include <stdio.h>
#include <stdlib.h>

/*Fibonacci versione ricorsiva*/
int fibonacci_memo_ric(int f[], int j);
void printArray(int arr[], int size);

int main()
{
    // Decido quanti numeri sommare
    int j = 5;
    // array memoization
    int f[j];
    // inizializzo a 0
    for(int i=0; i<=j; i++){
        f[i] = 0;
    }
    // risultato
    int res = fibonacci_memo_ric(f, j);

    printf("Risultato: %d", res);

}

int fibonacci_memo_ric(int f[], int j)
{
    // se la condizione è soddisfatta vuol dire che sono arrivato alla fine e dunque aggiungo 1 
    // alle prime due posizione della tabella
    // (Per definizione)
    if(j <= 2)
    {
        f[j] = 1;
        return f[j];
    }
    // se la condizione è soddisfatta vuol dire che il j-esimo elemento è stato già calcolato
    else if(f[j] != 0)
    {
        return f[j];
    }
    // altrimenti al j-esimo elemento assegno il risultato della somma dell'elemento j-1 e j-2
    else
    {
        f[j] = fibonacci_memo(f, j - 1) + fibonacci_memo(f, j - 2);
        return f[j];
    }


}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}