#pragma once
#include "define.hpp"
#include <SDL3/SDL_video.h>

struct window {
  window(i32 ww, i32 wh, const char *n, u32 flags);
  SDL_Window *w;
  i32 width, height;
  const char *name;
  const u32 open_flags;
};

SDL_Window *create_window(i32 width, i32 height, const char *name, u32 flags);
