#include <iostream>

using namespace std;


int main()
{
    int a = 1;
    int x,y;
    cin >> x >> y;
    int g[27][2] = {{1,2},{1,5},{1,8},{2,3},{2,5},{2,7},{3,4},{3,5},{3,6},
        {4,1},{4,2},{4,3},{4,4},{4,6},{4,7},{4,8},{5,4},{5,5},
        {5,6},{6,3},{6,5},{6,7},{7,2},{7,5},{7,8},{8,1},{8,5}
    };

    while(a == 1)
    {
        for(int i = 1; i <= 27; i++)
        {
            if(g[i][0] == x && g[i][1] == y)
            {
                cout << "lose" <<endl;
            }
            a = 0;
        }
    }

    return 0;
}