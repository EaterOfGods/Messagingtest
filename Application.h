#include <SFML/Graphics.hpp>

class InputManager;
class GameObject;

class Application {

	public:
		Application();
		~Application();

		bool onInit();
		void onUpdate();
		void onRender();

	private:
		sf::RenderWindow*		m_window;
		
		InputManager*			m_inputManager;
		GameObject*				m_gameObject;

};