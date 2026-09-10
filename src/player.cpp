#include "player.hpp"

Player::~Player(){
    UnloadTexture(sprite);
}

Player::Player(){
    sprite = LoadTexture(def_sprite_path);
    rect.x = 0; rect.y = 0;
    rect.width = sprite.width; rect.height = sprite.height;
    hitbox_rect = rect;
}

Player::Player(Vector2 pos, Rectangle hitbox_rect, const char* sprite_path){
    sprite = LoadTexture(sprite_path);
    rect.x = pos.x; rect.y = pos.y;
    rect.width = sprite.width; rect.height = sprite.height;
    this->hitbox_rect.x = hitbox_rect.x; this->hitbox_rect.y = hitbox_rect.y;
    this->hitbox_rect.width = hitbox_rect.width; this->hitbox_rect.height = hitbox_rect.height;
}

void Player::Draw(){
    DrawTexturePro(sprite, {0, 0, (float)sprite.width, (float)sprite.height}, rect, {0, 0}, 0, WHITE);
}

void Player::Update(){
    dir.x = (int)IsKeyDown(KEY_D) - (int)IsKeyDown(KEY_A);
    dir.y = (int)IsKeyDown(KEY_S) - (int)IsKeyDown(KEY_W);

    if (dir.x != 0 || dir.y != 0){
        dir = Vector2Normalize(dir);
    }

    rect.x += speed * dir.x * GetFrameTime();
    rect.y += speed * dir.y * GetFrameTime();
}
