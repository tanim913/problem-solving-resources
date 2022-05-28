#include <bits/stdc++.h>
using namespace std;

void print_multiset(multiset<string> &s)
{
    for (auto val : s)
    {
        cout << val << endl;
    }
}
int main ()
{
    multiset <string> s;

    s.insert("abs");
    s.insert("abs");
    s.insert("abs");
    s.insert("abs");
    s.insert("abs");
    s.insert("abc");

    auto it  = s.find("abs");

    if(it != s.end())
    {
        s.erase(it);/// just deletes one specific multiple value

    }
    print_multiset(s);
    s.erase("abs");/// deletes all the values
    cout << endl;
    print_multiset(s);
}
