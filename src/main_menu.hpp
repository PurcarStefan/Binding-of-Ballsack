#pragma once
#include "raylib.h"
#include "node.hpp"
#include "config.hpp"
#include "sprite_rect.hpp"

class MainMenu : public Node{
    public:
    SpriteRect* BG = nullptr;

    MainMenu();
    ~MainMenu();

    void Draw();
    void Update();
};