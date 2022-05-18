#include<stdio.h>//para o printf
#include <stdlib.h>//para o system


// Função : Escreva um algoritmo que leia o seu nome e o sobrenome e em seguida
// imprime nome completo na tela.

main(){
	//declaracao das variaveis
	char nome[50];
	char sobrenome[50];
	
	//entrada de dados
	printf("Digite seu nome: ");
	gets(nome);
	
	printf("Digite seu sobrenome: ");
	gets(sobrenome);
	
	//saida de dados
	printf("Seu nome completo e: %s %s\n",nome,sobrenome);
	
	system("pause");
	
}