#include <iostream>
using namespace std;

int main()
{
    int item, k, len, j;
    int scores[10] = {52, 78, 75, 68, 88, 63, 75, 90, 78, 0};
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << "number " << i << ": " << endl;
    //     cin >> scores[i];
    // }
    item = 10;
    k = 3, len = 9;
    for (int j = 0; j < 10; j++)
    {
        scores[j + 1] = scores[j];
        scores[j] = scores[j - 1];
    }
}