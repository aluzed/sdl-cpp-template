#include "Window.h"

Window::Window(const std::string &title, int width, int height) :
    _title(title), _width(width), _height(height)
{
    //ctor
    if(!init())
    {
        _closed = true;
    }
}

Window::~Window()
{
    //dtor
    SDL_DestroyWindow(_window);
    SDL_Quit();
}

bool Window::init()
{
    if(SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        std::cerr << "SDL init error \n";
        return 0;
    }

    _window = SDL_CreateWindow(_title.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, _width, _height, SDL_WINDOW_RESIZABLE);

    if(_window == nullptr)
    {
        std::cerr << "Failed to create window\n";
        return 0;
    }

    return true;
}

void Window::pollEvents()
{
    SDL_Event event;

    if(SDL_PollEvent(&event))
    {
        switch(event.type)
        {
            case SDL_QUIT: _closed = true; break;
        }
    }
}
