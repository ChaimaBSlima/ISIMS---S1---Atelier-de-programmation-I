#include <stdio.h>

/**
* remplirT - remplir le tableau
*
* @tableau: tableau des entiers
* @taille: taille du tableau
* Return: void
*/
void remplirT(int tableau[], int taille)
{
	int i;

	for (i = 0; i < taille; i++)
	{
		printf("Entrez l'élément %d: ", i + 1);
		scanf("%d", &tableau[i]);
	}
}

/**
* trier_tableau - trier le tableau utilisant tri a bulle
*
* @tableau: tableau des entiers
* @taille: taille du tableau
* Return: void
*/
void trier_tableau(int tableau[], int taille)
{
	int i, j, temp;

	for (i = 0; i < taille - 1; i++)
	{
		for (j = 0; j < taille - i - 1; j++)
		{
			if (tableau[j] > tableau[j + 1])
			{
				temp = tableau[j];
				tableau[j] = tableau[j + 1];
				tableau[j + 1] = temp;
			}
		}
	}
}

/**
* fusionner_T3 - Fusion T1 et T2 en T3 en ordre décroissant
*
* @T1: le permier tableau
* @taille1: taille du premier tableau
* @T2: le deuxième tableau
* @taille2: taille du deuxième tableau
* @T3: troisième tableau
*
* Return: void
*/
void fusionner_T3(int T1[], int taille1,
									int T2[], int taille2, int T3[])
{
	int i = taille1 - 1;
	int j = taille2 - 1;
	int k = 0;

	while (i >= 0 && j >= 0)
	{
		if (T1[i] > T2[j])
		{
			T3[k++] = T1[i--];
		}
		else
		{
			T3[k++] = T2[j--];
		}
	}
	while (i >= 0)
		T3[k++] = T1[i--];
	while (j >= 0)
		T3[k++] = T2[j--];
}

/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	int taille1, taille2;

	printf("Entrez la taille de T1: ");
	scanf("%d", &taille1);
	printf("Entrez la taille de T2: ");
	scanf("%d", &taille2);

	int T1[taille1], T2[taille2], T3[taille1 + taille2];

	printf("Remplissez le tableau T1:\n");
	remplirT(T1, taille1);
	printf("Remplissez le tableau T2:\n");
	remplirT(T2, taille2);

	trier_tableau(T1, taille1);
	trier_tableau(T2, taille2);

	fusionner_T3(T1, taille1, T2, taille2, T3);

	printf("Tableau T3 : ");
	for (int i = 0; i < taille1 + taille2; i++)
	{
		printf("%d ", T3[i]);
	}
	printf("\n");

	return (0);
}
