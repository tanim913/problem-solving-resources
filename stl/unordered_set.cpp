#include <bits/stdc++.h>
using namespace std;


void print_unordered_set(unordered_set<string> &s)
{
    for (auto val : s)
    {
        cout << val << endl;
    }
}

int main ()
{
    unordered_set <string> s1;
    s1.insert("tanim"); ///o(1)
    s1.insert("aziz");
    s1.insert("haha");
    s1.insert("haha");

    print_unordered_set(s1);

    auto it1  = s1.find("tanim");

    if(it1 != s1.end())
    {
        cout << "found in the set" << endl;
        cout << *it1 << endl;
    }
}
