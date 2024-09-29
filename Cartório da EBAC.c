#include <stdio.h> //Biblioteca de comunição com o usuário.
#include <stdlib.h> //Biblioteca de alocação de espaço em memória.
#include <locale.h> //Biblioteca de alocações de texto por região.
#include <string.h> //Responsável por cuidas das strings.
// \n Pular linha ----- \t espaçamento ----- printf exibir imagem. 

int registro()//Função Responsável por registrar novo usúarios
{
	printf("Registrar novo usúario\n\n");//Informando ao usúario onde ele está.
	
	char arquivo[40];// Inicio das Váriaveis/string conjunto de váriaveis.
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];// Fim da string
	
	printf("Digite o cpf a ser cadastrado: ");// Coletando informações do usúario.
	scanf("%s", cpf);// Responsável por armazenar informções na string.
	
	strcpy(arquivo, cpf); //Responsável por copiar os valores das strings.
	
	FILE *file; // Criar um arquivo.
	file = fopen(arquivo, "w"); // "w" é responsavel por criar um novo arquivo.
	fprintf(file,cpf);// Responsável escrever um texto no arquivo.
	fclose(file);//responsável por abrir o arquivo.
	
	file=fopen(arquivo, "a");// "a" responsável por alterar/atualizar o arquivo.
	fprintf(file, ",");// "," Colocamos uma , nos dados salvos no arquivo.
	fclose(file);//Fechamos o arquivo.
	
	printf("Digite o nome a ser cadastrado: ");// Coletamos os dados.
	scanf("%s", nome);//Armazenamos na váriavel nome.
	
	file = fopen(arquivo, "a");//Abrimos o arquivo com "a" para atualizar.
	fprintf(file,nome);//Escrevemos no arquivo o valor da váriavel NOME.
	fclose(file);//Fechamos o arquivo.
	
	file=fopen(arquivo, "a");//Abrimos o arquivo com "a" para atualizar.
	fprintf(file, ",");//Escrevemos no arquivo com a "," que queremos uma virgula depois do valor da váriavel nome.
	fclose(file);//Fechamos o arquivo.
	
	printf("Digite o sobrenome a ser cadastrado: ");//Coletamos informações.
	scanf("%s", sobrenome);//Armazenamos os dados na Váriavel sobrenome.
	
	file = fopen(arquivo, "a");//Abrimos o arquivo e com "a" atualizamos.
	fprintf(file,sobrenome);//Escrevemos no arquivo o valor da váriavel sobrenome.
	fclose(file);//Fechamos o arquivo.
	
	file=fopen(arquivo, "a");//Abrimos o arquivo com "a" para atualizar.
	fprintf(file, ",");//Escrevemos no arquivo com a "," que queremos uma virgula depois do valor da váriavel nome.
	fclose(file);//Fechamos o arquivo.
	
	printf("Digite o cargo a ser registrado: ");//coletamos informações.
	scanf("%s", cargo);//Armazenamos os dados na váriavel cargo.
	
	file = fopen(arquivo, "a");//Abrimos o arquivo com "a" para atualizar.
	fprintf(file,cargo);//Escrevemos no arquivo o valor da váriavel cargo.
	fclose(file);//Fechamos o arquivo.
	
	system("pause");//Pausa no sistema.
	
}
	
int consulta()//Responsavel por realizar consultas.
{
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
	char cpf[40];// Váriavel para armazenamento de dados
	char conteudo[300];//Váriavel responsável por armazenar todo conteudo consultado.
	
	printf("Consultar CPF \n\n");//Informando ao usúario onde ele está.
	
	printf("Digite o CPF a ser consultado: ");//Coletando informações.
	scanf("%s", cpf);//Reponsável por armazenar os dados na váriavel CPF.%s referece a string
	
	FILE *file;//Abre o arquivo.
	file = fopen(cpf,"r");//Responsável por Ler o arquivo "r" realiza a leitura do arquivo.
	
	if(file == NULL)//Responsável por informar,possivel erro.
	
	{
		printf("\n\nNão foi possivel localizar o arquivo ou não existe, por favor tente novamente.\n\n");// Informa ao usúario o erro cometido.
		system("pause");// Pausa no sistema.
	}
	
	while(fgets(conteudo,300,file) != NULL)//Responsável por informar os dados solicitados.
	
	{
		printf("\nEssas são as informações do usúario selecionado: \n\n");// Mensagem para informa o usúario oque ele realizou.
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

int deletar()//Responsável por deletar usuários.
{
	printf("Deletar usuário \n\n");// Informa ao usuário onde ele está.
	
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem.
	
	char cpf[40];//Váriavel para armazenamento
	
	printf("Digite o CPF do usuário a ser deletado: \n\n");//Coletando informações.
	scanf("%s", cpf);// Responsável por armazenar os dados na string.
	
		
	FILE *file;// Abre o arquivo.
	file = fopen(cpf,"r");// Realiza a leitura do que esta no arquivo.
	
	if(file == NULL)//Responsavel por informar possivel erro.
	{
		printf("\n\n Usuário não encontrado,informe um CPF válido. \n\n");//Informa ao usuário o erro cometido.
		system("pause");//Pausa no sistema.
	}
	else// Responsável por informar sucesso na operação.
	{
		fclose(file);//Fecha o arquivo.
		remove(cpf);//Responsavel por deletar o usuário.
		printf("\n\n Usuário deletado com sucesso. \n\n");//Informa sucesso na operação.
		system("pause");// Pausa no sistema.
	}
	
	
}
	int main()//Responsável pelo menu principal.
	{
		int laco=1;//Váriavel para utilizar a função For.

		int opcao=0;//Responsável por armazenar os dados das opções selecionadas.
	
		for(laco=1;laco=1;)//Responsavel por trazer um looping ao menu.
		{
	
			system("cls");//Reduzir informações.
	
			setlocale(LC_ALL, "Portuguese");//Definição de linguagem.
			printf("Bem vindo ao Cartório EBAC!\n\n");//Inicio do menu.
			printf("Digite a opção desejada e aperte enter.\n\n");
			printf("\t1- Registrar novo ID.\n\n");
			printf("\t2- Consultar nomes ou ID.\n\n"); 
			printf("\t3- Deletar nomes ou ID.\n\n");
			printf("Opção: ");//Fim do menu.
	
			scanf("%d", &opcao);//Armazenando a escolha do usuário.
	
			system("cls");//Reduzir informações.
	
			switch(opcao)// Responsavel por indentificar qual opção foi selecionada.
			{
				case 1: // Chamada da opção 1.
				registro();
				break;
		
				case 2: // Chamada da opção 2.
				consulta();
				break;
		
				case 3:// Chamada da opção 3.
				deletar();
				break;
		
				default:// Responsável por informar um erro,caso selecionado uma opção diferente das registradas acima.
				printf("Opção indisponivel, por favor tente novamente.\n\n");// Informa ao usuários o erro cometido.
				system("pause");//Pause no sistema.
				break;
			}
	
		}
	return(0);//Lixo.
	}
