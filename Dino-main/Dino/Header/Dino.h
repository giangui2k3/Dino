#ifndef __DINO__
#define __DINO__

#include "CommonFunction.h"
#include "FPS.h"
#include "SDL_InitWindow.h"

const int JUMP = 1;
const int FAIL = 2;
const int RUN = 0;

class Dino {
protected:
    const int DINO_FPS = 15;
    const int DINO_SPRITES = 6;
    const int SCORE_PER_SECOND = 1;

    int idFrame = 0;
    class FPS dinoFPS;
    double vJump = 0;
    SDL_Texture* object;
    SDL_Rect gRect, hRect;
    SDL_Rect frameClip[RUNNING_FRAMES];

private:
    int score = 0;
public:
    Dino();
    ~Dino() {};
    bool onGround();
    bool inputAction(SDL_Event& e, Mix_Chunk* gJumpMusic);
    void move();

    bool loadImage(SDL_Renderer* renderer);

    void render(SDL_Renderer* renderer, bool run);
    int getPosX() {
        return hRect.x;
    }
    int getPosY() {
        return hRect.y;
    }
    int getRectWidth() {
        return hRect.w;
    }
    int getRectHeight() {
        return hRect.h;
    }
    void cleanUp();
};

#endif /* __DINO__ */
