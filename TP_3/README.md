 <h1><p align="center"> Atelier de programmation I - TP 2  </h1></p></font>
 



# Exercices :pushpin:

### Exercice 1 
Montrez ce que fait le programme suivant et réécrivez-le en utilisant une boucle while et une
boucle do…while

```
#include
<stdio.h>
int main()
{
int i;
for (i = 0; i< 10;i++)
{ printf("iteration d \n", i);
}
printf ("valeur de i après la boucle : %d \n", i);
return 0;
}
``` 

### Exercice 2 
Ecrire un programme C pour lire l’entier N et afficher sa table de multiplication.

Exemple :
Pour N = 6, le programme affiche :
6x 0 = 0
6 x 1 = 6
6 x 2 = 12
6 x 3 = 18
...
6x 10 = 60

### Exercice 3 
Ecrire un programme qui lit un nombre puis calcule :
- La somme des entiers jusqu'à ce nombre.
- La somme paire jusqu’à ce nombre.
- La somme impaire jusqu'à ce nombre.
Par exemple, pour N=5, le programme doit calculer :
S1= 1+2+3+4+5 ; S2=2+4 ; S3=1+3+5

### Exercice 4
Afficher un triangle isocèle formé d'étoiles de N lignes :
Exemple pour N=8 :


### Exercice 5 
Ecrire un programme C qui calcule la factorielle d’un entier entré au clavier.
1- En utilisant while
2 - En utilisant for

### Exercice 6 
Ecrire un programme qui permet de saisir un entier positif et calcule son inverse
(Par exemple 5426 ---> 6245).

### Exercice 7 
1- Ecrire un programme C pour saisir un nombre entier entre 3 et 4 chiffres et afficher la
moyenne de ses chiffres.
2- Vérifier si le nombre saisi est parfait ou non.
Un nombre est considéré comme parfait s’il est égal à la somme de ses diviseurs stricts
(496 : La somme de ses diviseurs stricts (1, 2, 4, 8, 16, 31, 62, 124, 248) est égale à 496)

### Exercice 8 
Un restaurant veut gérer ses plats. Il propose 4 plats différents (plat escalope pannée, plat
escalope grillée, plat grillade et plat shawarma).
Ecrire un programme C qui affiche un menu à l'utilisateur et lui permet de sélectionner un
plat.

### Exercice 9
Ecrire un programme qui lit une série d’entiers positifs inférieurs à 100. Lorsque l’utilisateur
tape 0, le programme calcule et affiche la somme et la valeur maximale des éléments de
cette série.


# Compilation :gear:
| Files |  compilation              |
| :-------- |  :------------------------- |
| `exercice1.c` | gcc -o EX1 exercice1.c |
| `exercice2.c` | gcc -o EX2 exercice2.c |
| `exercice3.c` | gcc -o EX3 exercice3.c |
| `exercice4.c` | gcc -o EX4 exercice4.c |
| `exercice5_For.c` | gcc -o EX5 exercice5_For.c |
| `exercice5_While.c` | gcc -o EX5 exercice5_While.c |
| `exercice6.c` | gcc -o EX6 exercice6.c |
| `exercice7_1.c` | gcc -o EX7 exercice7_1.c | 
| `exercice7_2.c` | gcc -o EX7 exercice7_2.c | 
| `exercice8.c` | gcc -o EX8 exercice8.c |
| `exercice9.c` | gcc -o EX9 exercice9.c |

***
# Author :woman_technologist:

- [@ChaimaBSlima](https://github.com/ChaimaBSlima)


# 🚀 About Me
I'm a Machine Learning developer..


