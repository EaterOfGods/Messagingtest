#include "Message.h"

KeyMessage::KeyMessage(messageType type, unsigned int key) 
{
	m_type = type;
	m_key = key;
}

MouseMessage::MouseMessage(messageType type, int pos)
{

	m_type = type;
	m_pos = pos;

}
