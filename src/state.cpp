#include "state.h"

namespace tim {

  State::State(int startMoney) : _money(startMoney) {}

  void State::buyTribble() {
    _money -= 10;
    _tribbles++;
  }

  int State::getMoney() const { return _money; }
  int State::getTribbles() const { return _tribbles; }
}