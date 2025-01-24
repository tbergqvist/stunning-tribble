#include "game.h"
#include <SFML/Graphics.hpp>

int main() {
    auto window = sf::RenderWindow(sf::VideoMode({1920u, 1080u}), "CMake SFML Project");
    window.setFramerateLimit(144);

    tim::Game game(1920, 1080);

    while (window.isOpen()) {
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            } else {
                game.handleEvent(event.value());
            }
        }
        game.update();
        game.render(window);
        window.display();
    }
}
