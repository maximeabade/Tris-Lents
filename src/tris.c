/*!
 * \file tris.c
 *
 * \autor Justine Ribas <ribasjusti@eisti.eu>
 * \version 0.1
 * \date 19 février 2020
 *
 * \brief fonctions et procéedures relatives aux tris
 *
 *
 */

//Inclusion des entêtes de librairies
#include "tris.h"

// Code des fonctions et procédures

void triTabEntier(void){
  int* tab; //le tableau à trier
  int n; //la taille du tableau à trier
  int choix; //le choix de l'utilisateur
  printf("Quelle est la taile de votre tableau ?\n");
  do{
    n=saisirEntier();
  } while(n<=0);
  tab=creerTabEntier1D(n);
  saisirTabEntier1D(tab, n);
  system("clear");
  printf("Voici votre tableau :\n");
  afficherTab(tab, n);
  printf("\nQuel tri souhaiter vous réaliser ?\n1-Tri par sélection\n2-Tri par insertion\n");
  choix=saisirEntier();
  switch (choix){
    case 1 : triSelectionR(tab, n, 0);
    break;
    case 2 : triInsertionR(tab, n);
    break;
    default : printf("Ce choix n'existe pas...");
    break;
  }
  printf("\nVoici le tableau trié :\n");
  afficherTab(tab, n);
  free(tab);
}

/*
void triSelection(int* tab, int n){
  int i; //iterrateur de boucle
  int j; //iterrateur de boucle
  int min; //indice de la case minimum
  for(i=0; i<n; i++){
    min=i;
    for(j=i; j<n; j++){
      if(tab[min]>tab[j]){
        min=j;
        echanger(tab, min, i);
      }
    }
  }
  printf("\n\n");
}
*/

/*
void triBulle(int* tab, int n){
  int i; //iterrateur de boucle
  int estTrie; //variable booléeene qui indique si un tableau est trié ou non
  estTrie=0;
  while(!estTrie){
    estTrie=1;
    for(i=0; i<n-1; i++){
      if(tab[i]>tab[i+1]){
        estTrie=0;
        echanger(tab, i, i+1);
      }
    }
  }
}
*/

void triInsertion(int* tab, int n){
  int i; //iterrateur de boucle
  int j; //iterrateur de boucle
  int tmp; //variable pour effectuer un échange
  for(i=0; i<n; i++){
    tmp=tab[i];
    j=i;
    while(j>0 && tab[j-1]>tmp){
      tab[j]=tab[j-1];
      j--;
    }
    tab[j]=tmp;
  }
}

void triVF(void){
  int* tab; //le tableau à trier
  int n; //la taille du tableau à trier
  int min; //l'indice minimum jusqu'au quel le tableau est trié à gauche
  int max; //l'indice maximum jusqu'au quel le tableau est trié à droite
  printf("Quelle est la taile de votre tableau ?\n");
  do{
    n=saisirEntier();
  }while(n<=0);
  tab=creerTabEntier1D(n);
  saisirTabVF(tab, n);
  system("clear");
  printf("Voici votre tableau :\n");
  afficherTab(tab, n);
  min=0;
  max=n-1;
  while(min!=max){
    if(tab[min]==0){
      min++;
    } else {
      echanger(tab, min, max);
      max--;
    }
  }
  printf("\nVoici le tableau trié :\n");
  afficherTab(tab, n);
  free(tab);
}

void  triCouleur(void){
  int* tab; //le tableau à trier
  int n; //la taille du tableau à trier
  int indice1;
  int indice2;
  int indice3;
  printf("Quelle est la taile de votre tableau ?\n");
  do{
    n=saisirEntier();
  }while(n<=0);
  tab=creerTabEntier1D(n);
  saisirTabCouleur(tab, n);
  system("clear");
  printf("Voici votre tableau :\n");
  afficherTab(tab, n);
  indice1=0;
  indice2=0;
  indice3=n-1;
  while(indice2<=indice3){
    switch (tab[indice2]) {
      case 0 :
        echanger(tab, indice2, indice1);
        indice1++;
        indice2++;
        break;
      case 1 :
        indice2++;
        break;
      case 2 :
        echanger(tab, indice2, indice3);
        indice3--;
        break;
      default : printf("erreur\n");
    }
  }
  printf("\nVoici le tableau trié :\n");
  afficherTab(tab, n);
  free(tab);
}

