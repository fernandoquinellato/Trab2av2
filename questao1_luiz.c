//Luiz Fernando  MA0050016010

#include <stdio.h>

int main()
{
	
	int matriz[4][4], i=0, j=0, soma=0;
	int a=0, b=0;
	
	for(i=0; i<4 ;i++) 
    {
       for(j=0; j<4 ;j++)
       {
       	  printf("\nEntre com o elemento [%d, %d]:", i+1, j+1);
       	  scanf("%d", &matriz[i][j]);
	   }
	}
     
   a=matriz[2][0]+matriz[2][1]+matriz[2][2]+matriz[2][3];
   b=matriz[0][1]+matriz[1][1]+matriz[2][1]+matriz[3][1]; 
    
   soma=a+b;
   printf("%d", soma);
	
system("pause");
return 0;
