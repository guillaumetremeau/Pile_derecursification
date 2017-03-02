#include "truc.h"

void affiche_pile(pile_t p){
  int i;
  if(p.curseur!=-1){
    if(p.valeurs){
      printf("Pile : ");
      
      for(i=0;i<p.curseur;;++i){
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
  
  return 0;
}
