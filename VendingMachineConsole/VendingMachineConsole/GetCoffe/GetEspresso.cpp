#include <iostream>
#include <string>
using namespace std;

class GetEspresso
{
private:
    string coffe = "Coffe brrrr!";
    /* data */
    string GG;
public:
    GetEspresso(/* args */);
    ~GetEspresso();

    void getCoffe(){
        cout << coffe << endl;
    }
};

GetEspresso::GetEspresso(/* args */)
{
	GG = "default";
}

GetEspresso::~GetEspresso()
{
	
}
