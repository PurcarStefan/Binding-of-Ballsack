#include "sprite_rect.hpp"

SpriteRect::SpriteRect(Rectangle rect, const char* sprite_path){
    this->sprite = LoadTexture(sprite_path);
    this->rect = rect;
}