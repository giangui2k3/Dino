#ifndef __DINOGAME__
#define __DINOGAME__

#include "../Header/CommonFunction.h"
#include "../Header/FPS.h"
#include "../Header/SDL_InitWindow.h"
#include "../Header/Object.h"
#include "../Header/Map.h"
#include "../Header/Dino.h"
#include "../Header/Enemy.h"

class DinoGame {
public:
	enum typeDisplay {
		MENU = 0,
		PLAY = 1,
		HELP = 2,
		EXIT = 3,
		BACK = 4,
		RE_MENU = 5,
	};

	enum typeButton {
		PAUSE = 0,
		CONTINUE = 1,
	};
	void menuGame();
	void displayGame();
	void displayHelpGame();
private:
	int display = typeDisplay::MENU;
	bool sound = true;
};
#endif // !__DINOGAME__


