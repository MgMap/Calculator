//
// Created by minau on 2/14/2023.
//

#include "Font.h"

sf::Font Font::font;
void Font::loadFont()
{
    font.loadFromFile("RedactedScript-Regular.ttf");
}

sf::Font &Font::getFont()
{
    loadFont();
    return font;
}
