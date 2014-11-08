#include "GameObject.h"
#include "Message.h"

#include <iostream>

GameObject::GameObject()
{}

GameObject::~GameObject()
{}

void GameObject::handleMessage(const Message* msg)
{
	std::cout << "Handling message recieved.\n";
	
	switch (msg->m_type)
	{
		case MSG_KEY_DOWN:
		{
			const KeyMessage* key_msg = static_cast<const KeyMessage*>(msg);
			std::cout << "Message type: " << key_msg->m_type << std::endl;
			std::cout << "Message key: " << key_msg->m_key << std::endl;
			break;
		}
		case MSG_KEY_UP:
		{
			const KeyMessage* key_msg = static_cast<const KeyMessage*>(msg);
			std::cout << "Message type: " << key_msg->m_type << std::endl;
			std::cout << "Message key: " << key_msg->m_key << std::endl;
			break;
		}
	
	}

}
