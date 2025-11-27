#include <stdio.h>
#include <raylib.h>

int main(int argc, char const *argv[])
{
    InitWindow(100, 100, "Cells");
    SetTargetFPS(60);

    while (!IsKeyDown(KEY_ESCAPE))
    {
        continue;
    }

    CloseWindow();
    return 0;
}
