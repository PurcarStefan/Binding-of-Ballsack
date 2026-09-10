#include "main_menu.hpp"

MainMenu::MainMenu(){
    BG = new SpriteRect(Rectangle{0, 0, (float)WINDOW_WIDTH, (float)WINDOW_HEIGHT}, "./sprites/mainmenu_bg.png");
}

MainMenu::~MainMenu(){
    if(BG != nullptr){
        delete BG;
        BG = nullptr;
    }
}

void MainMenu::Update(){

}

void MainMenu::Draw(){
    if(BG != nullptr){
        DrawTexturePro(BG->sprite, {0, 0, (float)BG->sprite.width, (float)BG->sprite.height}, BG->rect, {0, 0}, 0.0f, WHITE);
    }
}
 