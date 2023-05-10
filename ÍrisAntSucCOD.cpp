#include <stdio.h>


int main () 
{
	int num, antecessor, sucessor;
	
	printf ("Digite um número inteiro: ");
	 scanf ("%d", &num);
	
	 antecessor = num - 1;
	printf ("Antecessor: %d", antecessor);
	 
	 sucessor = num + 1;
	printf ("\nSucessor: %d", sucessor);
	
	
	return (0);
}
