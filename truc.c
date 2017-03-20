#include "truc.h"

/*---------------------------------------------
 *
 *				AFFICHER_TAB
 *
 *	Parcours un tableau de vakeur à afficher
 *
 *	Lexique :
 * 	- tab : Tableau à afficher (entree)
 *  - n : Taille du tableau à afficher (entree)
 *
 * -------------------------------------------*/
void afficher_tab(valeur_t * tab, int n){
	int j;
	for(j=0;j<n;j++){
		printf("%d ", tab[j]);
	}
	printf("\n");
}



/*---------------------------------------------
 *
 *				ECHANGER
 *
 *	Echange deux valeurs
 *
 *	Lexique :
 *  - a : premiere valeur d'echange
 *  - b : seconde valeur d'echange
 * -------------------------------------------*/
void echanger(valeur_t * a, valeur_t * b){
	valeur_t temp = *b;
	*b = *a;
	*a = temp;
}

/*---------------------------------------------
 *
 *				TRUC
 *
 *	Algorithme truc en version iterative
 *
 *	Lexique :
 *  - i
 *  - n : taille max du tableau de valeur (entree)
 *  - tab : tableau de valeur (entree/sortie)
 *  - j : variable d'itération
 *  - pile : pile d'utilisation de l'algorithme
 *  - continuer : valeur (0 ou 1) indiquant s'il faut
 * continuer l'algorithme ou non
 * -------------------------------------------*/

void truc(int i, int n, valeur_t * tab){
        pile_t pile = init_pile(2*n);;
	int    j = i-1;
	int    iInit = i;
	int    continuer = 1;
	

	while (continuer){
		while (i != n && j!=n) {
			empiler(&pile, i);
			empiler(&pile, j);
			echanger(tab+i-1, tab+j);
			i++;
			j=i-1;
		}
		if(j!=n){
		  afficher_tab(tab, n);
		}
		if(!est_vide(pile)){
			depiler(&pile, &j);
			depiler(&pile, &i);
			echanger(tab+i-1, tab+j);
			j++;
		}else{
		        continuer = 0;
		}
	}
}

/*---------------------------------------------
 *
 *				TRUC_REC
 *
 *	Algorithme truc en version recursive
 *
 *	Lexique :
 *  - i
 *  - n : taille max du tableau de valeur (entree)
 *  - tab : tableau de valeur (entree/sortie)
 *  - j : variable d'iteration
 * -------------------------------------------*/
void truc_rec(int i, int n, valeur_t * tab){
	int j;
	if (i == n){
		afficher_tab(tab, n);
	}else{
		for(j=i-1; j<n; j++){
			echanger(tab+i-1, tab+j);
			truc_rec(i+1, n, tab);
			echanger(tab+i-1,tab+j);
		}
	}
}
