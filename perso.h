#ifndef FONCTION_H_INCLUDED
#define FONCTION_H_INCLUDED
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>



typedef struct
{	SDL_Color couleur;
	SDL_Surface *texte;
	TTF_Font *police=NULL;
	SDL_Rect posvie;
	int nbvie;
}vie;
typedef struct
{	SDL_Color couleur;
	SDL_Surface *texte;
	TTF_Font *police;
	SDL_Rect *pos;
	int topscore;
	int score;
}score;
typedef struct
{	SDL_Color couleur;
	SDL_Surface *texte;
	TTF_Font *police;
	SDL_Rect *pos;
	int tempsinitial;
	int tempscourant;
}temps;
typedef struct
{	
 SDL_Surface *perso,*d[8],*g[8];
 SDL_Rect *posperso;
}perso;

void initialiserperso(perso *p);
void initialiservie(vie *v);
void initialiserscore(score *s);
void initialisertemps(temps *t);
void affichervie(vie v);
void afficherscore(score s);
void affichertemps(temps t);
void afficherperso(perso p);
void deplacerperso(posperso *pp);

#endif
