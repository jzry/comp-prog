// This file includes some of the most common competitive programming containers / headers.
// Containers are pre-built collections of objects in C++ that are clearly defined and ready to use.
// Containers are data structures with corresponding big-o complexities that allow you to quickly solve certain problems.
// I've included this in the root folder because it's useful to just copy and paste the headers to solve a problem quickly.

#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <deque>
#include <array>
#include <tuple>
// multimap
// multiset
// forward list

using namespace std;

int main(void)
{
    int nC;
    cout << "Enter the number of elements in the data structure: ";
    cin >> nC;

    priority_queue<int> pq;
    queue<int> q;
    stack<int> stack;
    list<int> l;
    vector<int> v;
    set<int> set;
    map<int, int> m;
    unordered_map<int, int> um;
    unordered_set<int> us;
    deque<int> dq;

    // Insert every element into the data structure.
    for (int i = 0; i < nC; i++)
    {
        int a;
        cin >> a;

        pq.push(a);
        q.push(a);
        stack.push(a);
        l.push_front(a);
        v.push_back(a);
        set.insert(a);
        m.insert (pair<int,int>(a,i));
        um.insert (pair<int,int>(a,i));
        us.insert(a);
        dq.push_back(a); // can do push_back and push_front() or pop_back() pop_front()
    }

    for (int i = 0; i < nC; i++)
    {
        if (i == 0)
        {
            cout << "priority_queue:" << endl;
        }
        cout << pq.top() << ' '; pq.pop();
        if (i == nC - 1)
        {
            cout << endl;
        }
    }

    for (int i = 0; i < nC; i++)
    {
        if (i == 0)
        {
            cout << "queue:" << endl;
        }
        cout << q.front() << ' '; q.pop();
        if (i == nC - 1)
        {
            cout << endl;
        }
    }

    for (int i = 0; i < nC; i++)
    {
        if (i == 0)
        {
            cout << "stack:" << endl;
        }
        cout << stack.top() << ' '; stack.pop();
        if (i == nC - 1)
        {
            cout << endl;
        }
    }

    for (int i = 0; i < nC; i++)
    {
        if (i == 0)
        {
            cout << "list:" << endl;
        }
        cout << l.front() << ' '; l.remove(l.front());
        if (i == nC - 1)
        {
            cout << endl;
        }
    }

    for (int i = 0; i < nC; i++)
    {
        if (i == 0)
        {
            cout << "vector:" << endl;
        }
        cout << v[i] << ' ';
        if (i == nC - 1)
        {
            cout << endl;
        }
    }

    for (auto itr = set.begin(); itr != set.end(); ++itr)
    {
        if (itr == set.begin())
        {
            cout << "set:" << endl;
        }
        cout << *itr << ' ';
    }

    cout << endl;

    for (auto itr = us.begin(); itr != us.end(); ++itr)
    {
        if (itr == us.begin())
        {
            cout << "unordered set:" << endl;
        }
        cout << *itr << ' ';
    }

    cout << endl;

    for (auto itr = m.begin(); itr != m.end(); ++itr)
    {
        if (itr == m.begin())
        {
            cout << "map:" << endl;
        }
        cout << itr->first << " " << itr->second << endl;
    }

    for (auto itr = um.begin(); itr != um.end(); ++itr)
    {
        if (itr == um.begin())
        {
            cout << "unordered map:" << endl;
        }
        cout << itr->first << " " << itr->second << endl;
    }

    for (auto itr = dq.begin(); itr != dq.end(); ++itr)
    {
        if (itr == dq.begin())
        {
            cout << "deque:" << endl;
        }
        cout << *itr << ' ';
    }

    cout << endl;

    return 0;
}
