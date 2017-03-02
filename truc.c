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
void afficher_tab(valeur_t * tab, n){
	int i;
	for(i=0;i<n;i++){
		printf("%d; ",tab[i]);
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
void truc(int i, int n, valeur_t * tab){
	pile_t p = initPile(n*2);
	int j = 1;
	do{
		while(j != n){
			empiler(&p, i);
			empiler(&p, j);
			echanger(tab[i-1],tab[j]);
			i++;
			j=i;
		}
		if (!estVide(p)){
			echanger(tab[i-1],tab[j]);
			afficher_tab(tab, n);
			echanger(tab[i-1],tab[j]);
			depiler(p, j);
			depiler(p, i);
			j++;
		}
	}while (!estVide(p));
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
	valeur_t temp;
	if (i-1 == n){
		afficher_tab(tab, n);
	}else{
		for(j=i-1; j<n; i++){
			echanger(tab[i-1], tab[j]);
			truc(i+1, n, tab);
			echanger(tab[i-1],tab[j]);
		}
	}
}
