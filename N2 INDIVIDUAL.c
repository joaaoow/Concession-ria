#include<stdio.h>
#include<locale.h>
#include<string.h>
char senha[10];
char senhaCorreta[] = "123";
char nomeCliente[50], numeroCliente[50], enderecoCliente[20];
int opcaoCarro;
int i = 0;
char corCarro[10], formaPagamento[10], acessorioCarro[20];
int quantAcessorios;
int main() {
	setlocale(LC_ALL, "");
printf("---CONCESSION�RIA DO JOAOZINHO---\n");
while(1) {
	printf("Informe a senha: \n");
		scanf("%s", &senha);
	if(strcmp(senha, senhaCorreta) == 0) {
			printf("SENHA CORRETA.\n");
			getch();
system("cls");
	//CADASTRO CLIENTE
printf("---CONCESSION�RIA DO JOAOZINHO---\n");
printf("---CADASTRO DO CLIENTE---\n");
	printf("Informe o nome completo do(a) cliente: \n");
fflush(stdin);
		gets(nomeCliente);
	printf("Informe o n�mero de telefone do(a) cliente: \n");
fflush(stdin);
		gets(numeroCliente);
	printf("Informe o endere�o do(a) cliente: \n");
fflush(stdin);
		gets(enderecoCliente);
		getch();
system("cls");
//IMPRESS�O 1
	printf("Nome do(a) cliente: %s\n", nomeCliente);
	printf("Telefone do(a) cliente: %s\n", numeroCliente);
	printf("Endere�o do(a) cliente: %s\n", enderecoCliente);
		getch();
		system("cls");	
//COMPRA DE CARRO
	printf("---CONCESSION�RIA DO JOAOZINHO---\n");
	printf("---ESCOLHA DO VE�CULO---\n");
	printf("Ve�culos disponiveis: \n");
	printf("1- HB20.\n");
	printf("2- Jeep Renegade.\n");
	printf("3- Ford Ka.\n");
			scanf("%i", &opcaoCarro);
	printf("Informe a cor desejada para o ve�culo.\n");
		scanf("%s", &corCarro);
	printf("Informe a forma de pagamento: \n");
		scanf("%s", &formaPagamento);
		
getch();
system("cls");
//IMPRESS�O 2
	printf("Nome do(a) cliente: %s\n", nomeCliente);
	printf("Telefone do(a) cliente: %s\n", numeroCliente);
	printf("Endere�o do(a) cliente: %s\n", enderecoCliente);
switch(opcaoCarro) {
		case 1:
			printf("Carro escolhido: HB20.\n");
		break;
		case 2:
			printf("Carro escolhido: Jeep Renegade.\n");
		break;
		case 3:
			printf("Carro escolhido: Ford Ka.\n");
		break;
		default:
			printf("Op��o inv�lida.\n");
		break;
			}
	printf("Cor do ve�culo escolhida: %s\n", corCarro);
	printf("Forma de Pagamento: %s\n", formaPagamento);
	
		getch();
		system("cls");
	//COMPRA DE ACESS�RIO
	printf("---CONCESSION�RIA DO JOAOZINHO---\n");
	printf("---COMPRA DE ACESS�RIO---\n");
		printf("Informe o acess�rio desejado: \n");
fflush(stdin);
			gets(acessorioCarro);
		printf("Informe a quantidade de acess�rios desejados: \n");
			scanf("%i", &quantAcessorios);
getch();
system("cls");	
//IMPRESS�O 3
	printf("Nome do(a) cliente: %s\n", nomeCliente);
	printf("Telefone do(a) cliente: %s\n", numeroCliente);
	printf("Endere�o do(a) cliente: %s\n", enderecoCliente);
	printf("Cor do ve�culo escolhida: %s\n", corCarro);
	printf("Forma de Pagamento: %s\n", formaPagamento);	
	printf("Acess�rio escolhido: %s\n", acessorioCarro);
	printf("Quantidade de acess�rios: %i\n", quantAcessorios);
getch();
system("cls");
		printf("PROGRAMA FINALIZADO!\n");
		getch();
		break;
		
		} else {
			
		printf("ERRO DE SENHA, TENTE NOVAMENTE.\n");
		
		}
	}
return 0;	
}
