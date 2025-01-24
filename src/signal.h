#pragma once

#include <functional>
#include <vector>

namespace tim {

template <typename T>
class Signal {
  public:
    Signal(T initialValue) : _value(initialValue) {};

    void update(T newValue) {
      _value = newValue;

      for (auto subscriber : _subscribers) {
        subscriber(_value);
      }
    }

    void subscribe(std::function<void(T)> subscriber) {
      _subscribers.push_back(subscriber);
    }

    Signal(const Signal&) =  delete;
    Signal& operator=(const Signal&) = delete;

  private:
    T _value;
    std::vector<std::function<void(T)>> _subscribers;
};

}