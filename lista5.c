#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include <string.h>

int main()
{
  int i=1, j=1, op, g=0;
  float q, r1, r2, te, trcat, trhip;
  float los1, los2, trap1, trap2, traph;
  char vet[50];
  char preenchimento = '@';
  char lateral = '|';
  char base = '_';
  char lateralesq = '/';
  char lateraldir = '\\\\';
  int x=0;
  int y=0;
  
do{
  for(i=1; i<=15; i++){
    for(j=1; j<=60; j++){
      if(i==1 || i==3 || i==14 || i==15){
        printf("#");
      }
      else if (i==2){
        if(j>=1 && j<=20){
            printf("#");
        }
        else if(j>36){
        	printf("#");
		}
        else if(j>=21 && j<=36){
            printf(" MENU DE OPCOES ");
            j=36;
        }
      }
      else if(i==5){
        if(j==1 || j==2 || j==59 || j==60){
            printf("#");
        }
        else if(j>33){
        	printf(" ");
		}
        else{
        printf(" Escolha uma forma geometrica: ");
        j=33;
        }
      }
      else if(i==7){
        if(j==1 || j==2 || j==59 || j==60){
            printf("#");
        }
        else if(j>15){
        	printf(" ");
		}
        else{
        printf(" 1. Quadrado ");
        j=15;
        }
      }
      else if(i==8){
        if(j==1 || j==2 || j==59 || j==60){
            printf("#");
        }
        else if(j>16){
        	printf(" ");
		}
        else{
        printf(" 2. Retangulo ");
        j=16;
        }
      }
      else if(i==9){
        if(j==1 || j==2 || j==59 || j==60){
            printf("#");
        }
        else if(j>27){
        	printf(" ");
		}
        else{
        printf(" 3. Triangulo Equilatero ");
        j=27;
        }
      }
      else if(i==10){
        if(j==1 || j==2 || j==59 || j==60){
            printf("#");
        }
        else if(j>43){
        	printf(" ");
		}
        else{
        printf(" 4. Triangulo Retangulo (catetos iguais) ");
        j=43;
        }
      }
      else if(i==11){
        if(j==1 || j==2 || j==59 || j==60){
            printf("#");
        }
        else if(j>12){
        	printf(" ");
		}
        else{
        printf(" 5. Outra ");
        j=12;
        }
      }
      else if(i==12){
        if(j==1 || j==2 || j==59 || j==60){
            printf("#");
        }
        else if(j>11){
        	printf(" ");
		}
        else{
        printf(" 6. Sair ");
        j=11;
        }
      }
      else {
        if (j==1 || j==2 || j==59 || j==60){
        printf("#");
        }
        else{
            printf(" ");
        }

    }
  }
  printf("\n");
} //até aqui é o menu feito
printf("\n    Opcao: ");
scanf("%d", &op);
printf("\n");

switch (op){
	
	
	case 1: // QUADRADO
	
		for(j=1; j<=60; j++){
			printf("=");
		}
		printf("\n   QUADRADO\n");
		for(j=1; j<=60; j++){
			printf("=");
		}
		printf("\n");
		do {
		printf("\nDigite o lado do quadrado: ");
		scanf("%f", &q);
		}
		while(q < 1);
		printf("\nAREA: %.2f", q*q);
		printf("\nPERIMETRO: %.2f", q*4);
		printf("\n");
		printf("\n");
		if (q > 25){
			q=25;
		}
		
		for(x=0; x<q+3; x++){
            printf(" ");
			          
            if(x != 0){
                printf("%c", lateral);
            }
			else{
                printf(" ");
            }
            for(y=0; y<q; y++){ 
                if(x == 0 || x == (q+2)){
                    printf("%c%c", base, base);                                
                }
				else if(x == 1){
                    printf("  ");
                }
				else{
                    printf(" %c", preenchimento);    
                }
            }
            if(x == 0){
                printf("%c", base);      
            }
			else if( x == (q+2)){
                printf("%c%c", base, lateral);
            }
			else{
                printf(" %c", lateral);
            }                        
        	printf("\n");
        }
		
		printf("\n");
		for(j=1; j<=60; j++){
			printf("=");
		}
		printf("\n");
		printf("\n");
	break;

	case 2: // RETANGULO
		
		for(j=1; j<=60; j++){
			printf("=");
		}
		printf("\n   RETANGULO\n");
		for(j=1; j<=60; j++){
			printf("=");
		}
		printf("\n");
		printf("\nDigite um lado do retangulo: ");
		scanf("%f", &r1);
		printf("Digite o outro lado do retangulo: ");
		scanf("%f", &r2);
		printf("\nAREA: %.2f", r1*r2);
		printf("\nPERIMETRO: %.2f", (r1*2)+(r2*2));
		printf("\n");
		printf("\n");
		
		if(r1==r2){
			q=r1;
			for(x=0; x<q+3; x++){
            printf(" ");
			          
            if(x != 0){
                printf("%c", lateral);
            }
			else{
                printf(" ");
            }
            for(y=0; y<q; y++){ 
                if(x == 0 || x == (q+2)){
                    printf("%c%c", base, base);                                
                }
				else if(x == 1){
                    printf("  ");
                }
				else{
                    printf(" %c", preenchimento);    
                }
            }
            if(x == 0){
                printf("%c", base);      
            }
			else if( x == (q+2)){
                printf("%c%c", base, lateral);
            }
			else{
                printf(" %c", lateral);
            }                        
        	printf("\n");
        }
		}
		else{
		for(x=0; x<r2+3; x++){
            printf(" ");
			          
            if(x != 0){
                printf("%c", lateral);
            }
			else{
                printf(" ");
            }
            for(y=0; y<r1; y++){ 
                if(x == 0 || x == (r2+2)){
                    printf("%c%c", base, base);                                
                }
				else if(x == 1){
                    printf("  ");
                }
				else{
                    printf(" %c", preenchimento);    
                }
            }
            if(x == 0){
                printf("%c", base);      
            }
			else if( x == (r2+2)){
                printf("%c%c", base, lateral);
            }
			else{
                printf(" %c", lateral);
            }                        
        	printf("\n");
        }
		}
		printf("\n");
		for(j=1; j<=60; j++){
			printf("=");
		}
		printf("\n");
		printf("\n");
		break;

	case 3: // TRIANGULO EQUILATERO
	
		for(j=1; j<=60; j++){
			printf("=");
		}
		printf("\n   TRIANGULO EQUILATERO\n");
		for(j=1; j<=60; j++){
			printf("=");
		}
		printf("\n");
		printf("\nDigite o lado do triangulo equilatero: ");
		scanf("%f", &te);
		printf("\nAREA: %.2f", (pow(te, 2)*pow(3.0, 1.0/2.0))/4);
		printf("\nPERIMETRO: %.2f", te*3);
		printf("\n");
		
		if (te > 25){
            te = 25;
        }
		for (x = 0; x < te + 3; x++){
			for (y = 0; y < 2 * (te / 2) - x + 3; y++){
                printf(" ");
            }
			if (x != 0){
                printf("%c", lateralesq);
            }
			for (y = 0; y < x - 1; y++){
			if (x == (te + 2)){
                printf("%c%c", base, base);
            }
            else{
            	printf(" %c", preenchimento);
            }
            }
			if (x == 0){
            	printf(".");
            }
            else if (x == (te + 2)){
                printf("%c%c", base, lateraldir);
            }
            else{
                printf(" %c", lateraldir);
            }
			printf("\n");
        }
        
		printf("\n");
		for(j=1; j<=60; j++){
			printf("=");
		}
		printf("\n");
		printf("\n");
		break;

	case 4: // TRIANGULO RETANGULO
	
		for(j=1; j<=60; j++){
			printf("=");
		}
		printf("\n   TRIANGULO RETANGULO\n");
		for(j=1; j<=60; j++){
			printf("=");
		}
		printf("\n");
		printf("\nDigite o lado do cateto do triangulo retangulo: ");
		scanf("%f", &trcat);
		printf("\nAREA: %.2f", (trcat*trcat)/2);
		trhip = pow(pow(trcat, 2)+pow(trcat, 2), 1.0/2.0);
		printf("\nPERIMETRO: %.2f", (trcat*2)+trhip);
		printf("\n");
		printf("\n");
		
		for(x=0; x<trcat+3; x++){
			if(x==0){
				printf(".");
			}
			else{
				printf("%c", lateral);
			}
			for(y=0; y<x-1; y++){
				if(x==trcat+2){
					printf("%c", base, base);
				}
				else{
					printf("%c", preenchimento);
				}
			}
			if(x>0){
				printf("%c", lateraldir);
			}
			printf("\n");
		}
    	
		printf("\n");
		for(j=1; j<=60; j++){
			printf("=");
		}
		printf("\n");
		printf("\n");
		break;

	case 5: // LOSANGO OU TRAPEZIO
	
		printf("Digite a outra opcao: ");
		printf("\n(losango, trapezio...)\n");
		scanf("%s", vet);
		printf("\n");
		for(g=0; g<50; g++){
		if(strcmp(vet, "losango")==0){
			for(j=1; j<=60; j++){
			printf("=");
			}
			printf("\n   LOSANGO\n");
			for(j=1; j<=60; j++){
			printf("=");
			}
			printf("\n");
			printf("\n");
			printf("Digite a diagonal menor do losango: ");
			scanf("%f", &los1);
			printf("Digite a diagonal maior do losango: ");
			scanf("%f", &los2);
			printf("\nAREA: %.2f", (los1*los2)/2);
			printf("\nPERIMETRO: %.2f", pow(pow(los1, 2)+pow(los2, 2), 1.0/2.0));
			printf("\n");
			printf("\n");
			for(j=1; j<=60; j++){
			printf("=");
			}
			printf("\n");
			printf("\n");
		}
		else if(strcmp(vet, "trapezio")==0){
			for(j=1; j<=60; j++){
			printf("=");
			}
			printf("\n   TRAPEZIO\n");
			for(j=1; j<=60; j++){
			printf("=");
			}
			printf("\n");
			printf("\n");
			printf("Digite a base menor do trapezio: ");
			scanf("%f", &trap1);
			printf("Digite a base maior do trapezio: ");
			scanf("%f", &trap2);
			printf("Digite a altura do trapezio: ");
			scanf("%f", &traph);
			printf("\nAREA: %.2f", ((trap1+trap2)*traph/2));
			printf("\nPERIMETRO: %.2f", ((pow(pow(traph, 2)+pow((trap1-trap2)/2, 2), 1.0/2.0))*2)+trap1+trap2);
			printf("\n");
			printf("\n");
			for(j=1; j<=60; j++){
			printf("=");
			}
			printf("\n");
			printf("\n");
	}
	break;
	}
}
}
while(op!=6);
return 2019007411;
}
