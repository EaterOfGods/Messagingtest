

enum messageType {
	MSG_UNKNOWN = 0,
	MSG_KEY_UP,
	MSG_KEY_DOWN,
	MSG_MOUSE_MOVED,
	MSG_COLLISION,
	MSG_OBJECT_DESTROYED,
};

class Message {

	public:
		messageType m_type;
		

};

class KeyMessage : public Message {

	public:
		KeyMessage(messageType type, unsigned int key);
		unsigned int m_key;

};

class MouseMessage : public Message {

	public:
		MouseMessage(messageType type, int pos);
		int m_pos;

};
