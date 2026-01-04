#include "../renderer.hpp"
#include "../logger.hpp"

SDL_Renderer *create_renderer(SDL_Window *const w){
  SDL_Renderer *tmp = SDL_CreateRenderer(w, nullptr);
  if(!tmp){
    log_write_str("Failed to create renderer->", SDL_GetError());
    return nullptr;
  }
  return tmp;
}

renderer::renderer(SDL_Window *const w) : r(nullptr) {
  r = create_renderer(w);
}


