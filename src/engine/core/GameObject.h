#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include "../../common/common_headers.h"

#include "../render/Texture.h"
#include "../render/SpriteRenderer.h"

class GameObject {
    public:
        // object state
        glm::vec2   Position, Size, Velocity;
        glm::vec3   Color;
        float       Rotation;
        bool        IsSolid;
        bool        Destroyed;
        // render state
        Texture2D   Sprite;	
        // constructor(s)
        GameObject();
        GameObject(glm::vec2 pos, glm::vec2 size, Texture2D sprite, glm::vec3 color = glm::vec3(1.0f), glm::vec2 velocity = glm::vec2(0.0f, 0.0f));

        void changeSprite(Texture2D newSprite);
        // draw sprite
        virtual void Draw(SpriteRenderer &renderer);
};

#endif