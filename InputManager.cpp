#include "InputManager.h"
#include "Message.h"
#include "GameObject.h"

#include <iostream>
#include <algorithm> 

InputManager::InputManager()
{}

InputManager::~InputManager()
{}

void InputManager::registerObserver(GameObject* object)
{

	std::cout << "Trying to register an observer.\n";

	if (object != NULL)
		m_Observers.push_back(object);

	std::cout << "New m_Observers size: " << m_Observers.size() << "\n";
}

void InputManager::sendToObserver(Message* msg)
{
	if (!m_Observers.empty() && msg != NULL)
	{
		for (size_t i = 0; i < m_Observers.size(); i++)
		{
			std::cout << "Sending msg to [" << i << "]." << std::endl;
			m_Observers[i]->handleMessage(msg);
		}
	}

}

void InputManager::unregisterObserver(GameObject* object)
{

	std::cout << "Trying to unregister an observer.\n";

	if (object != NULL)
	{
		m_Observers.erase(std::remove(m_Observers.begin(), m_Observers.end(), object), m_Observers.end());
	}

	std::cout << "New m_Observers size: " << m_Observers.size() << "\n";
}