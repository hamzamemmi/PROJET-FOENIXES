
int collision_Parfaite(SDL_Surface *calque, SDL_Rect posperso, int decalage, int direction){
	SDL_Color col;
	int c = 0;

	if(direction == 0){//Up
		col=GetPixel(calque,posperso.x + posperso.w +decalage,posperso.y+(posperso.h/2));

	}else if(direction == 1){//Down
		col=GetPixel(calque,posperso.x ,posperso.y+(posperso.h/2)+decalage);

	}else if(direction == 2){//Left
		col=GetPixel(calque,posperso.x+(posperso.w/2)+decalage ,posperso.y);

	}else if(direction == 3){//Rigth
		col=GetPixel(calque,posperso.x+(posperso.w / 2),posperso.y + posperso.h +decalage);

	}

	if ((col.r == 0) && (col.b == 0) && (col.g == 0)){
}		c = 1;

return c;
SDL_Color GetPixel(SDL_Surface *surface,int x,int y{

    SDL_Color color;
    Uint32 col = 0;

    //determine position
    char* pPosition = (char*) surface->pixels;

    
    pPosition += surface->pitch * y;



    pPosition += (surface->format->BytesPerPixel * x);



    memcpy(&col, pPosition, surface->format->BytesPerPixel);



    SDL_GetRGB(col,surface->format,&color.r,&color.g,&color.b);

    return color;
}
