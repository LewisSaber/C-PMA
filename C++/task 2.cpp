
#include <iostream>
using namespace std;

int main()
{
    float x, y;
    cin >> x;
    cin >> y;
    if (x > y)
    {
        cout << 2 * x * y << "  " << (x + y) / 2;
    }
    else cout << (x + y) / 2 << "  " << 2 * x * y;
    return 0;
}

