#include <iostream>
#include "window.h"
#define WIN_WIDTH 640
#define WIN_HEIGHT 480


int main(int argc, char** argv)
{
    Window window("SDL Test", WIN_WIDTH, WIN_HEIGHT);

    while(!window.isClosed())
    {
        window.pollEvents();
    }

    return 0;
}
