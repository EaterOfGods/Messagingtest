
class Message;

class GameObject {

	public:
		GameObject();
		~GameObject();

		void handleMessage(const Message* msg);


};