#include <iostream>
using namespace std;

class baseClass final {
public:
    virtual void perkenalan() {
        cout << "Hallo saya Function dari base class";
    }
};
class baseClass2 {
public:
    void perkenalan1() {
        cout << "Halo saya Function dari derived Class";
    }
};

