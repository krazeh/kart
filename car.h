#ifndef CAR_H
#define CAR_H

#include <SDL2/SDL.h>

#include "powerup.h"
#include "defines.h"
#include "libs/cJSON/cJSON.h"

#define TRAIL_LENGTH 100

typedef struct {
	int id;
	vec2 direction;

	vec2 force;
	vec2 velocity;
	vec2 pos;

	char drift;

	int width, height;
	int wheel_x[4];
	int wheel_y[4];

	SDL_Texture *texture;

	PowerUp powerup;

	int tiles_passed;

	// Effects
	Uint32 stunned_at;
	Uint32 turbo_at;
	Uint32 invincible_at;
	Uint32 tipped_at;
	Uint32 big_at;

	vec2 trail[TRAIL_LENGTH];
} Car;

Car *car_add();
void car_apply_force(Car *car, vec2 force);
void cars_move();

void car_turn_left(Car *car);
void car_turn_right(Car *car);
void car_accelerate(Car *car);
void car_decelerate(Car *car);
void car_use_powerup(Car *car);

cJSON *car_serialize(Car *car);
void car_deserialize(cJSON *root);
void cars_render(SDL_Renderer *ren);

Car *car_get_leader();

#endif

/* vim: set ts=8 sw=8 tw=0 noexpandtab cindent softtabstop=8 :*/
