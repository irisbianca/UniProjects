#include <stdio.h>

int main () {
	int n1, n2, n3, n4, soma1, soma2, soma3, soma4, sub1, sub2, sub3, mult, media;
	
	
	printf ("Digite o primeiro número: ");
	
	 scanf ("%d", &n1); 
    
	printf ("Digite o segundo número: ");
	
	 scanf ("%d", &n2);
	
	printf ("Digite o terceiro número: ");
	
	 scanf ("%d", &n3);
	
printf ("\nSOMAS");
	
	  soma1 = n1 + n2;
	  soma2 = n1 + n3;
   	  soma3 = n2 + n3;
	  soma4 = n1 + n2 + n3;
	
	printf ("\nO programa apresenta quatro possibilidades de soma, sendo, respectivamente: soma do primeiro com o segundo número, soma do primeiro com o terceiro número, soma do segundo com terceiro número e soma entre todos números.\n");
	
	printf ("\nResultado 1: %d", soma1);
	printf ("\nResultado 2: %d", soma2);
	printf ("\nResultado 3: %d", soma3);
	printf ("\nResultado 4: %d\n", soma4);
	
printf ("\nSUBTRAÇÕES\n");

      sub1 = n1 - n2;
      sub2 = n1 - n3;
      sub3 = n2 - n3;
	
	printf ("\nResultado 1: %d", sub1);
	printf ("\nResultado 2: %d", sub2);
	printf ("\nResultado 3: %d\n", sub3);
	
printf ("\nMULTIPLICAÇÃO\n");

      mult = n1 * n2 * n3;
    
    printf ("\nResultado: %d\n", mult);
    
printf ("\nMÉDIA\n");

      media = (n1 + n2 + n3)/3;
    
    printf ("\nResultado: %d", media);
    
printf ("\nFim do programa!\n");
		
return (0);
}
