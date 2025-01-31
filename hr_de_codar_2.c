#include<stdio.h>

int main(){
    float temp, umid;
    unsigned int estoque, estMinimo = 1000;

    printf("Entre com a temperatura: \n");
    scanf("%f", &temp);
    printf("Entre com a Úmidade: \n");
    scanf("%f", &umid);
    printf("Entre com o Estoque: \n");
    scanf("%u", &estoque);

    if (temp > 30){
        printf("Hiuston, temos um problema, A Temperatura está muito alta !!!\n");
    }
    else {
        printf("Tudo nos conformes.\n");
        }

    if(umid > 50)
    {
        printf("Hiuston, temos um problema, a Umidade da sua irmã está preocupante\n");
    }
    else 
    {
        printf("Tudo nos conforme.\n");
    }

    if(estoque < estMinimo)
    {
    printf("Estoque abaixo do ideal.\n");
    }
    else 
    {
        printf("Estamos de boa, ainda tem estoque ehehehehe.\n");
    }
}