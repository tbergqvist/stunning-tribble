#include "ui_screen.h"
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/Shape.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/System/Vector2.hpp>
#include <SFML/Window/Event.hpp>

namespace tim {

UiScreen::UiScreen(int width, int height) {}

void UiScreen::handleEvent(const sf::Event& event) {}

void UiScreen::render(sf::RenderWindow& window, const State& state) {
  for (const auto& button : _buttons) {
  }
}

void UiScreen::addButton(const std::string& text, int x, int y, std::function<void()> onClick) {
  sf::RectangleShape rect(sf::Vector2f(x, y));
  rect.setFillColor(sf::Color::Green);
  sf::Font font;
  sf::Text buttonText(font, text, 24);
  
  _buttons.push_back({text, x, y, onClick});
}

}