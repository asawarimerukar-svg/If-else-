```cpp
#include <iostream>
using namespace std;

int main()
{
    int distance;

    cout << "Enter distance in cm: ";
    cin >> distance;

    if (distance <= 20)
    {
        cout << "Obstacle detected!";
    }
    else
    {
        cout << "Path is clear.";
    }

    return 0;
}
```
