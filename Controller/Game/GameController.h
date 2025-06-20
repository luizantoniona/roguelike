#pragma once

#include <SFML/Graphics.hpp>

#include <Controller/ControllerGlobals.h>

#include <Controller/Game/GameState.h>
#include <Entities/Character/Character.h>
#include <Entities/Map/Map.h>

BEGIN_CONTROLLER_NAMESPACE

class GameController {
public:
    static void update( sf::RenderWindow& window, const sf::Time& deltaTime, Entities::Character& player, std::vector<std::unique_ptr<Entities::Character> >& enemies, Entities::Map& map, GameState& gameState );

private:
    static void updateGameState( Entities::Character& player, std::vector<std::unique_ptr<Entities::Character> >& enemies, Entities::Map& map, GameState& gameState );
};

END_CONTROLLER_NAMESPACE
