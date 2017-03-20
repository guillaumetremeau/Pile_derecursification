#ifndef _PIL_PILEDEREC_TREMEAU_KLEVH_
#define _PIL_PILEDEREC_TREMEAU_KLEVH_

#include "pile.h"

/*---------------------------------------------
 *
 *				AFFICHER_TAB
 *
 *	Parcours un tableau de vakeur à afficher
 * -------------------------------------------*/
void afficher_tab(valeur_t *, n);


/*---------------------------------------------
 *
 *				ECHANGER
 *
 *	Echange deux valeurs
 * -------------------------------------------*/
void echanger(valeur_t *, valeur_t *);


/*---------------------------------------------
 *
 *				TRUC
 *
 *	Algorithme truc en version iterative
 * -------------------------------------------*/
void truc(int, int, valeur_t *);


/*---------------------------------------------
 *
 *				TRUC_REC
 *
 *	Algorithme truc en version recursive
 * -------------------------------------------*/
void truc_rec(int, int, valeur_t *);

#endif
