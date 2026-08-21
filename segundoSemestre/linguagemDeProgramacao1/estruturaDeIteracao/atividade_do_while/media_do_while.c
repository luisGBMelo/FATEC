#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int idade = 0, verificar_entrada = 0, total_idade = 0, qnt_idade = 0, finalizar = 0;
	float media = 0;

	printf("Media das idades em while \n");
	printf("Para encerrar o programa digite -1 \n");

	do{
		printf(" Digite uma idade: ");
		verificar_entrada = scanf("%d", &idade);

		if (verificar_entrada == 0){
			printf("Digite apenas numeros");
			while(getchar() != '\n');
		}else{

			if(idade < -1){
				printf("Digite uma idade maior do que 0. \n");
			}else if(idade == -1 && qnt_idade == 0){
				printf("Digite ao menos uma idade antes de finalizar");
			}else if(idade == -1 && qnt_idade >= 1){
				finalizar = -1;
			}else{
				total_idade = total_idade + idade;
				qnt_idade = qnt_idade + 1;
			}
		}

	}while(finalizar != -1);
	media = (float)total_idade/qnt_idade;
	printf("A media de %d pessoas eh: %.2f", qnt_idade, media);
	return 0;
}