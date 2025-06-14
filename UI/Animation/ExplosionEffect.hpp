#ifndef EXPLOSIONEFFECT_HPP
#define EXPLOSIONEFFECT_HPP
#include <allegro5/bitmap.h>
#include <memory>
#include <vector>

#include "Engine/Sprite.hpp"

class TestScene;

class ExplosionEffect : public Engine::Sprite {
protected:
    TestScene *getTestScene();
    float timeTicks;
    std::vector<std::shared_ptr<ALLEGRO_BITMAP>> bmps;
    float timeSpan = 0.5;

public:
    ExplosionEffect(float x, float y);
    void Update(float deltaTime) override;
};
#endif   // EXPLOSIONEFFECT_HPP
