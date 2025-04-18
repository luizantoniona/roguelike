#include "StarBackground.h"

BEGIN_ENTITY_NAMESPACE

StarBackground::StarBackground() {
}

StarBackground::~StarBackground() {
}

void StarBackground::update( sf::Time& deltaTime ) {
    updateStars( deltaTime );
}

void StarBackground::render( sf::RenderWindow& window ) {
}

void StarBackground::setWidht( const int width ) {
    _width = width;
}

void StarBackground::setHeight( const int height ) {
    _height = height;
}

void StarBackground::initializeStars() {
    for ( int i = 0; i < 50; ++i ) {
        sf::CircleShape star( 2.0f );
        star.setFillColor( sf::Color::Yellow );
        star.setPosition( std::rand() % _width, std::rand() % _height );
        _stars.push_back( star );
    }
}

void StarBackground::updateStars( sf::Time& deltaTime ) {
    for ( auto& star : _stars ) {
        sf::Vector2f offset( ( std::rand() % 3 - 1 ) * 10 * deltaTime.asSeconds(),
                             ( std::rand() % 3 - 1 ) * 10 * deltaTime.asSeconds() );
        sf::Vector2f newPosition = star.getPosition() + offset;

        if ( newPosition.x < 0 ) {
            newPosition.x = 0;
        }
        if ( newPosition.y < 0 ) {
            newPosition.y = 0;
        }
        if ( newPosition.x > _width ) {
            newPosition.x = _width;
        }
        if ( newPosition.y > _height ) {
            newPosition.y = _height;
        }

        star.setPosition( newPosition );
    }
}

END_ENTITY_NAMESPACE