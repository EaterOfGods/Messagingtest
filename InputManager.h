#include <vector>

class GameObject;
class Message;

class InputManager {

	public:
		InputManager();
		~InputManager();

		void registerObserver(GameObject* object);
		void sendToObserver(Message* msg);
		void unregisterObserver(GameObject* object);
	
	private:
		std::vector<GameObject*>	m_Observers;

};