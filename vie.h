#ifndef VIE_H_INCLUDED
#define VIE_H_INCLUDED

typedef struct
{	SDL_Color couleur;
	SDL_Surface *texte;
	TTF_Font *police=NULL;
	SDL_Rect posvie;
        char cahine[50];
}texte;
void initialiservie(vie *v);
void initialiserscore(score *s);
void initialisertemps(temps *t);
void modificationvie(vie *v, int c);
void modificationscore(score *s);
void modificationtemps(temps *t);
void affichervie(vie v);
void afficherscore(score s);
void affichertemps(temps t);

#endif
