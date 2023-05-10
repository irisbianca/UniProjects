#include <stdio.h>


int main () {
	char nome[50], endereco[50], telefone[20];
	
	printf ("Digite seu nome completo: ");
	fgets (nome, 50, stdin);
	
	printf ("Seu endereço: ");
	fgets (endereco, 50, stdin);
	
	printf ("Informe seu telefone para contato: ");
	fgets (telefone, 14, stdin);
	
	printf ("Dados armazenados com sucesso!\n");
	
	printf ("Nome: %s\n", nome);
	printf ("Endereço: %s\n", endereco);
	printf ("Telefone: %s\n", telefone);
	
	return (0);
}
