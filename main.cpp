#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;
f1()
{

}

void f2()
{
    vector <string> array;
    ifstream in("txt.txt");
    if (in.is_open())
    {
        string s;
        while(getline(in, s))
        {
            array.push_back(s);
        }
        for (const auto& str : array)
        {
            cout << str << endl;
        }
    }

}

void f3(vector <string> array)
{
ifstream in("labagitt.txt");
ofstream out;
out.open("out_git.txt");
if (out.is_open())
{
    for (int i = 0; i < array.size(); i++)
    {
        out << array[i] << " ";
    }
}
}

int main()
{
    f1();
    f2();
    f3(vector3);
}
