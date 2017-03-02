#ifndef _PILE_PILEDEREC_TREMEAU_KLEVH_
#define _PILE_PILEDEREC_TREMEAU_KLEVH_

typedef int valeur_t;

typedef struct
{
  valeur_t * valeurs;
  int taille;
  int curseur;
}pile_t;

pile_t init_pile(int);

void free_pile(pile_t *);

int est_vide(pile_t);

/* ----------------------------------------------
 *
 *              EMPILER
 *
 * Principe
 *
 * Lexique :
 *  - var : expl (entree/sortie)
 *
 * Retour :
 * ---------------------------------------------- */
int empiler(pile_t,valeur_t);

int depiler(pile_t,valeur_t*);

#endif