void  estTrie(void){
  int* tab; //le tableau à trier
  int n; //la taille du tableau à trier
  int i; //iterrateur de boucle
  int estCroissant; //variable booléenne
  printf("Quelle est la taile de votre tableau ?\n");
  do{
    n=saisirEntier();
  }while(n<=0);
  tab=creerTabEntier1D(n);
  saisirTabEntier1D(tab, n);
  estCroissant=1;
  for(i=0; i<n-1; i++){
    if(tab[i]>tab[i+1]){
      estCroissant=0;
    }
  }
  if(estCroissant){
    printf("Le tableau est trié\n");
  } else {
    printf("Le tableau n'est pas trié\n");
  }
  free(tab);
}

void  insereValeur(void){
  int* tab1; //le tableau à agrandir
  int* tab2; //le nouveau tableau
  int n; //la taille du tableau à trier
  int valeur; //la valeur à insérer
  int indice; //la place de la valeur
  int i; //iterrateur de boucle
  i=0;
  indice=0;
  printf("Quelle est la taile de votre tableau ?\n");
  do{
    n=saisirEntier();
  } while(n<=0);
  tab1=creerTabEntier1D(n);
  saisirTabEntier1D(tab1, n);
  system("clear");
  triInsertion(tab1, n);
  printf("Voici votre tableau trié:\n");
  afficherTab(tab1, n);
  printf("Quelle est la valeur que vous voulez insérer?\n");
  valeur=saisirEntier();
  while(i<n && indice==0){
    if(valeur<tab1[i]){
      indice=i;
    }
    i++;
  }
  tab2=agrandirTab(tab1, n, valeur, indice);
  printf("\nVoici le nouveau tableau :\n");
  afficherTab(tab2, n+1);
  free(tab2);
  free(tab1);
}

void  triInsertionD(void){
  int* tab; //tableau à trier
  int n; //la taille du tableau
  int i; //iterrateur de boucle
  int j; //iterrateur de boucle
  int tmp; //variable pour effectuer un échange
  printf("Quelle est la taile de votre tableau ?\n");
  do{
    n=saisirEntier();
  } while(n<=0);
  tab=creerTabEntier1D(n);
  saisirTabEntier1D(tab, n);
  system("clear");
  printf("Voici votre tableau :\n");
  afficherTab(tab, n);
  for(i=0; i<n; i++){
    tmp=tab[i];
    j=i;
    while(j>0 && tab[j-1]<tmp){
      tab[j]=tab[j-1];
      j--;
    }
    tab[j]=tmp;
  }
  printf("Voici votre tableau trié :\n");
  afficherTab(tab, n);
  free(tab);
}

void  triCoktail(void){
  int* tab; //tableau à trier
  int n; //la taille du tableau
  int estEchange; //variable booléenne
  int i; //iterrateur de boucle
  printf("Quelle est la taile de votre tableau ?\n");
  do{
    n=saisirEntier();
  } while(n<=0);
  tab=creerTabEntier1D(n);
  saisirTabEntier1D(tab, n);
  system("clear");
  printf("Voici votre tableau :\n");
  afficherTab(tab, n);
  estEchange=1;
  while(estEchange==1){
    estEchange=0;
    for(i=0; i<n-2; i++){
      if(tab[i]>tab[i+1]){
        echanger(tab, i, i+1);
        estEchange=1;
      }
    }
    for(i=n-2; i>0; i--){
      if(tab[i]>tab[i+1]){
        echanger(tab, i, i+1);
        estEchange=1;
      }
    }
  }
  printf("Voici votre tableau trié :\n");
  afficherTab(tab, n);
  free(tab);
}

void  triSelectionR(int* tab, int n, int indice){
  int min; //l'indice du minimum
  int i; //iterrateur de boucle
  min=indice;
  for(i=indice+1; i<n; i++){
    if(tab[i]<tab[min]){
      min=i;
    }
  }
  echanger(tab, min, indice);
  if(indice+1<n){
    triSelectionR(tab, n, indice+1);
  }
}

void  triInsertionR(int* tab, int n){
  int fin; //la dernière case du tableau comparée
  int i; //iterrateur de boucle
  if(n<=1){
    return;
  }
  triInsertionR(tab, n-1);
  fin=tab[n-1];
  i=n-2;
  while(i>=0 && tab[i]>fin){
    tab[i+1]=tab[i];
    i--;
  }
  tab[i+1]=fin;
}

void  echanger(int* tab, int indice1, int indice2){
  int tmp; //variablepour effectuer un échange
  tmp=tab[indice1];
  tab[indice1]=tab[indice2];
  tab[indice2]=tmp;
}
