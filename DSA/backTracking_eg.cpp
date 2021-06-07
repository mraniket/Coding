//Rat in maze example
//where the rat can go or where can not
#include <iostream>
using namespace std;

bool isSafe(int **arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}

bool ratinMaze(int **arr, int x, int y, int n, int **solutioArr)
{
    if ((x == (n - 1)) && (y == (n - 1)))
    {
        solutioArr[x][y] == 1;
        return true;
    }
    if (isSafe(arr, x, y, n))
    {
        solutioArr[x][y] = 1;
        if (ratinMaze(arr, x + 1, y, n, solutioArr))
        {
            return true;
        }
        if (ratinMaze(arr, x, y + 1, n, solutioArr))
        {
            return true;
        }
        solutioArr[x][y] = 0; //backtracking
        return false;
    }
    return false;
}

int main()
{
    int n;
    ;
    cin >> n;

    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;

    int **solutionArr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        solutionArr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            solutionArr[i][j] = 0;
        }
    }

    if (ratinMaze(arr, 0, 0, n, solutionArr))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << solutionArr[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}