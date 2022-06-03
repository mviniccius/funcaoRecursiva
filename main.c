#include<stdio.h>

int somaTermos(int N);
int fibonacci(int f);

int main()
{

    int i=0, n, soma=0, termos;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    for(i = 1; i<=n; i++)
    {
        soma += i;
    }

    printf("\nO valor da soma: %i", soma);
    printf("\nUsando a funcao recursiva!\n");
    printf("\no valor da soma de termos: %i", somaTermos(n));

    printf("\nSerie de Fibonacci\n");
    printf("Digite a quantidade de termos ");
    scanf("%i", &termos);
    printf("%i", fibonacci(termos));
    return 0;
}

int somaTermos(int N)
{

    if(N == 0)
    {
        return 0;
    }
    else
    {
        return N = N + somaTermos(N - 1);
    }
}

int fibonacci(int f){

    if(f == 1 || f == 2){
        return 1;
    }else{
        return fibonacci(f-1)+fibonacci(f-2);
    }

}
