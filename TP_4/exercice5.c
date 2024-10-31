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
* verif_zero - vérifier si un entier contient le chiffre 0
*
* @nombre: nombre à vérifié
*
* Return: 1 si Ture 0 si False
*/
int verif_zero(int nombre)
{
	int chiffre;

	if (nombre == 0)
		return (1);

	while (nombre != 0)
	{
		chiffre = nombre % 10;
		if (chiffre == 0)
			return (1);
		nombre /= 10;
	}
	return (0);
}

/**
* supp_zero - supprimer les éléments contenant le chiffre 0
*
* @tableau: tableau des entiers
* @taille: taille du tableau
*
* Return: nouvelle taille du tableau
*/

int supp_zero(int tableau[], int taille)
{
	int i, j = 0;

	for (i = 0; i < taille; i++)
	{
		if (!verif_zero(tableau[i]))
		{
			tableau[j] = tableau[i];
			j++;
		}
	}
	return (j);
}

/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	int N, i, taille;

	do {
		printf("Entrez la taille du tableau T: ");
		scanf("%d", &N);
	} while (N < 1 || N > 50);

	int T[N];

	remplirT(T, N);

	taille = supp_zero(T, N);

	printf("Tableau après suppression des éléments contenant le chiffre 0 : ");
	for (i = 0; i < taille; i++)
	{
		printf("%d ", T[i]);
	}
	printf("\n");

	return (0);
}
