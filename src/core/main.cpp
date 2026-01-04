#include "../define.hpp"

#include "../window.hpp"
#include "../renderer.hpp"

#include <SDL3/SDL.h>
#include <iostream>

static i32 program_exit(i32 code){
  std::cout << "Exiting with code:{" << code << "}" << std::endl;
  return code;
}

static bool init_sdl(void){
  return SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS);
}

int main(int argc, char **argv){
  if(!init_sdl()){
    return program_exit(EXIT_FAILURE);
  }

  window win(600, 800, "svte", SDL_WINDOW_HIDDEN | SDL_WINDOW_RESIZABLE);
  if(!win.w){
    return program_exit(1);
  }
  
  renderer rend(win.w);
  if(!rend.r){
    return program_exit(1);
  }
  
  
  

  return program_exit(EXIT_SUCCESS);
}
