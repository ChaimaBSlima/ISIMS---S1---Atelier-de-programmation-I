#include <stdio.h>

/**
* remplirT1 - remplir le tableau
*
* @tableau: tableau des entiers
* @taille: taille du tableau
* Return: void
*/
void remplirT1(int tableau[], int taille)
{
	int i;

	for (i = 0; i < taille; i++)
	{
		printf("Entrez l'élément %d: ", i + 1);
		scanf("%d", &tableau[i]);
	}
}

/**
* remplir_T2 - Fonction pour copier les valeurs positives dans T2
*
* @T1: premier tableau des entiers
* @taille: taille du premier tableau
* @T2: deuxième tableau des entiers positive
*
* Return: taille du T2
*/
int remplir_T2(int T1[], int taille, int T2[])
{
	int i, taille2;

	taille2 = 0;

	for (i = 0; i < taille; i++)
	{
		if (T1[i] > 0)
		{
			T2[taille2] = T1[i];
			taille2++;
		}
	}
	return (taille2);
}

/**
* remplir_T3 - Fonction pour copier les valeurs négatives dansT3
*
* @T1: premier tableau des entiers
* @taille: taille du premier tableau
* @T3: troisième tableau des entiers négative
*
* Return: taille du T3
*/
int remplir_T3(int T1[], int taille, int T3[])
{
	int i, taille3;

	taille3 = 0;

	for (i = 0; i < taille; i++)
	{
		if (T1[i] < 0)
		{
			T3[taille3] = T1[i];
			taille3++;
		}
	}
	return (taille3);
}

/**
* afficher_tableau - afficher un tableau
*
* @tableau: tableau à afficher
* @taille: taille du tableau
* Return: void
*/
void afficher_tableau(int tableau[], int taille)
{
	int i;

	for (i = 0; i < taille; i++)
	{
		printf("%d ", tableau[i]);
	}
	printf("\n");
}

/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	int N, taille2, taille3;

	do {
		printf("Entrez la taille du tableau T1: ");
		scanf("%d", &N);
	} while (N < 5 || N > 20);

	int T1[N], T2[N], T3[N];

	remplirT1(T1, N);

	taille2 = remplir_T2(T1, N, T2);
	taille3 = remplir_T3(T1, N, T3);
	printf("Tableau T2 (positifs): ");
	afficher_tableau(T2, taille2);
	printf("Tableau T3 (négatifs): ");
	afficher_tableau(T3, taille3);

	return (0);
}
