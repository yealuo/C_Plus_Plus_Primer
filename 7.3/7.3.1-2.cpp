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

   private:
    string contents;
    length position = 0;
    length height = 0, width = 0;
    void doDisplay(ostream& os) const { os << contents; }
};

int main() {
    Screen myScreen(5,5,'X');
    myScreen.move(4,0).set('#').display(cout);
    cout<<"\n";
    myScreen.display(cout);
    cout<<"\n";
    return 0;
}