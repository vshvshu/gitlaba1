#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;
f1()vector
{
    vector<string> array;
    ifstream in ("labagitt.txt");
    if (in.is_open()) {
        string s;
        while (getline(in,s)){
            array.push_back(s);
        }
        }
    return array;
    }
}






void f2()
{

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
