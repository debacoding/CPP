/*  For each pair of i and j values print a single integer that denotes the element located at index j of the array referenced by a[i]. 
There should be a total of q lines of output. */


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, queries;
    cin >> n >> queries;

    vector<vector<int>> arr(n);

    for (int i = 0; i < n; i++)
    {
        int length;
        cin >> length;
        arr[i].resize(length);
        for(int j = 0; j < length; j++)
        {
            cin >> arr[i][j];
        }       
    }

    for (int k = 0; k < queries; k++)
    {
        int i, j;
        cin >> i >> j;
        cout << arr[i][j]<<endl;
    }    
     
    return 0;
}

/*
Sample Input

2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3
Sample Output

5
9

*/