#include "../window.hpp"
#include "../logger.hpp"

SDL_Window *create_window(i32 width, i32 height, const char *name, u32 flags){
  SDL_Window *tmp = SDL_CreateWindow(name, width, height, flags);
  if(!tmp){
    log_write_str("Failed to create window->", SDL_GetError());
    return nullptr;
  }
  return tmp;
}


window::window(i32 ww, i32 wh, const char *n, u32 flags) : w(nullptr), width(ww), height (wh), name(n), open_flags(flags) {
  w = create_window(ww, wh, n, flags);
}

