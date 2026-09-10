#pragma once
#include "raylib.h"

struct SpriteRect{
    Texture2D sprite;
    Rectangle rect;

    SpriteRect(Rectangle rect, const char* sprite_path);
};