#include "Player.h"

Player::Player(const Window &window) : Window(window)
{

}

Player::~Player()
{
    //dtor
}

void Player::draw() const
{
    SDL_Rect rect;

    rect.w = _w;
    rect.h = _h;
    rect.x = _x;
    rect.y = _y;

    SDL_SetRenderDrawColor(_renderer, 200, 0, 200, 255);
    SDL_RenderFillRect(_renderer, &rect);
}


void Player::pollEvents()
{
    SDL_Event event;

    if(SDL_PollEvent(&event))
    {
        if(event.type == SDL_KEYDOWN)
        {
            switch(event.key.keysym.sym)
            {
                case SDLK_UP:
                    std::cout << "key up pressed\n";
                    _y -= 5;
                    break;
                case SDLK_DOWN:
                    std::cout << "key down pressed\n";
                    _y += 5;
                    break;
                case SDLK_LEFT:
                    _x -= 5;
                    std::cout << "key left pressed\n";
                    break;
                case SDLK_RIGHT:
                    _x += 5;
                    std::cout << "key right pressed\n";
                    break;
            }
        }
    }
}
