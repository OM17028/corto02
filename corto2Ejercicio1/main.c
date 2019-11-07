#include <stdio.h>
int bintod(int num)
{
    if (!(num / 10))
    {
        return (num);
    } else
        {
        return (num % 10 + bintod(num / 10) * 2);
    }

}


int main() {
    int num,dec;
    printf("ingrese el numero en binario \n");
    scanf("%i",&num);
    dec=bintod(num);
    printf("el resultado  %i",dec);
}