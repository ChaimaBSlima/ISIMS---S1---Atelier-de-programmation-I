#include <stdio.h>

/**
* remplirM - remplir le matrice
*
* @M: matrice des entiers
* @n: nombre des lignes et colonnes (carrée)
*
* Return: void
*/
void remplirM(int M[][20], int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("Entrez l'élément [%d][%d] : ", i + 1, j + 1);
			scanf("%d", &M[i][j]);
		}
	}
}

/**
* est_symetrique - vérifier si une matrice est symétrique
*
* @M: matrice des entiers
* @n: nombre des lignes et colonnes (carrée)
*
* Return: 1 si Ture 0 si False
*/
int est_symetrique(int M[][20], int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (M[i][j] != M[j][i])
				return (0);
		}
	}
	return (1);
}

/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	int n;
	int M[20][20];

	do {
		printf("Entrez la dimension de la matrice carrée : ");
		scanf("%d", &n);
	} while (n < 1 || n > 20);

	remplirM(M, n);

	if (est_symetrique(M, n))
	{
		printf("La matrice est symétrique par rapport à");
		printf(" la première diagonale.\n");
	}
	else
	{
		printf("La matrice n'est pas symétrique par rapport");
		printf(" la première diagonale.\n");
	}

	return (0);
}
