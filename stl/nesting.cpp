#include <bits/stdc++.h>
using namespace std;
int main  ()
{
    map <pair<string,string>, vector <int>> m;

    int t;
    cin >> t;
    while (t--)
    {
        string f_name, l_name;
        int marks_count;
        //cout << "Enter first name, last name and marks count :" << endl;
        cin >> f_name >> l_name >> marks_count;
        for (int i =0; i< marks_count; i++)
        {
            int marks;
            //cout << "Enter marks : ";
            cin >> marks;
            m[{f_name,l_name}].push_back(marks);
        }
    }

    for (auto &pr : m)
    {
        auto &full_name = pr.first;
        auto &list_of_marks = pr.second;
        cout << "First Name is : " << full_name.first << " Last Name is : " << full_name.second << endl;
        cout << "The list size : "<< list_of_marks.size () << endl;
        for (auto &element : list_of_marks)
        {
            cout << element << endl;
        }
    }
    return 0;

}
