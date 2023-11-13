#include <iostream>
#include <string>
using namespace std;

class Screen {
   public:
    using length = string::size_type;
    Screen() = default;
    Screen(int wid, int hei)
        : width(wid), height(hei), contents(wid * hei, ' ') {}
    Screen(int wid, int hei, char c)
        : width(wid), height(hei), contents(wid * hei, c) {}
    char getchar() const { return contents[position]; }

   private:
    string contents;
    length position = 0;
    length height = 0, width = 0;
};

int main() {
    return 0;
}