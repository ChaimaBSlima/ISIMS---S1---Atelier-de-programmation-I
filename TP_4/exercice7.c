#include <stdio.h>

/**
* remplirM - remplir le matrice
*
* @M: matrice des entiers
* @lignes: nombre des lignes
* @colonnes: nombre des colonnes
*
* Return: void
*/
void remplirM(float M[][20], int lignes, int colonnes)
{
	int i, j;

	for (i = 0; i < lignes; i++)
	{
		for (j = 0; j < colonnes; j++)
		{
			printf("Entrez l'élément [%d][%d] : ", i + 1, j + 1);
			scanf("%f", &M[i][j]);
		}
	}
}

/**
* calculer_somme - calculer la somme de chaque
* ligne et chaque colonne
*
* @M: le matrice
* @lignes: nombre des lignes
* @colonnes: nombre des colonnes
* @T1: tableau pour la somme des lignes
* @T2: tableau pour la somme des colonnes
*
* Return: void
*/

void calculer_somme(float M[][20], int lignes,
								 int colonnes, float T1[], float T2[])
{
	int i, j;

	for (i = 0; i < lignes; i++)
		T1[i] = 0;
	for (i = 0; j < colonnes; i++)
		T2[i] = 0;

	for (i = 0; i < lignes; i++)
	{
		for (j = 0; j < colonnes; j++)
		{
			T1[i] += M[i][j];
			T2[j] += M[i][j];
		}
	}
}

/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	int l, c, i;
	float M[20][20], T1[20], T2[20];

	do {
		printf("Entrez le nombre de lignes: ");
		scanf("%d", &l);
	} while (l < 1 || l > 20);

	do {
		printf("Entrez le nombre de colonnes: ");
		scanf("%d", &c);
	} while (c < 1 || c > 20);


	remplirM(M, l, c);

	calculer_somme(M, l, c, T1, T2);

	printf("Somme des lignes :\n");
	for (i = 0; i < l; i++)
	{
		printf("Somme de la ligne %d : %.2f\n", i + 1, T1[i]);
	}

	printf("Somme des colonnes :\n");
	for (i = 0; i < c; i++)
	{
		printf("Somme de la colonne %d : %.2f\n", i + 1, T2[i]);
	}

	return (0);
}
