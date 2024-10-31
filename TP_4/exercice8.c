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
* afficher_diagonale - afficher les éléments de la diagonale principale
*
* @M: matrice des entiers
* @n: nombre des lignes et colonnes (carrée)
*
* Return: void
*/
void afficher_diagonale(int M[][20], int n)
{
	int i;

	printf("Éléments de la diagonale principale : ");
	for (i = 0; i < n; i++)
	{
		printf("%d ", M[i][i]);
	}
	printf("\n");
}

/**
* calculer_max_min -calculer le tableau max pour chaque ligne
* et le tableau min pour chaque colonne
*
* @M: le matrice
* @n: nombre des lignes et colonnes (carrée)
* @T1: tableau pour le max des lignes
* @T2: tableau pour le min des colonnes
*
* Return: void
*/
void calculer_max_min(int M[][20], int n, int T1[], int T2[])
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		T1[i] = M[i][0];
		T2[i] = M[0][i];
	}

	for (i = 0; i < n; i++)
	{
		for (j = 1; j < n; j++)
		{
			if (M[i][j] > T1[i])
			{
				T1[i] = M[i][j];
			}
		}
	}

	for (j = 0; j < n; j++)
	{
		for (i = 1; i < n; i++)
		{
			if (M[i][j] < T2[j])
			{
				T2[j] = M[i][j];
			}
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
	int n, i;
	int M[20][20], T1[20], T2[20];

	do {
		printf("Entrez la dimension de la matrice carrée : ");
		scanf("%d", &n);
	} while (n < 1 || n > 20);

	remplirM(M, n);
	afficher_diagonale(M, n);

	calculer_max_min(M, n, T1, T2);

	printf("Valeurs maximales pour chaque ligne :\n");
	for (i = 0; i < n; i++)
	{
		printf("Max de la ligne %d : %d\n", i + 1, T1[i]);
	}

	printf("Valeurs minimales pour chaque colonne :\n");
	for (i = 0; i < n; i++)
	{
		printf("Min de la colonne %d : %d\n", i + 1, T2[i]);
	}

	return (0);
}
