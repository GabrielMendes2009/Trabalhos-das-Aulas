#include<stdio.h>
#include<locale.h>
#include<windows.h>
#include<math.h>

float trian(float b, float h){ 
	return (b*h)/2; 
}

float quad(float l){
	return l*l;
}

float retan(float a, float b){
	return a*b;
}

float los(float d_maior, float d_menor){
	return (d_maior*d_menor)/2;
}

float trap(float b_maior, float b_menor, float h){
	return ((b_maior + b_menor) * h) / 2;
}



int main(){
	
	SetConsoleOutputCP(65001);
	
	int menu;
	float b, b_menor, b_maior, l, a, d_maior, d_menor, h;
	
	do {
        printf("Menu Área\n----------------------\n0-Sair do Programa\n1-Triângulo\n2-Quadrado\n3-Retângulo\n4-Losango\n5-Trapézio\n");
        scanf("%d", &menu);

        switch(menu){
            case 1:
                printf("Indique o valor da base: ");
                scanf("%f", &b);
                
                printf("Indique o valor da altura: ");
                scanf("%f", &h);
                
				printf("A = (%.2f x %.2f)/2 = %.2f\n", b, h, trian(b, h));
                break;

            case 2:
                printf("Indique o valor dos lados: ");
                scanf("%f", &l);
                
				printf("A = %.2f x %.2f = %.2f\n", l, l, quad(l));
                break;

            case 3:
                printf("Indique o valor do comprimento do primeiro lado: ");
                scanf("%f", &a);
                
				printf("Indique o valor do comprimento do segundo lado: ");
                scanf("%f", &b);
                
				printf("A = %.2f x %.2f = %.2f\n", a, b, retan(a, b));
                break;

            case 4:
                printf("Indique o valor da diagonal maior: ");
                scanf("%f", &d_maior);
                
				printf("Indique o valor da diagonal menor: ");
                scanf("%f", &d_menor);
                printf("A = (%.2f x %.2f)/2 = %.2f\n", d_maior, d_menor, los(d_maior, d_menor));
                
				break;

            case 5:
                printf("Indique o valor da base maior: ");
                scanf("%f", &b_maior);
                
				printf("Indique o valor da base menor: ");
                scanf("%f", &b_menor);
                
				printf("Indique o valor da altura: ");
                scanf("%f", &h);
                
				printf("A = ((%.2f + %.2f) x %.2f)/2 = %.2f\n", b_maior, b_menor, h, trap(b_maior, b_menor, h));
                break;

            case 0:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Inseriu uma resposta incorreta!!!!!!!!!!!!\n");
                break;
        }

    } while (menu != 0);

    return 0;
}

