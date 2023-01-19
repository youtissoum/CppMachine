#include <iostream>
#include <chrono>
#include <thread>

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

#include "Grid.h"

using namespace std::this_thread;     // sleep_for, sleep_until
using namespace std::chrono_literals; // ns, us, ms, s, h, etc.
using std::chrono::system_clock;

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
	
	

	if (grid.getCell(0, 0) == nullptr) {
		std::cout << "was nullptr" << std::endl;
	} else if (grid.getCell(0, 0)->cellType == CellMachine::CellType::PUSH) {
		std::cout << "test" << std::endl;
	}
	else {
		std::cout << "no test was succesful" << std::endl;
	}

	system("pause");

	return 0;
}