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
	
	grid.setCell(CellMachine::CellType::PUSH, CellMachine::Direction::RIGHT, 0, 0);
	grid.setCell(CellMachine::CellType::PUSH, CellMachine::Direction::RIGHT, 1, 0);

	grid.getCell(0, 0)->push(CellMachine::Direction::RIGHT, 1);

	printf("checking at 0, 0\n");
	if (grid.getCell(0, 0) == nullptr) {
		printf("correct at 0, 0\n");
	}
	printf("checking at 1, 0\n");
	if (grid.getCell(1, 0)->cellType == CellMachine::CellType::PUSH) {
		printf("correct at 1, 0\n");
	}
	printf("checking at 2, 0\n");
	if (grid.getCell(2, 0)->cellType == CellMachine::CellType::PUSH) {
		printf("correct at 2, 0\n");
	}
	printf("checking at 3, 0\n");
	if (grid.getCell(3, 0) == nullptr) {
		printf("correct at 3, 0\n");
	}

	system("pause");

	return 0;
}