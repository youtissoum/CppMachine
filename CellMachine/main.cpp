#include <iostream>

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

#include "Grid.h"

int main() {
	/*sf::RenderWindow window(sf::VideoMode(640, 480), "C++ Machine", sf::Style::Titlebar | sf::Style::Close);
	sf::Event ev;
	
	while (window.isOpen()) {
		while (window.pollEvent(ev)) {
			switch (ev.type) {
			case sf::Event::Closed:
				window.close();
				break;
			case sf::Event::KeyPressed:
				if (ev.key.code == sf::Keyboard::Escape) window.close();
				break;
			}
		}


		window.clear(sf::Color());
		window.display();
	}*/

	CellMachine::Grid grid(10, 10);

	if (grid.getCell(1, 1) == nullptr) {
		std::cout << "test" << std::endl;
	}

	system("pause");

	return 0;
}