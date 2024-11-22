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
    }

}

void f3()
{

}

int main()
{
    f1();
    f2();
    f3();
}
