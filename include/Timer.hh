#pragma once
#include<SFML/Graphics.hpp>

class Timer
{
    private:
        sf::Font* font{new sf::Font()};
        sf::Text* timerText{new sf::Text()};
        sf::RenderWindow* window;
        float timer{};
        std::string text;
    public:
    Timer(const char*, std::string, unsigned int, sf::Vector2f*, sf::Color*, sf::RenderWindow*&);
        ~Timer();
    float GetTimer() const;
};