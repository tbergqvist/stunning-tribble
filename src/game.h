#pragma once

#include "state.h"
#include "ui/ui_screen.h"

namespace sf {
class RenderWindow;
class Event;
};

namespace tim {

class Game {
  public:
    Game(int width, int height);
    ~Game();

    Game(const Game&) =  delete;
    Game& operator=(const Game&) = delete;

    void handleEvent(const sf::Event& event);
    void update();
    void render(sf::RenderWindow& window);

  private:
    State _state;
    UiScreen _uiScreen;
};

}