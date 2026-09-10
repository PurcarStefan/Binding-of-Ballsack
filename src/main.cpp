#include <raylib.h>
#include <iostream>
#include "config.hpp"
#include "custom_timer.hpp"
#include "player.hpp"
#include "main_menu.hpp"
#include <vector>

using namespace std;

class Game{
    public:
    vector<Node*> GameTree;

    Camera2D MainCamera;

    Game(){
        InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, TITLE);

        GameTree.push_back(new MainMenu());

        // *player = Player({0, 0}, {0, 0, 20, 20});
        // MainCamera.target = {0, 0};
        // MainCamera.offset = {WINDOW_WIDTH / 2.0f, WINDOW_HEIGHT / 2.0f};
        // MainCamera.rotation = 0.0f;
        // MainCamera.zoom = 2.0f;
    }

    ~Game(){
        // if(player != nullptr){
        //     delete player;
        //     player = nullptr;
        // }

        

        CloseWindow();
    }
    
    void Update(){
        // if(player != nullptr){
        //     player->Update();
        // }
    }

    void Draw(){
        BeginDrawing();
        ClearBackground(BG_COLOR);


        // if(player != nullptr){
        //     player->Draw();
        // }

        for(auto& node : GameTree){
            node->Draw();
        }
        
        
        EndDrawing();
    }

    void Run(){
        while(!WindowShouldClose()){
            Update();
            
            Draw();
        }
    }
};



int main(){
    Game game;

    game.Run();

    return 0;
}