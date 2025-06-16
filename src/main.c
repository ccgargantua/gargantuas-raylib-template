#include "raylib.h"

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "raylib - rotating Hello World");

    SetTargetFPS(60);

    float rotation = 0.0f;

    while (!WindowShouldClose())
    {
        rotation += 1.0f;

        BeginDrawing();
            ClearBackground(RAYWHITE);

            const char *text = "Hello, World!";
            int fontSize = 40;
            Vector2 textSize = MeasureTextEx(GetFontDefault(), text, fontSize, 2);
            Vector2 textPos = { screenWidth / 2.0f, screenHeight / 2.0f };

            DrawTextPro(GetFontDefault(), text, textPos,
                        (Vector2){ textSize.x / 2, textSize.y / 2 },
                        rotation, fontSize, 2, DARKBLUE);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
