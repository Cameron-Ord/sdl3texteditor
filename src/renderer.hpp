#pragma once

#include <SDL3/SDL_render.h>
#include <SDL3/SDL_rect.h>

struct renderer {
  renderer(SDL_Window *const w);
  SDL_Renderer *r;
};

SDL_Renderer *create_renderer(SDL_Window *const win);


