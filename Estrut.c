#include <stdio.h>
#include <stdlib.h>
float soma(float *v, int n);
int procura(int n, float proc, float *v);
void fSelect_Sort(int *pVetor);

int main()
{
	int i, n, achou;
	float *v;
	float proc;
	//Leitura do número de valores
	printf("entre com o numero de valores do vetor:");
	scanf("%d", &n);
	//alocação diâmica
	v = (float*) malloc(n*sizeof(float));
	if(v==NULL)
	  {
	  	printf("memoria insuficiente\n");
	  	return 1;
	  }
	//Leitura de valores
	printf("Entre com os valores:");
	for(i=0; i<n; i++) scanf("%f", &v[i]);
	
	printf("Calcula a media:");
	printf("Media e: %f", soma(v,n)/(float)n);
	
	printf("Entre com o valor que deseja saber a posiçao no vetor:");
	scanf("%f", &proc);
	achou = procura(n, proc, v);
	if(achou == -1)
	{
		printf("\n O numero digitado não existe no vetor");
	}
	else
	{
		printf("\n O numero esta na posiçao %d", achou);
	}
	
     printf("\nVetor Ordenado);

    for(i=0; i < n; i++)
    {
        printf(" %d,",m[i]);
    }


	free(v);
	return 0;	
	
}

float soma(float *v, int n)
{
	if(n==0) return 0;
	
	return(v[n-1] + soma(v,n-1));
}


int procura(int n, float proc, float *v)
{
	if(n==0) return -1;
	
	else if(proc== v[n-1]) return n -1;
	
	else return procura(n-1, proc, v);  
}


void fSelect_Sort(int *pVetor)
{
    int vMenor;
    int vAux;
    int vTemp;
    int vTroca;

   for(vAux=0; vAux < n-1; vAux++)
    {
        vMenor = vAux;

       for(vTemp=vAux+1; vTemp < n; vTemp++)
        {
            if(pVetor[vTemp] < pVetor[vMenor])
            {
                vMenor = vTemp;
            }
        }

         if(vMenor != vAux)
        {
            vTroca         = pVetor[vAux];
            pVetor[vAux]   = pVetor[vMenor];
            pVetor[vMenor] = vTroca;
        }
    }
}
