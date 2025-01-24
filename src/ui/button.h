
#include <functional>
#include <string>

struct Button {
  std::string text;
  int x;
  int y;
  std::function<void()> onClick;
};