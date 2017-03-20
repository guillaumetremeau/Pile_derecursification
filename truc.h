#ifndef _TRUC_PILEDEREC_TREMEAU_KLEVH_
#define _TRUC_PILEDEREC_TREMEAU_KLEVH_

#include <stdio.h>
#include "pile.h"

/*---------------------------------------------
 *
 *				AFFICHER_TAB
 *
<<<<<<< HEAD
 *	Principe :
 *
 *	Retour :
 *
 * --------------------------------------------------------*/
void afficher_tab(valeur_t *,int);
=======
 *	Parcours un tableau de vakeur à afficher
 * -------------------------------------------*/
void afficher_tab(valeur_t *, n);
>>>>>>> 48ef98c57702de0dcd7c8bf287d0d69a188bff01


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
