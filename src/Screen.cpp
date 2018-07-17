#include <SFML/Graphics.hpp>
#include "Screen.h"

using namespace sf;

const int W = 1600;
const int H = 900;

void initGrid()
{
	Texture texture;
	texture.loadFromFile("background.jpg");
	Sprite sBackground(texture);
	RenderTexture screen;
	screen.create(W, H);
	screen.setSmooth(true);
	screen.clear();
	screen.draw(sBackground);

}

void mainMenu()
{
}

void playScreen()
{
}

void mapScreen()
{
}

void aboutScreen()
{
}

void resultScreen()
{
}

void selectMenu()
{
}

void gameOverScreen()
{
}
