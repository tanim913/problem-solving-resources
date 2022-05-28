#include <bits/stdc++.h>
using namespace std;

void print_set(set<string> &s)
{
    for (auto val : s)
    {
        cout << val << endl;
    }
}

int main ()
{
    set <string> s;
    s.insert("tanim"); ///o(logn)
    s.insert("aziz");
    s.insert("haha");

    print_set(s);

    auto it  = s.find("tanim");

    if(it != s.end())
    {
        cout << "found in the set" << endl;
        cout << *it << endl;
    }
}
