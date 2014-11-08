#include "Application.h"
#include "InputManager.h"
#include "GameObject.h"
#include "Message.h"

Application::Application(){

	m_window = NULL;
	m_inputManager = NULL;
	m_gameObject = NULL;

}

Application::~Application(){

	delete m_inputManager;
	m_inputManager = NULL;

	delete m_gameObject;
	m_gameObject = NULL;

	delete m_window;
	m_window = NULL;
}

bool Application::onInit(){

	m_window = new sf::RenderWindow(sf::VideoMode(200, 200), "Messaging system test");

	m_inputManager = new InputManager();

	m_gameObject = new GameObject();

	m_inputManager->registerObserver(m_gameObject);

	KeyMessage dwnmsg(MSG_KEY_DOWN, 12);
	MouseMessage mousemsg(MSG_MOUSE_MOVED, 25);

	m_inputManager->sendToObserver(&dwnmsg);
	m_inputManager->sendToObserver(&mousemsg);


	onUpdate();

	return true;
}

void Application::onUpdate(){

	while (m_window->isOpen())
	{
		sf::Event event;
		while (m_window->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				m_window->close();
		}

		onRender();
		
	}

}

void Application::onRender(){

	m_window->clear();
	m_window->display();

}