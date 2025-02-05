#pragma once

#include <vector>

#include <SFML/Graphics.hpp>

#include <GUI/Button/Button.h>
#include <Manager/ScreenManager.h>
#include <Screen/Screen.h>
#include <Screen/ScreenGlobals.h>
#include <Screen/ScreenType.h>

using GUI::Button;
using Manager::ScreenManager;
using Screens::Screen;
using Screens::ScreenType;

BEGIN_SCREEN_NAMESPACE

class MainMenuScreen : public Screen {
public:
    MainMenuScreen( ScreenManager& screenManager );

    void handleInput( const sf::Event& event, sf::Time& deltaTime ) override;
    void update( sf::RenderWindow& window, sf::Time& deltaTime ) override;
    void render( sf::RenderWindow& window ) override;

private:
    void initMenu();
    bool isMouseOverOption( const sf::Text& option, const sf::Vector2f& mousePos );

    ScreenType _selectedOption;
    sf::Font _font;
    sf::Text _title;
    std::vector<Button> _buttons;
    ScreenManager& _screenManager;
};

END_SCREEN_NAMESPACE
