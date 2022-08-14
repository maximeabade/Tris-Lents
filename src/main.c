/*!
 * \file main.c
 *
 * \autor Justine Ribas <ribasjusti@eisti.eu>
 * \version 0.1
 * \date 19 février 2020
 *
 * \brief fonction principale
 *
 *
 */

 //Inclusion des entêtes de librairies
 #include "tris.h"
 #include "tableau.h"
 #include "saisie.h"
 #include <stdio.h>
 #include <stdlib.h>

int main(void){
  int choix; //le choix de l'utilisateur
  printf("Que voulez vous faire ?\n1-Savoir si un tableau est trié\n2-Insérer une nouvelle valeur dans un tableau trié\n3-Trier un tableau par insertion dans l'ordre  décroissant\n4-Trier un tableau par le tri coktail\n5-Trier un tableau pas insertion ou par sélection de manière récursive\n6-Trier un tableau de Vrai et de Faux\n7-Trier un tableau de couleurs\n\n");
  choix=saisirEntier();
  switch (choix) {
    /*Question 1*/
    case 1 : estTrie();
    break;
    /*Question 2*/
    case 2 : insereValeur();
    //Dans le pire des cas, la complexité est de l'ordre de n² pour trier le tableau et de n pour insérer la valeur
    break;
    /*Question 3*/
    case 3 : triInsertionD();
    //Il serait possible d'insérer une valeur en appliquant une recherche dichotomique, ainsi nous réduirons de n/2 le nombre de comparaisons
    break;
    /*Question 4*/
    case 4 : triCoktail();
    //Quand la plus petite valeur du tableau se trouve tout à droite, le tri coktail est bien plus eficace que le tri à bulle car il permet de faire descendre la valeur bien plus rapidement
    break;
    /*Question 5*/
    case 5 : triTabEntier();
    break;
    /*Question 6*/
    case 6 : triVF();
    break;
    /*Question 7*/
    case 7 : triCouleur();
    break;
    default : printf("Ce choix n'existe pas... Vous allez quitter le programme.\n");
    break;
  }
  return(0);
}
