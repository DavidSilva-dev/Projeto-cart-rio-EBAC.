#include <stdio.h> //Biblioteca de comuni��o com o usu�rio.
#include <stdlib.h> //Biblioteca de aloca��o de espa�o em mem�ria.
#include <locale.h> //Biblioteca de aloca��es de texto por regi�o.
#include <string.h> //Respons�vel por cuidas das strings.
// \n Pular linha ----- \t espa�amento ----- printf exibir imagem. 

int registro()//Fun��o Respons�vel por registrar novo us�arios
{
	printf("Registrar novo us�ario\n\n");//Informando ao us�ario onde ele est�.
	
	char arquivo[40];// Inicio das V�riaveis/string conjunto de v�riaveis.
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];// Fim da string
	
	printf("Digite o cpf a ser cadastrado: ");// Coletando informa��es do us�ario.
	scanf("%s", cpf);// Respons�vel por armazenar inform��es na string.
	
	strcpy(arquivo, cpf); //Respons�vel por copiar os valores das strings.
	
	FILE *file; // Criar um arquivo.
	file = fopen(arquivo, "w"); // "w" � responsavel por criar um novo arquivo.
	fprintf(file,cpf);// Respons�vel escrever um texto no arquivo.
	fclose(file);//respons�vel por abrir o arquivo.
	
	file=fopen(arquivo, "a");// "a" respons�vel por alterar/atualizar o arquivo.
	fprintf(file, ",");// "," Colocamos uma , nos dados salvos no arquivo.
	fclose(file);//Fechamos o arquivo.
	
	printf("Digite o nome a ser cadastrado: ");// Coletamos os dados.
	scanf("%s", nome);//Armazenamos na v�riavel nome.
	
	file = fopen(arquivo, "a");//Abrimos o arquivo com "a" para atualizar.
	fprintf(file,nome);//Escrevemos no arquivo o valor da v�riavel NOME.
	fclose(file);//Fechamos o arquivo.
	
	file=fopen(arquivo, "a");//Abrimos o arquivo com "a" para atualizar.
	fprintf(file, ",");//Escrevemos no arquivo com a "," que queremos uma virgula depois do valor da v�riavel nome.
	fclose(file);//Fechamos o arquivo.
	
	printf("Digite o sobrenome a ser cadastrado: ");//Coletamos informa��es.
	scanf("%s", sobrenome);//Armazenamos os dados na V�riavel sobrenome.
	
	file = fopen(arquivo, "a");//Abrimos o arquivo e com "a" atualizamos.
	fprintf(file,sobrenome);//Escrevemos no arquivo o valor da v�riavel sobrenome.
	fclose(file);//Fechamos o arquivo.
	
	file=fopen(arquivo, "a");//Abrimos o arquivo com "a" para atualizar.
	fprintf(file, ",");//Escrevemos no arquivo com a "," que queremos uma virgula depois do valor da v�riavel nome.
	fclose(file);//Fechamos o arquivo.
	
	printf("Digite o cargo a ser registrado: ");//coletamos informa��es.
	scanf("%s", cargo);//Armazenamos os dados na v�riavel cargo.
	
	file = fopen(arquivo, "a");//Abrimos o arquivo com "a" para atualizar.
	fprintf(file,cargo);//Escrevemos no arquivo o valor da v�riavel cargo.
	fclose(file);//Fechamos o arquivo.
	
	system("pause");//Pausa no sistema.
	
}
	
