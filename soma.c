//inclui a biblioteca studio.h que pemite usar entrada e saída de infos (printf e scanf)
#include<stdio.h>
// incli bibliotecas utilitarias (system())
#include<stdlib.h> 

//classe contrutora
int main(){

    //declarar variaveis
    float numero1, numero2, resp;

    printf("DIgite o primeiro numero: ");
    scanf("%f", &numero1);
    printf("DIgite o primeiro numero: ");
    scanf("%f", &numero2);
    resp = numero1 + numero2;
    printf("%.2f",resp);



    //pausa o sistema ate que o usuario pressione uma tecla
    system("pause");
    //finalizando o sistema - ocorreu tudo bem
    return 0;

}