#include <bits/stdc++.h>
using namespace std;
int main ()
{
    stack <int> s;
    s.push (2);
    s.push (3);
    s.push (4);
    s.push (5);
    s.push (6);
    while (!s.empty())
    {
        cout <<s.top()<< endl;
        s.pop();
    }
    cout << endl;
    queue <string> q;
    q.push("abs");
    q.push("fgs");
    q.push("yus");
    q.push("kdm");
    q.push("mon");

    while (!q.empty())
    {
        cout <<q.front()<< endl;
        q.pop();
    }
    return 0;
}
