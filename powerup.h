#ifndef POWERUP_H
#define POWERUP_H
typedef enum {
    POWERUP_NONE,
    POWERUP_BANANA,
    POWERUP_GREEN_SHELL,
    POWERUP_RED_SHELL,
    POWERUP_BLUE_SHELL,
    POWERUP_OIL,
    POWERUP_MUSHROOM,
    POWERUP_GOLD_MUSHROOM,
    POWERUP_BIG_MUSHROOM,
    POWERUP_BIG_LIGHTNING,
    POWERUP_BIG_STAR
} PowerUp;

void powerups_render(SDL_Renderer *ren);

#endif//POWERUP_H
