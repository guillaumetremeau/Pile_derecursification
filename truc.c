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
 *	Principe
 *
 *	Lexique :
 *
 *	Retour :
 *
 * -------------------------------------------*/
void truc_rec(valeur_t i, int n, valeur_t * tab){
	valeu_t j;
	valeur_t temp;
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
