#include <stdio.h>

int main () {
	
	float atual_salario, percen_aumento, reajuste;
	
	printf ("Inclua apenas números! Símbolos de porcentagem e vírgula não seram aceitos.\n");
	
	printf ("Informe seu salário atual: ");
	 
	 scanf ("%f", &atual_salario);
	 
    printf ("Informe o percentual de aumento: ");
     
     scanf ("%f", &percen_aumento);
     
       reajuste = atual_salario * (1 + percen_aumento/100);
       
printf ("\nSalário reajustado: %.2f", reajuste);
    
return (0);
}
