#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Screen {
   public:
    friend class Window_mgr;
    using length = string::size_type;
    Screen() = default;
    Screen(int wid, int hei)
        : width(wid), height(hei), contents(wid * hei, ' ') {}
    Screen(int wid, int hei, char c)
        : width(wid), height(hei), contents(wid * hei, c) {}

    char getchar() const { return contents[position]; }

    Screen& move(int row, int column) {
        position = row * width + column;
        return *this;
    }

    Screen& set(char c) {
        contents[position] = c;
        return *this;
    }

    Screen& display(ostream& os) {
        doDisplay(os);
        return *this;
    }
    const Screen& display(ostream& os) const {
        doDisplay(os);
        return *this;
    }

    length size() const { return height * width; }

   private:
    string contents;
    length position = 0;
    length height = 0, width = 0;
    void doDisplay(ostream& os) const { os << contents; }
};

class Window_mgr {
   public:
    using screenIndex = vector<Screen>::size_type;
    void clear(screenIndex);

   private:
    vector<Screen> screens = {Screen(24, 80, ' ')};
};

void Window_mgr::clear(screenIndex index) {
    Screen& screen = screens[index];
    screen.contents = string(screen.width * screen.height, ' ');
}

int main() {
    return 0;
}