int consulta()//Responsavel por realizar consultas.
{
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
	char cpf[40];// V�riavel para armazenamento de dados
	char conteudo[300];//V�riavel respons�vel por armazenar todo conteudo consultado.
	
	printf("Consultar CPF \n\n");//Informando ao us�ario onde ele est�.
	
	printf("Digite o CPF a ser consultado: ");//Coletando informa��es.
	scanf("%s", cpf);//Repons�vel por armazenar os dados na v�riavel CPF.%s referece a string
	
	FILE *file;//Abre o arquivo.
	file = fopen(cpf,"r");//Respons�vel por Ler o arquivo "r" realiza a leitura do arquivo.
	
	if(file == NULL)//Respons�vel por informar,possivel erro.
	
	{
		printf("\n\nN�o foi possivel localizar o arquivo ou n�o existe, por favor tente novamente.\n\n");// Informa ao us�ario o erro cometido.
		system("pause");// Pausa no sistema.
	}
	
	while(fgets(conteudo,300,file) != NULL)//Respons�vel por informar os dados solicitados.
	
	{
		printf("\nEssas s�o as informa��es do us�ario selecionado: \n\n");// Mensagem para informa o us�ario oque ele realizou.
		printf("CPF: \n" );
		printf("Nome: \n");
		printf("Sobrenome: \n");
		printf("Cargo: \n");
		printf("%s",conteudo);
		printf("\n\nConsulta realizada com sucesso.\n\n");//Informa sucesso na consulta.
		fclose(file);//fecha o arquivo.
		system ("pause");// Pausa no sistema.
	}
	
	
	
}

int deletar()//Respons�vel por deletar usu�rios.
{
	printf("Deletar usu�rio \n\n");// Informa ao usu�rio onde ele est�.
	
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem.
	
	char cpf[40];//V�riavel para armazenamento
	
	printf("Digite o CPF do usu�rio a ser deletado: \n\n");//Coletando informa��es.
	scanf("%s", cpf);// Respons�vel por armazenar os dados na string.
	
		
	FILE *file;// Abre o arquivo.
	file = fopen(cpf,"r");// Realiza a leitura do que esta no arquivo.
	
	if(file == NULL)//Responsavel por informar possivel erro.
	{
		printf("\n\n Usu�rio n�o encontrado,informe um CPF v�lido. \n\n");//Informa ao usu�rio o erro cometido.
		system("pause");//Pausa no sistema.
	}
	else// Respons�vel por informar sucesso na opera��o.
	{
		fclose(file);//Fecha o arquivo.
		remove(cpf);//Responsavel por deletar o usu�rio.
		printf("\n\n Usu�rio deletado com sucesso. \n\n");//Informa sucesso na opera��o.
		system("pause");// Pausa no sistema.
	}
	
	
}
	int main()//Respons�vel pelo menu principal.
	{
		int laco=1;//V�riavel para utilizar a fun��o For.

		int opcao=0;//Respons�vel por armazenar os dados das op��es selecionadas.
	
		for(laco=1;laco=1;)//Responsavel por trazer um looping ao menu.
		{
	
			system("cls");//Reduzir informa��es.
	
			setlocale(LC_ALL, "Portuguese");//Defini��o de linguagem.
			printf("Bem vindo ao Cart�rio EBAC!\n\n");//Inicio do menu.
			printf("Digite a op��o desejada e aperte enter.\n\n");
			printf("\t1- Registrar novo ID.\n\n");
			printf("\t2- Consultar nomes ou ID.\n\n"); 
			printf("\t3- Deletar nomes ou ID.\n\n");
			printf("Op��o: ");//Fim do menu.
	
			scanf("%d", &opcao);//Armazenando a escolha do usu�rio.
	
			system("cls");//Reduzir informa��es.
	
			switch(opcao)// Responsavel por indentificar qual op��o foi selecionada.
			{
				case 1: // Chamada da op��o 1.
				registro();
				break;
		
				case 2: // Chamada da op��o 2.
				consulta();
				break;
		
				case 3:// Chamada da op��o 3.
				deletar();
				break;
		
				default:// Respons�vel por informar um erro,caso selecionado uma op��o diferente das registradas acima.
				printf("Op��o indisponivel, por favor tente novamente.\n\n");// Informa ao usu�rios o erro cometido.
				system("pause");//Pause no sistema.
				break;
			}
	
		}
	return(0);//Lixo.
	}
