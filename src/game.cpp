#include "game.h"
#include "ui/ui_screen.h"
#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>

namespace tim {

Game::Game(int width, int height) : 
  _state(10), 
  _uiScreen(width, height) {
  _uiScreen.addButton("Buy Tribble", 0, 0, [this]() {
    _state.buyTribble();
  });
  //_uiScreen.addText("Money", 0, 50, );
}

void Game::handleEvent(const sf::Event& event) {
  _uiScreen.handleEvent(event);
}

Game::~Game() = default;

void Game::update() {
  
}

void Game::render(sf::RenderWindow& window) {
  window.clear(sf::Color::Black);
  _uiScreen.render(window, _state);
  
}

}