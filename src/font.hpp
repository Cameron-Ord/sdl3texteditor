#pragma once
#include "define.hpp"
#include <SDL3_ttf/SDL_ttf.h>

struct font {
  font(const char *font_path, const f32 size) : f(nullptr), fp(font_path), ptsize(size) {}
  TTF_Font *f;
  const char *fp;
  f32 ptsize;
};

