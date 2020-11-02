#include <iostream>
using namespace std;

int main() {
    bool p, q;

    cout << "p  q  !p  !q  p&&q  p||q" << endl;
    cout << "                        " << endl;
    cout << (p = false) << "  " << (q = false) << "   " << (!p) << "   " << (!q) << "    " << (p&&q) << "     " << (p||q) << endl;
    cout << (p = false) << "  " << (q = true)  << "   " << (!p) << "   " << (!q) << "    " << (p&&q) << "     " << (p||q) << endl;
    cout << (p = true)  << "  " << (q = false) << "   " << (!p) << "   " << (!q) << "    " << (p&&q) << "     " << (p||q) << endl;
    cout << (p = true)  << "  " << (q = true)  << "   " << (!p) << "   " << (!q) << "    " << (p&&q) << "     " << (p||q) << endl;

}
