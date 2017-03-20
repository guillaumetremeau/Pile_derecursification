#include <string.h>

#include "truc.h"

#define SIZE 3

int main(int argc, char *argv[])
{
  int i,n;
  int tab[SIZE];

  for(i=0;i<SIZE;++i){
    tab[i]=i+1;
  }

  printf("Tableau de test : ");
  afficher_tab(tab,SIZE);
  
  for(n=1;n<=SIZE;++n){
    for(i=n;i>0;--i){
      printf("\nTaille du tableau : %d ; indice de depart : %d.\n",n,i);
      printf("Resultat de l'appel de truc recursif :\n");
      truc_rec(i,n,tab);
      printf("Resultat de l'appel de truc iteratif :\n");
      truc(i,n,tab);
    }
  }
  
  return 0;
}

