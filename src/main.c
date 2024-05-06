
#include "raylib.h"

int main(void) {
	InitWindow(600, 200, "sample project");
	
	SetTargetFPS(60);
	while (!WindowShouldClose()) {
		BeginDrawing();
			ClearBackground((Color){24, 24, 24, 255});
		EndDrawing();
	}

	CloseWindow();

	return 0;
}

