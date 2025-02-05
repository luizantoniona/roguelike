#pragma once

#include <memory>

#include <Factory/FactoryGlobals.h>

#include <Entity/Map/Map.h>
#include <Entity/Player/Player.h>

using Entity::Map;
using Entity::Player;

BEGIN_FACTORY_NAMESPACE

class PlayerFactory {
public:
    static std::unique_ptr<Player> createPlayer( const Map& map );
};

END_FACTORY_NAMESPACE