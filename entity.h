#ifndef entite_H_INCLUDED
#define entite_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <stdbool.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>


typedef struct {
SDL_Surface *entity ; 
SDL_Rect pos_entity;
SDL_Rect anim_entity[70];
int cont_entity;
int col;
}entity ;

void init_tab_anim_entity(SDL_Rect* clip); 
void initialiser_entity (entity *e) ;
void afficher_entity(entity * e , SDL_Surface *screen);
void anim(entity *e);
void mvt_entity(entity *e);
void detection_collision(personnage *p, entity* e);

#endif 
