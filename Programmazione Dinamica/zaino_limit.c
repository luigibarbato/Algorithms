#include <stdio.h>
#include <stdlib.h>

int get_max(int num1, int num2);

int main(){

// Array di pesi
int w[]={4,2,3,4};
// Array di valori
int p[]={10,7,8,6};
// Massima capacità
int c=9;
// Numero di oggetti
int n = sizeof(p)/sizeof(p[0]); 
// Soluzione
int dp[n+1][c+1];


// Inizializzo la prima riga e la prima colonna a 0
for(int i=0; i<=n; i++){
	dp[i][0] = 0; 
	for(int j=0; j<=c; j++){
	dp[0][j] = 0;
	}
}

for(int i=1; i<=n; i++){	// Parto da 1 perchè le posizioni 0 sono state inizializzate
	for(int j=1; j<=c; j++){
		if(w[i-1]<=j){
			// l'oggetto è stato preso
			dp[i][j] = get_max(dp[i-1][j-w[i-1]]+p[i-1],dp[i-1][j]);
		}
		else
			// l'oggetto non è stato preso
			dp[i][j] = dp[i-1][j];
	}

}

printf("Bottino: %d",dp[n][c]);

}

int get_max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}