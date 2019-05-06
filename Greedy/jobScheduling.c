#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>


int main(){

int n=4;

// Inizi per intervallo (ORDINATI)
int s[4]={1,2,5,9};

// Fini per intervallo (ORDINATI)
int j[4]={3,4,9,13};

// Soluzione
int a[4];

// Assegno il primo elemento dato l'ordinamento
a[0]=j[0];

// Spiazzamento
int last = 0;

for(int i=1; i<=n; i++){

// Controllo se l'inizio dell'i-esimo intervallo è compatibile con la fine dell'ultimo intervallo accettato.
	if(s[i] >= j[last]){

		a[i] = j[i];

		last = i;

	}

	else {

		a[i] = -1;
	}
}

for(int i=0; i<=n; i++){

	printf("%d ", a[i]);

}
 
}