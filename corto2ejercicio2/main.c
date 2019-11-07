#include <stdio.h>
#include <stdlib.h>

void intercambiar(int *var_a, int *var_b){
    *var_a=*var_a+*var_b;//sumo el valor de ambas variables para no ocupar una variable extra
    *var_b=*var_a-*var_b;//la diferecia de la variable a con la variable b sera la nueva variable b
    *var_a=*var_a-*var_b;//la diferencia de la nueva variable b y la variable a sera la nueva variable a
}

int main(){
    int a;
    int b;
    printf("ingrese el valor que desea guardar en 'a'\n");
    scanf("%i",&a);
    printf("ingrese el valor que desea guardar en 'b'\n");
    scanf("%i",&b);
    intercambiar(&a,&b);

    printf("El número de a es %d\n", a);
    printf("El número de b es %d\n", b);


    return 0;
}