//
// Created by minau on 2/22/2023.
//
#ifndef SFML_PROJECT_MOUSEEVENTS_CPP
#define SFML_PROJECT_MOUSEEVENTS_CPP

#include "MouseEvents.h"

template<class T>
bool MouseEvents::isHover( T Obj, const sf::RenderWindow &window) {
    sf::Vector2f mpos = (sf::Vector2f) sf::Mouse::getPosition(window);
    return Obj.getGlobalBounds().contains(mpos);
}

template<class T>
bool MouseEvents::isClicked(T Obj, const sf::RenderWindow &window) {
    return isHover(Obj, window) && sf::Mouse::isButtonPressed(sf::Mouse::Left);
}

template<class T>
bool MouseEvents::isNotClicked(const T &Obj, const sf::RenderWindow &window) {
    return !isHover(Obj, window) && sf::Mouse::isButtonPressed(sf::Mouse::Left);
}

#endif