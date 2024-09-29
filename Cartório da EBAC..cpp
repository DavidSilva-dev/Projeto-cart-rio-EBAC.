#include <stdio.h> //Biblioteca de comuni��o com o usu�rio.
#include <stdlib.h> //Biblioteca de aloca��o de espa�o em mem�ria.
#include <locale.h> //Biblioteca de aloca��es de texto por regi�o.
#include <string.h> //Respons�vel por cuidas das strings.
// \n Pular linha ----- \t espa�amento ----- printf exibir imagem. 

int registro()// fun��o de registro.
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
	
	strcpy(arquivo, cpf); //Respons�vel por copiar os valores das strings.
	
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
	
int consulta()// fun��o de consulta.
{
	printf("Consultar nome ou ID\n\n");
	system("pause");
}

int deletar()// fun��o de deltar.
{
	printf("Deletar ID\n\n");
	system("pause");
}
	int main()//Definindo variaveis.
	{
		int laco=1;

		int opcao=0;//definindo v�riaveis.
	
		for(laco=1;laco=1;)//looping.
		{
	
			system("cls");//Reduzir informa��es.
	
			setlocale(LC_ALL, "Portuguese");//Defini��o de linguagem.
			printf("Bem vindo ao Cart�rio EBAC!\n\n");//Inicio do menu.
			printf("Digite a op��o desejada e aperte enter.\n\n");
			printf("\t1- Registrar novo ID.\n\n");
			printf("\t2- Consultar nomes ou ID.\n\n"); 
			printf("\t3- Deletar nomes ou ID.\n\n");
			printf("\t4- Sair do sistema.\n\n");
			printf("Op��o: ");//fim do menu.
	
			scanf("%d", &opcao);//armazenando a escolha do usu�rio.
	
			system("cls");
	
			switch(opcao)// chamada das fun��es.
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
				printf("Op��o indisponivel, por favor tente novamente.\n\n");
				system("pause");	
				break;
			}
	
		}
	}
