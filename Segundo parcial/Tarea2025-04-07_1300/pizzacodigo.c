#include <stdio.h>

int main(){
    char *novegetarian[] = {"pimiento","tofu"};
    char *vegetariana[] = {"peperoni","salmon","jamon"};
    char pizza;
    int listadeingredientes;

    printf("quieres tu pizza vegetariana? (si/no): \n");
    scanf("&c", &pizza);
    if (pizza == 'si' || pizza =='si'){
            printf("lista de ingredientes: \n");
            for(int i = 0; i <3; i++) {
                printf("%d.- %si/no", i+1, listadeingredientes[i]);

            }
            printf("selecciones una pizza con el ingrediente extra");
            scaf("%d", &pizza);
            switch(pizza){
            }
            case 1;
            printf("la pizza es vegetariana sus ingredientes son pimiento y tofu");
            break
            case 2;
            printf("la pizza es novegetariana y sus ingredientes son peperoni,salmon y jamon");
            return 0;
    }
