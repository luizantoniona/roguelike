#pragma once

#include <SFML/Graphics.hpp>

#include <Controller/ControllerGlobals.h>

#include <Entity/Character/Character.h>

BEGIN_CONTROLLER_NAMESPACE

class InputController {
public:
    void handleInput( const sf::Event& event, Entities::Character& player );
};

END_CONTROLLER_NAMESPACE