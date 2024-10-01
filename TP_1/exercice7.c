/* Inclusion de la bibliothèque standard d'entrée/sortie */
#include <stdio.h>
/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	/* Déclaration d'une variable */
	char carlu;

	/*
	 *  Affichage d'un message
	 * demandant à l'utilisateur d'entrer une lettre
	 */
	printf("Entrez une lettre \n");
	/*  Lecture du caractère saisi */
	carlu = getchar();
	/*
	* Affichage d'un message indiquant
	* que la lettre saisie va être affichée
	*/
	printf("la lettre entrée est : ");
	/* Affichage du caractère stocké dans la variable 'carlu'*/
	putchar(carlu);
	/* Fin du programme avec un code de retour 0 */
	return (0);
}
