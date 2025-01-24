#pragma once

#include <functional>
#include <string>
#include <vector>
#include "./button.h"

namespace sf {
class RenderWindow;
class Event;
}

namespace tim {

class State;

class UiScreen {
  public:
    UiScreen(int width, int height);
    
    UiScreen(const UiScreen&) =  delete;
    UiScreen& operator=(const UiScreen&) = delete;

    void render(sf::RenderWindow& window, const State& state);
    void handleEvent(const sf::Event& event);

    void addButton(const std::string& text, int x, int y, std::function<void()> onClick);
  private:
    std::vector<Button> _buttons;
};

}