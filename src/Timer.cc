#include<iostream>
#include<Timer.hh>

Timer::Timer(const char* fontUrl, std::string text, unsigned int fontSize, sf::Vector2f* position, sf::Color* fillColor, sf::RenderWindow*& window)
{
    font->loadFromFile(fontUrl);
    timerText->setFont(*font);
    timerText->setString(text + " 0");
    timerText->setCharacterSize(fontSize);
    timerText->setFillColor(*fillColor);
    this->text = text;
    this->window = window;

    timerText->setPosition(*position);
}

Timer::~Timer()
{

}

float Timer::GetTimer() const
{
    return timer;
}

void Timer::Update(float currenttime)
{
    timer += currenttime;
    timerText->setString(std::to_string(timer));
    window->draw(*timerText);
}