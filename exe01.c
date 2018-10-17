#include <stdio.h>

void main(){
	
	
	int a[5][2];
	int va[10][2];
	
	int x,y;
	int z;
	int repetiu;
	
	int elementoz = 0;
	
	for(x=0;x<=4;x++){		
	
		for(y=0;y<=1;y++){
			printf("Alimenta matriz A Linha %d Coluna %d ", x, y);
			scanf("%d", &a[x][y]);			
			
			repetiu = 0;
			for(z=0;z<=9;z++){
				if(va[z][0] == a[x][y]){
					va[z][1] = va[z][1] + 1;
					repetiu = 1;
				}
			}
			
			if (repetiu == 0){
				va[elementoz][0] = a[x][y];
				va[elementoz][1] = 1;
				elementoz = elementoz + 1;
			}
			
		}				
	}
	
	for(z=0;z<=9;z++){
					
		printf("Elemento %d repetiu %d vezes \n", va[z][0], va[z][1]);
		
		
	
	}
	
	
}
