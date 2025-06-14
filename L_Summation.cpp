#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;


long long int sum(long long int a[], int n, int i)
{
    // int res = 0;
    if(i == n)
    {
        return 0;
    }

    long long int result = sum(a, n, i+1);
    result = result+a[i];
    // cout << result << " ";
    return result;

}


int main()
{
    int n;
    cin >> n;
    long long int a[n];

    for(int i = 0; i < n; i++)
    {
        cin >>a[i];
    }

    long long int result = sum(a, n, 0);

    cout << result;
    

    return 0;
}