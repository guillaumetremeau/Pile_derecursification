#ifndef _TRUC_PILEDEREC_TREMEAU_KLEVH_
#define _TRUC_PILEDEREC_TREMEAU_KLEVH_

#include <stdio.h>
#include "pile.h"

/*---------------------------------------------
 *
 *				AFFICHER_TAB
 *
 *	Principe :
 *
 *	Retour :
 *
 * --------------------------------------------*/
void afficher_tab(valeur_t *,int);


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
