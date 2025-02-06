#include "PlayerProjectileStatus.h"

BEGIN_ENTITY_NAMESPACE

PlayerProjectileStatus::PlayerProjectileStatus() :
    _projectileFireRate( 0.0f ),
    _projectileSpeed( 0.0f ),
    _projectileSize( 0.0f ),
    _projectileDamage( 0.0f ) {
}

void PlayerProjectileStatus::setProjectileFireRate( float projectileFireRate ) {
    _projectileFireRate = projectileFireRate;
}

float PlayerProjectileStatus::getProjectileFireRate() const {
    return _projectileFireRate;
}

void PlayerProjectileStatus::setProjectileSpeed( float projectileSpeed ) {
    _projectileSpeed = projectileSpeed;
}

float PlayerProjectileStatus::getProjectileSpeed() const {
    return _projectileSpeed;
}

void PlayerProjectileStatus::setProjectileSize( float projectileSize ) {
    _projectileSize = projectileSize;
}

float PlayerProjectileStatus::getProjectileSize() const {
    return _projectileSize;
}

void PlayerProjectileStatus::setProjectileDamage( float projectileDamage ) {
    _projectileDamage = projectileDamage;
}

float PlayerProjectileStatus::getProjectileDamage() const {
    return _projectileDamage;
}

END_ENTITY_NAMESPACE