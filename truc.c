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
void afficher_tab(valeur_t *, n){
	int j;
	for(j=0;j<n;j++){
		printf("%d ",
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
void truc(int, int, valeur_t *){
	
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
