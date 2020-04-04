#ifndef FONCTION_H_INCLUDED
#define FONCTION_H_INCLUDED
#include <time.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>

typedef struct 
{

 SDL_surface *bg
 SDL_Rect *posbg

}background;

void Initialiser(background *x);

void Afficher(SDL_surface *screen,background x);

SDL_Color GetPixel(SDL_Surface *surface, int x, int y);

int collision_Parfaite(SDL_Surface *calque, SDL_Rect posperso, int decalage, int direction);
#endif
