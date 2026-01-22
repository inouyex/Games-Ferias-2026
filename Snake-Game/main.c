/*estou pesquisando ainda verificando se devo programar em C ou em C++ ou até mesmo em C#*/

#include "raylib.h"

int main(void)
{
    InitWindow(800, 600, "ScaleRush - Snake");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawText("Raylib 5.5 funcionando!", 190, 280, 20, BLACK);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}