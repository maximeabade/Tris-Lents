/*!
 * \file tris.h
 *
 * \autor Justine Ribas <ribasjusti@eisti.eu>
 * \version 0.1
 * \date 19 février 2020
 *
 * \brief header des fonctions et procéedures relatives aux tris
 *
 *
 */

 #ifndef __TRIS_H__
 #define __TRIS_H__


 // Inclusion des entêtes de librairies
 #include "tableau.h"

 /**
  *\fn void triTabEntier(void)
  *
  *\author Justine Ribas <ribasjusti@eisti.eu>
  *\version 0.1
  *\date 15 mars 2020
  *
  *\brief permet de trier un tableau d'entiers par insertion ou sélection de façon récursive
  *
  *
  */
void triTabEntier(void);

 /**
  *\fn void triSelection(int* tab, int n)
  *
  *\author Justine Ribas <ribasjusti@eisti.eu>
  *\version 0.1
  *\date 19 février 2020
  *
  *\brief permet de trier un tableau par sélection
  *
  *
  *\param tab le tableau qui à trier
  *\param n la taille du tableau
  *
  */
void triSelection(int* tab, int n);

/**
 *\fn void triBulle(int* tab, int n)
 *
 *\author Justine Ribas <ribasjusti@eisti.eu>
 *\version 0.1
 *\date 19 février 2020
 *
 *\brief permet de trier un tableau à bulle
 *
 *
 *\param tab le tableau qui à trier
 *\param n la taille du tableau
 *
 */
 void triBulle(int* tab, int n);

 /**
  *\fn void triInsertion(int* tab, int n)
  *
  *\author Justine Ribas <ribasjusti@eisti.eu>
  *\version 0.1
  *\date 19 février 2020
  *
  *\brief permet de trier un tableau par insertion
  *
  *
  *\param tab le tableau qui à trier
  *\param n la taille du tableau
  *
  */
void triInsertion(int* tab, int n);

/**
 *\fn void triVF(void)
 *
 *\author Justine Ribas <ribasjusti@eisti.eu>
 *\version 0.1
 *\date 24 février 2020
 *
 *\brief permet de trier un tableau en mettant tous les Vrais à gauche et les Faux à droite
 *
 *
 */
void triVF(void);

 /**
  *\fn void  triCouleur(void)
  *
  *\author Justine Ribas <ribasjusti@eisti.eu>
  *\version 0.1
  *\date 24 février 2020
  *
  *\brief permet de trier un tableau en mettant tous le bleu à droite, le blanc au milieu et le rouge à gauche
  *
  *
  */
void  triCouleur(void);

/**
 *\fn void  estTrie(void)
 *
 *\author Justine Ribas <ribasjusti@eisti.eu>
 *\version 0.1
 *\date 24 février 2020
 *
 *\brief permet de savoir si un tableau est trié
 *
 */
void  estTrie(void);

/**
 *\fn void  insereValeur(void)
 *
 *\author Justine Ribas <ribasjusti@eisti.eu>
 *\version 0.1
 *\date 14 mars 2020
 *
 *\brief permet d'insérer une valeur dans un tableau trié
 *
 */
 void  insereValeur(void);

/**
 *\fn void  triInsertionD(void)
 *
 *\author Justine Ribas <ribasjusti@eisti.eu>
 *\version 0.1
 *\date 14 mars 2020
 *
 *\brief permet de trier un tableau par insertion dans l'ordre décroissant
 *
 */
void  triInsertionD(void);

/**
 *\fn void  triCoktail(void)
 *
 *\author Justine Ribas <ribasjusti@eisti.eu>
 *\version 0.1
 *\date 15 mars 2020
 *
 *\brief permet de trier un tableau par le tri coktail
 *
 */
void  triCoktail(void);

/**
 *\fn void  triSelectionR(int* tab, int n, int indice)
 *
 *\author Justine Ribas <ribasjusti@eisti.eu>
 *\version 0.1
 *\date 15 mars 2020
 *
 *\brief permet de trier un tableau par sélection de façon récursive
 *
 *
 *\param tab le tableau à trier
 *\param n la taille du tableau
 *\param indice l'indice à partir duquel on parcourt le tableau
 *
 */
void  triSelectionR(int* tab, int n, int indice);

/**
 *\fn void  triInsertionR(int* tab, int n)
 *
 *\author Justine Ribas <ribasjusti@eisti.eu>
 *\version 0.1
 *\date 15 mars 2020
 *
 *\brief permet de trier un tableau par insertion de façon récursive
 *
 *
 *\param tab le tableau à trier
 *\param n la taille du tableau
 *
 */
void  triInsertionR(int* tab, int n);

/**
 *\fn void  echanger(int* tab, int indice1, int indice2)
 *
 *\author Justine Ribas <ribasjusti@eisti.eu>
 *\version 0.1
 *\date 15 mars 2020
 *
 *\brief permet d'échanger deux cases dans un tableau
 *
 *
 *\param tab le tableau à modifier
 *\param indice1 l'indice de la première case à échanger
 *\param indice2 l'indice de la deuxième case à échanger
 *
 */
void  echanger(int* tab, int indice1, int indice2);

#endif
