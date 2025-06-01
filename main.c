#include"raylib.h"

const int screenwidth=800;
const int screenheight=1200;


int main(){


  InitWindow(screenwidth,screenheight,"sample window");

  SetTargetFPS(60);


  while(!WindowShouldClose()){

    BeginDrawing();

    ClearBackground(RAYWHITE);

    DrawText("NIce window",190,200,20,LIGHTGRAY);

    EndDrawing();
  }


  CloseWindow();
    


  return 0;
}
