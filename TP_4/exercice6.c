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
		do {
		printf("Entrez l'élément %d: ", i + 1);
		scanf("%d", &tableau[i]);
		} while (tableau[i] <= 0);
	}
}

/**
* afficher_diviseurs_communs -  vérifier et afficher les diviseurs
* de chaque élément de T1 qui apparaissent dans T2
*
* @T1: le permier tableau
* @N: taille du premier tableau
* @T2: le deuxième tableau
* @M: taille du deuxième tableau
*
* Return: void
*/
void afficher_diviseurs_communs(int T1[], int N, int T2[], int M)
{
	int i, j;

	for (i = 0; i < N; i++)
	{
		printf("Les diviseurs de %d dans T2 : ", T1[i]);
		int flag = 0;

		for (j = 0; j < M; j++)
		{
			if (T1[i] % T2[j] == 0)
			{
				printf("%d ", T2[j]);
				flag = 1;
			}
		}

		if (!flag)
			printf("Aucun");

		printf("\n");
	}
}

/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	int N, M;

	do {
		printf("Entrez la taille du tableau T1: ");
		scanf("%d", &N);
	} while (N < 2 || N > 20);
	do {
		printf("Entrez la taille du tableau T2: ");
		scanf("%d", &M);
	} while (M < 2 || M > 20);

	int T1[N], T2[M];

	printf("Remplir T1: \n");
	remplirT(T1, N);
	printf("Remplir T2: \n");
	remplirT(T2, M);

	afficher_diviseurs_communs(T1, N, T2, M);

	return (0);
}
