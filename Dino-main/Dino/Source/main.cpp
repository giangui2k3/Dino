#include "../Header/CommonFunction.h"
#include "../Header/FPS.h"
#include "../Header/SDL_InitWindow.h"
#include "../Header/Object.h"
#include "../Header/Map.h"
#include "../Header/Dino.h"
#include "../Header/Enemy.h"
#include "../Header/DinoGame.h"

int main(int argc, char* argv[]) {
    srand((unsigned int)time(0));

    DinoGame* dinoGame = new DinoGame;
    dinoGame->menuGame();

    return 0;
}
