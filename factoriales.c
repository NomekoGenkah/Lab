#include <stdio.h>


int factorial_recursivo(int n){
    if(n<2) return 1;


    return n * factorial_recursivo(n-1);
}



int main(){
    printf("numero %d", factorial_recursivo(2));

return 1;

}