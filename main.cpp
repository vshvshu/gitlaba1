#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;
vector<string> f1()
{
    vector<string> array;
    ifstream in ("labagitt.txt");
    if (in.is_open()) {
        string s;
        while (getline(in, s)){
            array.push_back(s);
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
    vector <string> vector3 = f1();
    f2();
    f3();
    return 0;
}
