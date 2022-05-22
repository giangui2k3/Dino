#ifndef __MOUSE__
#define __MOUSE__

#include "../Header/Object.h"
#include "../Header/Button.h"

using namespace std;

class Mouse : public BaseObject {
private:
	int mouseX;
	int mouseY;
	void setPosition(int mouseX, int mouseY);
public:
	Mouse() {}
	void mouseHandleEvent();
	bool checkMouseInButton(Button* button);
};

#endif
