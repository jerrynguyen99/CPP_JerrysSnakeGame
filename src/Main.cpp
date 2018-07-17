#include <SFML/Graphics.hpp>
#include <time.h>

#include "Screen.h"

using namespace sf;

const int W=1600;
const int H=900;


int main()
{
	RenderWindow window(VideoMode(W, H), "Jerry's Snake Game!");
	window.setFramerateLimit(60);
	initGrid;
	

	bool Game=1;

    while (window.isOpen())
    {
        Event e;
        while (window.pollEvent(e))
        {
            if (e.type == Event::Closed)
                window.close();
		}

	   ////// draw  ///////
		window.clear();
 		window.display();
	}

    return 0;
}
