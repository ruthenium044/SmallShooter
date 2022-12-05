﻿#pragma once
#include <vector>

#include "Engine.h"
#include "Entity.h"

class EntityManager {
public:
    std::vector<Entity> entities{};
    std::vector<int> healths{};
    std::vector<Vector2> positions{};
    std::vector<Vector2> velocities{};
    std::vector<SDL_Rect> sources{};

    Entity* createEntity();
    void setHealthComponent(Entity* e, int hp);
    void setPositionComponent(Entity* e, Vector2 pos);
    void setVelocityComponent(Entity* e, Vector2 vel);
    void setSourceComponent(Entity* e, SDL_Rect src);

    void setCollisionComponent(Entity* e);
    void setPlayerComponent(Entity* e);
    void setEnemyComponent(Entity* e);
    void setBulletComponent(Entity* e);
    
    void renderEntities(Engine& eng, float scale);
    void updatePositions(float dt);
    void collide();
    
    void updateInput(Vector2 vel);
    void updateShooting(float dt);
};