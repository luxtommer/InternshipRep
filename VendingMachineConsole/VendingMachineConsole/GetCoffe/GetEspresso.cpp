#include <iostream>
#include <string>
using namespace std;

class GetEspresso
{
private:
    string coffe = "Coffe brrrr!";
public:
    GetEspresso(/* args */);
    ~GetEspresso();

    void getCoffe(){
        cout << coffe << endl;
    }
};

GetEspresso::GetEspresso(/* args */)
{
}

GetEspresso::~GetEspresso()
{
}
