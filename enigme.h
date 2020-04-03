#ifndef  ENIGME_H_INCLUDED 
#define ENIGME_H_INCLUDED

#include<stdio.h> 
#include<stdlib.h>
#include<SDL/SDL.h>
#include<SDL/SDL_image.h> 
#include <SDL/SDL_ttf.h>
#include <string.h> 
#include <SDL/SDL_mixer.h>

typedef struct
{
	char reponsevrai[3];
	char quest[400];
	char rep1[3];
	char rep2[3];
} enigme_question;

typedef struct 
{
	enigme_question EN[30];
	int reponse;
} enigme_reponse;

typedef struct 
{
	 SDL_Surface * img;
 	 SDL_Rect p;
} enigme;

int initialiser_enigme();
// void generer(SDL_Surface * screen  , char image [],enigme *E ,int *aleatoire);
void affichage(enigme *E ,int val);
int resolution_enigmes(char reponse_choisie[4], int val,enigme *E);
int solution_enigme (char image [], int *reponse) ;
int resolution (int * running ,int *run);
int afficher_resultat (SDL_Surface * screen,int s,int r,enigme *EN, int reponse) ;

#endif  /* ENIGME_H_ */
