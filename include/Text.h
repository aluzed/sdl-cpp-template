#pragma once
#ifndef TEXT_H
#define TEXT_H
#include <SDL2/SDL_ttf.h>
#include <iostream>

class Text
{
    public:
        Text(SDL_Renderer *renderer, const std::string &font_path, int font_size, const std::string &message_text, const SDL_Color &color);
        virtual ~Text();
        void display(int x, int y, SDL_Renderer *renderer) const;
        static SDL_Texture *loadFont(SDL_Renderer *renderer, const std::string &font_path, int font_size, const std::string &message_text, const SDL_Color &color);

    protected:

    private:
        SDL_Texture *_text_texture = nullptr;
        mutable SDL_Rect _text_rect;
};

#endif // TEXT_H
