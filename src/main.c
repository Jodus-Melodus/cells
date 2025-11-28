#include <stdio.h>
#include <raylib.h>

#include "grid.h"

#define WIDTH 1000
#define HEIGHT 500

int main(int argc, char const *argv[])
{
    InitWindow(WIDTH, HEIGHT, "Cells");
    SetTargetFPS(60);

    Grid *grid = GridCreate(WIDTH, HEIGHT);

    while (WindowShouldClose() || !IsKeyDown(KEY_ESCAPE))
    {
        continue;
    }

    CloseWindow();
    GridFree(grid);
    return 0;
}