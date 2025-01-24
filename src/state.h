#pragma once

namespace tim {

class State {
  public:
    State(int startMoney);

    State(const State&) =  delete;
    State& operator=(const State&) = delete;

    void buyTribble();

    int getMoney() const;
    int getTribbles() const;

  private:
    int _money;
    int _tribbles;
};

}