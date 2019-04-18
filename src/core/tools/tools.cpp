#include "tools.h"
#include <iostream>
#include "../engine.h"
#include <iterator>

namespace engineY
{
    void createObject(std::string name)
    {
        if(findObject(name) == 0)
        {
            GameObject* newObject = new GameObject(name);
            std::cout << newObject << std::endl;
            Engine::instance()->dataStorage->gameObjects.insert({name, newObject});
            auto iterator = Engine::instance()->dataStorage->gameObjects.find(name);
            std::cout << iterator->first << " " << iterator->second << std::endl;
        }
        else
        {
            std::cout<< "Object with same name exists" << std::endl;
        }
    }


    void deleteObject(std::string name)
    {
        if(findObject(name) != 0)
            Engine::instance()->dataStorage->gameObjects.erase(name);
    }

    void deleteObject(GameObject* object)
    {
            Engine::instance()->dataStorage->gameObjects.erase(object->name);
    }

    GameObject* findObject(std::string name)
    {

        return Engine::instance()->dataStorage->gameObjects[name];

    }
}

