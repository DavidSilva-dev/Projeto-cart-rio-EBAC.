#include <stdio.h> //Biblioteca de comunição com o usuário.
#include <stdlib.h> //Biblioteca de alocação de espaço em memória.
#include <locale.h> //Biblioteca de alocações de texto por região.
#include <string.h> //Responsável por cuidas das strings.
// \n Pular linha ----- \t espaçamento ----- printf exibir imagem. 

int registro()// função de registro.
{
	printf("Registrar novo ID\n\n");
	system("pause");
	
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o cpf a ser cadastrado: ");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf); //Responsável por copiar os valores das strings.
	
	FILE *file; // Criar um arquivo.
	file = fopen(arquivo, "w"); // criar um novo arquivo.
	fprintf(file,cpf);
	fclose(file);
	
	file=fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s", nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file=fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file=fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o cargo a ser registrado: ");
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");
	
}
	
int consulta()// função de consulta.
{
	printf("Consultar nome ou ID\n\n");
	system("pause");
}

int deletar()// função de deltar.
{
	printf("Deletar ID\n\n");
	system("pause");
}
	int main()//Definindo variaveis.
	{
		int laco=1;

		int opcao=0;//definindo váriaveis.
	
		for(laco=1;laco=1;)//looping.
		{
	
			system("cls");//Reduzir informações.
	
			setlocale(LC_ALL, "Portuguese");//Definição de linguagem.
			printf("Bem vindo ao Cartório EBAC!\n\n");//Inicio do menu.
			printf("Digite a opção desejada e aperte enter.\n\n");
			printf("\t1- Registrar novo ID.\n\n");
			printf("\t2- Consultar nomes ou ID.\n\n"); 
			printf("\t3- Deletar nomes ou ID.\n\n");
			printf("\t4- Sair do sistema.\n\n");
			printf("Opção: ");//fim do menu.
	
			scanf("%d", &opcao);//armazenando a escolha do usuário.
	
			system("cls");
	
			switch(opcao)// chamada das funções.
			{
				case 1:
				registro();
				break;
		
				case 2:
				consulta();
				break;
		
				case 3:
				deletar();
				break;
				
				case 4:
				printf("Obrigado por utilizar o sistema.\n\n");
				return 0;
				break;
				
				default:
				printf("Opção indisponivel, por favor tente novamente.\n\n");
				system("pause");	
				break;
			}
	
		}
	}
