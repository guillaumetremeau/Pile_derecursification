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
void truc(valeur_t * i, int n, valeur_t * tab){
	pile_t pile;
	valeur_t * j;
	int continuer;

	continuer = 1;
	*j = 1;
	pile = init_pile(n);
	while (continuer = 1){
		while (*j != n)) {
			empiler(pile, *i);
			empiler(pile, *j);
			echanger(tab[*i], tab[*j]);
			(*i)++;
			*j = *i;
		}
		afficher_tab(tab, n);
		if( !(est_vide(pile))){
			echanger(tab[*i], tab[*j]);
			depiler(pile, j);
			depiler(pile, i);
		}else continuer = 0;
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
void truc_rec(valeur_t i, int n, valeur_t * tab){
	valeur_t j;
	if (i == n){
		afficher_tab(tab, n);
	}else{
		for(j=i-1; j<n; i++){
			echanger(tab[i], tab[j]);
			truc(i+1, n, tab);
			echanger(tab[i],tab[j]);
		}
	}
}
