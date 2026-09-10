#pragma once
#include <raylib.h>
#include <raymath.h>
#include "node.hpp"
#include <string>

class Player : public Node{
    public:
    const char* def_sprite_path = "./sprites/placeholder.png";
    Rectangle rect;
    Rectangle hitbox_rect;
    Vector2 dir = {0, 0};
    float speed = 200.0f;
    Texture2D sprite;

    Player();
    ~Player();

    Player(Vector2 pos, Rectangle hitbox_rect, const char* string_path = "./sprites/placeholder.png");

    void Draw();

    void Update();
};