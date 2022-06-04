/*9. Implemente o m ́etodo de ordena ̧c ̃ao bolha utilizando ponteiros.
    implementei o cálculo da diagonal secundaria e principal
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define VAL 20
#define L 2
#define C 2

void imprimirMatriz(int *);
void bubbleSort(int *, int);
void diagPrincipal(int *, int, int *);
void diagSecundaria(int *, int, int *);

int main(int argc, char const *argv[])
{
    int *p = NULL, r;

    srand(time(NULL));

    p = malloc(L * C * sizeof(int));

    for (int i = 0; i < (L * C); i++)
    {
        *(p + i) = rand() % VAL;
    }
    printf("Matriz sem ordenacao");

    imprimirMatriz(p);

    bubbleSort(p, L * C);

    printf("Matriz com ordenacao");

    imprimirMatriz(p);
    
    diagPrincipal(p, L, &r);

    printf("A diagonal principal e: %d\n", r);

    diagSecundaria(p, L, &r);

    printf("A diagonal secundaria e: %d\n", r);

    return 0;
}

void imprimirMatriz(int *p)
{

    for (int i = 0; i < (L * C); i++)
    {
        if (!(i % C))
            printf("\n");
        printf("%d ", *(p + i));
    }
    printf("\n");
}

void bubbleSort(int *p, int dim)
{

    int aux = 0;

    for (int i = 0; i < dim - 1; i++)
    {
        for (int k = dim - 1; k > i; k--)
        {
            if (*(p + k) < *(p + (k - 1)))
            {
                aux = *(p + k);
                *(p + k) = *(p + k - 1);
                *(p + k - 1) = aux;
            }
        }
    }
}



void diagPrincipal(int *p, int dim, int *pr){
    int s = 0;
    for (int k=0; k<dim*dim; k+=dim+1){
        s += *(p+k);
    }
    *pr = s;

}

void diagSecundaria(int *p, int dim, int *pr){
    int s = 0;
    for (int k=(dim-1); k<(dim*dim) - 1; k+=(dim-1)){
        s += *(p+k);
    }
    *pr = s;
}