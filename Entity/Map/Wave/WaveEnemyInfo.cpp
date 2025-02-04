#include "WaveEnemyInfo.h"

BEGIN_ENTITY_NAMESPACE

WaveEnemyInfo::WaveEnemyInfo() :
    _amount( 0 ),
    _health( 0 ),
    _speed( 0 ),
    _sides( 0 ),
    _size( 0 ),
    _color( "" ) {
}

WaveEnemyInfo::~WaveEnemyInfo() {
}

int WaveEnemyInfo::getAmount() const {
    return _amount;
}

void WaveEnemyInfo::setAmount( const int amount ) {
    _amount = amount;
}

int WaveEnemyInfo::getHealth() const {
    return _health;
}

void WaveEnemyInfo::setHealth( const int health ) {
    _health = health;
}

int WaveEnemyInfo::getSpeed() const {
    return _speed;
}

void WaveEnemyInfo::setSpeed( const int speed ) {
    _speed = speed;
}

int WaveEnemyInfo::getSides() const {
    return _sides;
}

void WaveEnemyInfo::setSides( const int sides ) {
    _sides = sides;
}

int WaveEnemyInfo::getSize() const {
    return _size;
}

void WaveEnemyInfo::setSize( const int size ) {
    _size = size;
}

std::string WaveEnemyInfo::getColor() const {
    return _color;
}

void WaveEnemyInfo::setColor( const std::string& color ) {
    _color = color;
}

END_ENTITY_NAMESPACE