#include <stdio.h>

int main () {
	
	float atual_salario, percen_aumento, reajuste;
	
	printf ("Inclua apenas n�meros! S�mbolos de porcentagem e v�rgula n�o seram aceitos.\n");
	
	printf ("Informe seu sal�rio atual: ");
	 
	 scanf ("%f", &atual_salario);
	 
    printf ("Informe o percentual de aumento: ");
     
     scanf ("%f", &percen_aumento);
     
       reajuste = atual_salario * (1 + percen_aumento/100);
       
printf ("\nSal�rio reajustado: %.2f", reajuste);
    
return (0);
}
