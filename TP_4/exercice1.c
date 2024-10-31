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
	for (int i = 0; i < taille; i++)

	{
		printf("Entrez l'élément %d: ", i + 1);
		scanf("%d", &tableau[i]);
	}
}
/**
* Occ - chercher le nombre d'occurence
*
* @tableau: tableau des entiers
* @taille: taille du tableau
* @nombre: le nombre pour chercher le nombre d'occurence
*
* Return: nombre d'ocurence
*/
int Occ(int tableau[], int taille, int nombre)
{
	int j = 0;

	for (int i = 0; i < taille; i++)

	{
		if (tableau[i] == nombre)
		{
			j++;
		}
	}
	return (j);
}

/**
* supp1Occ - supprimer la première occurence
*
* @tableau: tableau des entiers
* @taille: taille du tableau
* @nombre: le nombre pour supprimer sa première occurence
*
* Return: 1 si Ture 0 si False
*/
int supp1Occ(int tableau[], int taille, int nombre)
{
	for (int i = 0; i < taille; i++)

	{
		if (tableau[i] == nombre)
		{
			for (int j = i; j < taille - 1; j++)

			{
				tableau[j] = tableau[j + 1];
			}
			return (1);
		}
	}
	return (0);
}

/**
* main - Entry point
*
* Return: void
*/
void main(void)
{
	int taille;
	int nombre;

	printf("Entrez la taille du tableau : ");
	scanf("%d", &taille);

	int tableau[taille];

	remplirT(tableau, taille);

	printf("Entrez un nombre pour trouver ses occurrences : ");
	scanf("%d", &nombre);
	int occurrences = Occ(tableau, taille, nombre);

	printf("Le nombre %d apparaît %d fois dans le tableau.\n",
	nombre, occurrences);

	printf("Entrez un nombre à supprimer : ");
	scanf("%d", &nombre);
	if (supp1Occ(tableau, taille, nombre))
	{
		printf("Le nombre %d a été supprimé du tableau.\n", nombre);
	}
	else
	{
		printf("Le nombre %d n'a pas été trouvé dans le tableau.\n", nombre);
	}
	printf("Tableau après suppression : ");
	for (int i = 0; i < taille - 1; i++)

	{
		printf("%d ", tableau[i]);
	}
	printf("\n");
}
