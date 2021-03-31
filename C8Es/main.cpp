#include<stdio.h>
#include <stdlib.h>

int main(int argc, char**argv){
    int eleitorado=0, joao=0, maria=0, branco=0, nulo=0, senha=0, cod=0;
    bool aberto=true;

    printf("Informe o Número de Eleitores: ");
    scanf("%d", &eleitorado);

    do{
        if(joao+maria+nulo+branco>=eleitorado){
            printf("Todos os eleitores ja votaram!\n");
        }
        printf("Escolha seuc candidato: \n11 - João\n45 - Maria\n0 - Branco\nOutros Números - Nulo\n");
        scanf("%d", &cod);
        if((eleitorado> joao+maria+nulo+branco) || (cod == 12345)){
            switch(cod){
                case 11:
                joao = joao+1;
                break;
                case 45:
                maria = maria+1;
                break;
                case 0:
                branco++;
                break;
                case 12345:
                    printf("Digitar a senha: ");
                    scanf("%d",&senha);
                    if(senha == 35719){
                        aberto = false;
                    }
                    else{
                        aberto = true;
                    }
                break;
                default:
                nulo++;
                break;
            }
        }
    }while(aberto);
    printf("Fechamento dos votos: \n");
    printf("Votos Esperados: %d\n", eleitorado);
    printf("Votos Efetuados: %d, %d por cento\n", joao+maria+nulo+branco, (joao+maria+nulo+branco)*100/eleitorado);
    printf("Votos para João: %d\n", joao);
    printf("Votos para Maria: %d\n", maria);
    printf("Votos em branco: %d\n", branco);
    printf("Votos Nulos: %d\n", nulo);
    //12345 fechamento - Senha 35719
    return 0;
}
