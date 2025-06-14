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

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int min = INT_MAX;
    int min_minus = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            if (a[i] < min)
            {
                min = a[i];
            }
        }
        else if(a[i] < 0)
        {
            if(min_minus == 0)
            {
                min_minus = a[i];
            }
            if (a[i] > min_minus)
            {
                min_minus = a[i];
            }
        }

    }

    int pos_count = 0, pos_oper = 0;
    int neg_count = 0, neg_oper = 0;

    for(min; min > 0; min--)
    {
        pos_count++;
        pos_oper++;
    }
    for(min_minus; min_minus < 0; min_minus++)
    {
        neg_count++;
        neg_oper ++;
    }

    bool oper = true;

    if(pos_count == neg_count)
    {
        cout << pos_count << endl;
        oper = false;
        return 0;
    }
    else if(pos_count < neg_count)
    {
        if(pos_oper != 0)
        {
            cout << pos_count << endl;
            oper = false;
            return 0;
        }
    }
    else{
        if(neg_oper != 0)
        {
            cout << neg_count << endl;
            oper = false;
            return 0;
        }
    }

    if(oper == true)
    {
        cout << pos_count << endl;
    }


    return 0;
}