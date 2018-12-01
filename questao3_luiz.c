//0050016010

#include<stdio.h>

int main ()
{
	
  int objeto[3000], cont, mini, quanti=0;
	
	for(cont=0; cont<3000; cont++){
		printf("Coloque o peso do objeto %d em gramas:", cont+1);
		scanf("%d", &objeto[cont]);
	}
	mini=objeto[0];
	for (cont=0; cont<3000; cont++){
		if(objeto[cont]<mini){
			mini=objeto[cont];
			quanti=0;
		}
		else if(objeto[cont]==mini){
			quanti++;
		}
	}
	printf("O menor peso e %d e tem %d objetos com esse peso.",mini, quanti);
	
	system("pause");
	return 0;
}
