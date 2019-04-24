#include "scripts.h"
#include "../core/tools/tools.h"
#include "../core/tools/input.h"
#include "../core/engine.h"
#include "../core/object_components/renderer.h"
#include <iostream>


void TestScript::update()
{
    if (_2DEngine::Input::getKey(KeyCode::A))
    {
        std::cout << "Pressed Key: A" << std::endl;
        parentObject->coordinate.x -= 1;
        std::cout << _2DEngine::findObject("player")->getComponent<Renderer>()->sprite.getPosition().x << std::endl;
    }
    if (_2DEngine::Input::getKey(KeyCode::D))
    {
        std::cout << "Pressed Key: D" << std::endl;
        parentObject->coordinate.x += 1;
        std::cout << _2DEngine::findObject("player")->getComponent<Renderer>()->sprite.getPosition().x << std::endl;
    }
}

void TestScript::start()
 {
        parentObject->setPosition(600, 0);

 }
