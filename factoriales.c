#include <stdio.h>
#include <limits.h>

#define MAX_DIGITOS 10
//int llega a 12!
//long long llega a 20!


long long factorial_recursivo(long long n){
    if(n<0) return 0;
    if(n<2) return 1;

    return n * factorial_recursivo(n-1);
}

long long factorial_iterativo(int n){
    if(n<0) return 0;
    if(n<2) return 1;
    long long i = n;

    while(n>1){
        i = i  * (n-1);
        n--;
    }
    return i;
}

void factorial(int n, int resultado[MAX_DIGITOS], int *tam_resultado){
    int unidad = n % 10;

    while(n>1){
        unidad = unidad * ((n-1) % 10);


    }
    printf("%i", unidad);

}


int main(){
    int n = 5, resultado[MAX_DIGITOS], *tam



    printf("size of %i\n", sizeof(long long));
    printf("numero recursivo: %lld\n", factorial_recursivo(20));
    printf("numero iterativo: %lld\n", factorial_iterativo(20));
    
return 1;
}
