#include "../pile.h"
#include <stdio.h>

void affiche_pile(pile_t p){
  int i;
  if(p.curseur!=-1){
    if(p.valeurs){      
      for(i=p.curseur;i>=0;--i){
	printf("%d ",p.valeurs[i]);
      }

      printf("\n");
    }else{
      printf("Le curseur ne vaut pas -1 mais la pile est libere\n");
    }
  }else{
    printf("Pile vide\n");
  }
}

int main()
{
  pile_t p;
  valeur_t * v;
  
  printf("--- Tests de la Pile ---\n\n");
  
  printf("Test d'initialisation de la pile :\n");
  p = init_pile(2);
  printf("Curseur : -1 == %d\n",p.curseur);
  printf("Taille : 2 == %d\n",p.taille);
  printf("Tableau : (nil) != %p\n\n",p.valeurs);

  printf("\nTest de est_vide partie 1 :\n");
  printf("1 == %d\n",est_vide(p));
  
  printf("\nTest d'empilage de valeurs :\n");
  printf("0 == %d\n",empiler(&p,5));
  printf("0 == %d\n",empiler(&p,3));
  printf("1 == %d\n",empiler(&p,2));
  printf("Pile supposee : 3 5\n");
  printf("Pile reelle : ");
  affiche_pile(p);
  
  printf("\nTest de est_vide partie 2\n");
  printf("0 == %d\n",est_vide(p));

  printf("\nTest de depilage :\n");
  v = (valeur_t *)malloc(sizeof(valeur_t));
  if(!v){
    printf("Probleme d'allocation dans le testeur (et non dans le fichier teste)\n");
  }else{
    printf("0 == %d\n",depiler(&p,v));
    printf("Valeur depilee : 3 == %d\n",*v);
    printf("0 == %d\n",depiler(&p,v));
    printf("Valeur depilee : 5 == %d\n",*v);
    printf("1 == %d\n",depiler(&p,v));

    free(v);
  }

  free_pile(&p);
  
  return 0;
}
