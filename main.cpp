#include <iostream>
#include <string>
using namespace std;

class MyString {
public:
    string sub;
    string verb;
    string obj;
};

int main() {
    MyString str;
    str.sub = "I";
    str.verb = "like";
    str.obj = "apple";

    cout << " <" << str.sub << "> "
         << " [" << str.verb << "] "
         << " (" << str.obj << ") " << endl;

    return 0;
}
