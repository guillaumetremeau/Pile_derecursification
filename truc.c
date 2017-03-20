#include "truc.h"

/*---------------------------------------------
 *
 *				AFFICHER_TAB
 *
 *	Principe
 *
 *	Lexique :
 *
 *	Retour :
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
 *	Principe
 *
 *	Lexique :
 *
 *	Retour :
 *
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
 *	Principe
 *
 *	Lexique :
 *
 *	Retour :
 *
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
 *	Principe
 *
 *	Lexique :
 *
 *	Retour :
 *
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
