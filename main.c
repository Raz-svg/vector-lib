#include"raylib.h"
#include"math101.h"


const int screenwidth=800;
const int screenheight=600;

// draw point function
void dpoint(Point a,Color c){
  DrawPixel(a.x,a.y,c);
}   


int main(){


  InitWindow(screenwidth,screenheight,"sample window");

  SetTargetFPS(60);


  while(!WindowShouldClose()){

    BeginDrawing();

    ClearBackground(BLACK);

    Point a =p(200,300);
    Point b =p(100,150);
    Point c =p(600,400);

    dpoint(a,RAYWHITE);
    dpoint(b,RAYWHITE);
    dpoint(c,RAYWHITE);

    EndDrawing();
  }


  CloseWindow();
    


  return 0;
}
