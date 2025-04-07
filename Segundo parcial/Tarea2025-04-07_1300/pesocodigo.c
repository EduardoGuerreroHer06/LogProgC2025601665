#include <stdio.h>
#include <math.h>

int main() {
    float altura,peso,imc;

    printf("ingresa tu altura \n");
    scanf("%f", &altura);

    printf("ingresa tu peso \n");
    scanf("%f", &peso);

    imc = peso / pow(altura, 2);

    if(imc <=18.4){
        printf("Estas Bajo De Peso");
    }else if (imc >=18.5){
        printf("Estas Normal De Peso");
    }else if (imc>=25){
        printf("Tienes Sobre Peso");
    }else if (imc>=30){
        printf("Tienes Obesidad Clase 1");
    }else if (imc>= 35){
        printf("Tienes Obesidad Clase 2");
    }else if (imc>= 40){
        printf("Tienes Obesidad Clase 3");
    }
    return 0;
}

