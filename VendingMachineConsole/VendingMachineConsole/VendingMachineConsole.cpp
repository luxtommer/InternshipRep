#include <iostream>
#include <string>
#include<vector>
#include <functional>
using namespace std;

class Drink
{
    string type;
    string size;
    string t;
    string adds;
};

string GetDefault()
{
    return "Default info";
}
string GetFromInternet()
{
    return "Internet info";
}

void ShowInfo(string(*foo)())
{
    cout << foo() << endl;
}
//////////////////////////////////////
void Func1(int a)
{
    if (a % 2 == 0)
    {
        cout << "Func1: " << a << endl;
    }
}
void Func2(int a)
{
    if (a >10 && a <20)
    {
        cout << "Func2: " << a << endl;
    }
}

void Deal(vector<int> &v, vector<function<void(int)>> &f)
{
    for (auto element : v)
    {
        for (auto function_complect : f)
        {
            function_complect(element);
        }
    }
}
//////////////////////////////////////

int main()
{
    cout << "Vending machine is ready to work!\n";

    ShowInfo(GetDefault);
    
    vector<int> vect = { 1,11,12,22,25,1,65,66 };
    vector<function<void(int)>> func_complect;

    func_complect.push_back(Func1);
    func_complect.push_back(Func2);

    Deal(vect, func_complect);
}

