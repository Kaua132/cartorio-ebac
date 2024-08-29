#include <stdio.h> // biblioteca de comunicaçao com o usuario
#include <stdlib.h> // biblioteca de alocalao de espaço em memoria 
#include <locale.h> //bibliotaca de alocaçoes de texto por regiao
#include <string.h> //biblioteca responsavel pelas string


void registro(){
	
	char arquivo[40];
	
	char cpf[40];
	
	char nome[40];
	
	char sobrenome[40];
	
	char cargo[40];
	
	
	printf("digite o cpf cadastrado");
	scanf("%s",cpf);
	
	strcpy(arquivo,cpf); //responsalvel por copiar as string
	
	FILE *file; //cria o arquivo
	file = fopen(arquivo,"w");
	fprintf(file,cpf);
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("digite o nome a ser cadrastrado:");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado:");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo,"a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("digite o cargo a ser cadastrado:");
	

	scanf("%s",cargo);
	
	file = fopen(arquivo,"a");
	fprintf(file,cargo);
	fclose(file);
	system("pause");
	system("cls");
	
	
	
	
	
	
	
	
	
	
	
}

void consultar(){
	setlocale(LC_ALL,"Portuguese");
	char cpf[40];
	char conteudo[200];
	
	printf("digite o cpf a ser consultado:");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL){
		printf("não foi possivel abrir esse arquivo!\n");
	}
	
	while(fgets(conteudo,200,file)!=NULL){
		
		printf("\nessas são as informaçoes do usuario:");
		printf("%s",conteudo);
		printf("/n/n");
		
	}
	
	system("pause");
}
	
	
	
	

void deletar(){
	char cpf[40];
	
	printf("digite o cpd a ser deletado:");
	scanf("%s",cpf);
	
	remove(cpf);
	
	
}

 

int main(){
	
	int opcao = 0; // variaveis
	
	int x = 1;
	
	for(x=1;x=1;){
	
	
	setlocale(LC_ALL,"Portuguese"); // definindo a linguagem
	
	
	 
	
	printf("### Cartório da EBAC ### \n \n");
	printf("Escolha a opção desejadas no menu: \n \n");
	printf("\t1 - Resgistrar nomes \n");
	printf("\t2 - Consultar nomes \n");
	printf("\t3 - Deletar nomes\n");
	printf("\t4 - sair do sistema\n");
	printf("opçao:");
	
	scanf("%d",&opcao); // escolha do usuario 
	
	system("cls");
	
	switch(opcao){
		
		case 1:
			registro();
			break;
			
			
		case 2:
			consultar();
			break;
		
		case 3:
			deletar(); 
			break;
			
		case 4:
			printf("obrigado por utilizar o sistema\n");
			return 0; 
			break;
			
		
			
		default:
			printf("essa opçao nao esta disponivel \n");
			system("pause");
			system("cls");
			break;
			
			
			
			
			
			
			
	}
	
	
	
	}
	
	
	

	
	
}
