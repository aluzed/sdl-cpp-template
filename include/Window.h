#ifndef WINDOW_H
#define WINDOW_H
#include <string>
#include <iostream>
#include <SDL2/SDL.h>

class Window
{
    public:
        Window(const std::string &title, int width, int height);
        virtual ~Window();

        void pollEvents();

        inline bool isClosed() const { return _closed; }

    protected:

    private:
        bool init();

        std::string _title;
        int _width = 640;
        int _height = 480;

        bool _closed = false;

        SDL_Window* _window = nullptr;

        SDL_Renderer* _renderer = nullptr;

};

#endif // WINDOW_H
