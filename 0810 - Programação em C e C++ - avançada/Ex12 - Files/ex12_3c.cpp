#include<stdio.h>
#include<locale.h>
#include<windows.h>
#include<math.h>

main()
{
	FILE *fp;
	float p, ing, inf, med;
	char tipo[1];

	printf("Indique se quer alterar(a) ou criar um novo ficheiro(w): ");
	gets(tipo);

	fp=fopen("C:\\Users\\Userpl137pc07\\Documents\\pipl0924\\notas.txt",tipo);

	printf("Nota de portugues: ");
	scanf("%f",&p);
	printf("Nota de Ingles: ");
	scanf("%f",&ing);
	printf("Nota de Informatica: ");
	scanf("%f",&inf);

	med=(p+ing+inf)/3;

	fprintf(fp, "Nota Portugues: %.2f\n", p);
    fprintf(fp, "Nota Ingles: %.2f\n", ing);
    fprintf(fp, "Nota Informatica: %.2f\n", inf);
    fprintf(fp, "Media: %.2f\n", med);
	fprintf(fp, "-------------------------------");

	fclose(fp);

	system("C:\\Users\\Userpl137pc07\\Documents\\pipl0924\\notas.txt");
}
