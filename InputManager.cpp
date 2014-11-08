#include "InputManager.h"
#include "Message.h"
#include "GameObject.h"

#include <iostream>

InputManager::InputManager()
{}

InputManager::~InputManager()
{}

void InputManager::registerObserver(GameObject* object)
{
	m_Observers.push_back(object);
}

void InputManager::sendToObserver(Message* msg)
{
	for (size_t i = 0; i < m_Observers.size(); i++)
	{
		std::cout << "Sending msg to [" << i << "]." << std::endl;
		m_Observers[i]->handleMessage(msg);
	}
}

void InputManager::unregisterObserver()
{

}