#include "raylib.h"
#include "math101.h"
#include <math.h>

const int SCREEN_WIDTH = 900;
const int SCREEN_HEIGHT = 900;

void drawPoint(point pointToDraw, Color pointColor){
    DrawPixel(pointToDraw.x, pointToDraw.y, pointColor);
}

int main(){
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Animated Rectangle Window");
    SetTargetFPS(60);

    aabb boundingBox;
    boundingBox.min = v2(100, 100);
    boundingBox.max = v2(300, 250);

    float t = 0.0f;

    while (!WindowShouldClose()) {
        float dt = GetFrameTime();
        t += dt;

        BeginDrawing();
        ClearBackground(BLACK);

        float scaleFactor = 1.0f + sinf(t) * 0.5f;

        vector centerPoint = mid(boundingBox);

        float baseWidth = width(boundingBox);
        float baseHeight = height(boundingBox);

        float scaledWidth = baseWidth * scaleFactor;
        float scaledHeight = baseHeight * scaleFactor;

        float halfWidth = scaledWidth * 0.5f;
        float halfHeight = scaledHeight * 0.5f;

        point bottomLeftCorner = p(centerPoint.x - halfWidth, centerPoint.y - halfHeight);
        point bottomRightCorner = p(centerPoint.x + halfWidth, centerPoint.y - halfHeight);
        point topLeftCorner = p(centerPoint.x - halfWidth, centerPoint.y + halfHeight);
        point topRightCorner = p(centerPoint.x + halfWidth, centerPoint.y + halfHeight);

        DrawLine(bottomLeftCorner.x, bottomLeftCorner.y, bottomRightCorner.x, bottomRightCorner.y, WHITE);
        DrawLine(bottomLeftCorner.x, bottomLeftCorner.y, topLeftCorner.x, topLeftCorner.y, WHITE);
        DrawLine(topRightCorner.x, topRightCorner.y, bottomRightCorner.x, bottomRightCorner.y, WHITE);
        DrawLine(topRightCorner.x, topRightCorner.y, topLeftCorner.x, topLeftCorner.y, WHITE);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}

