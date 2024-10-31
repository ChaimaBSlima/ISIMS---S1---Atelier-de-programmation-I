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
* deplacer -  Fonction pour déplacer les m premiers
* éléments d'un tableau vers la fin
*
* @tableau: tableau des entiers
* @taille: taille du tableau
* @m: m premier éléments
*
* Return: void
*/

void deplacer(int tableau[], int taille, int m)
{
	int i, temp[m];

	for (i = 0; i < m; i++)
	{
		temp[i] = tableau[i];
	}

	for (i = m; i < taille; i++)
	{
		tableau[i - m] = tableau[i];
	}

	for (i = 0; i < m; i++)
	{
		tableau[taille - m + i] = temp[i];
	}
}

/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	int taille, m, i;

	printf("Entrez la taille du tableau : ");
	scanf("%d", &taille);

	int tableau[taille];

	remplirT(tableau, taille);
	m = -1;
	while (m < 0 || m > taille)
	{
	printf("Entrez le nombre d'éléments à déplacer (m) : ");
	scanf("%d", &m);
	}
	deplacer(tableau, taille, m);
	printf("Tableau après déplacement : ");
	for (i = 0; i < taille; i++)
	{
		printf("%d ", tableau[i]);
	}
	printf("\n");
	return (0);
}
