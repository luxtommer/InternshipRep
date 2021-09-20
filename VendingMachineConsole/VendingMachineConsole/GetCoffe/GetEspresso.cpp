#include <iostream>
#include <string>
using namespace std;

class GetEspresso
{
private:
    string coffe = "Coffe brrrr!";
    /* data */

    

    string EspressoName;

    string EspressoName2;
public:
    GetEspresso(/* args */);

    ~GetEspresso();


    void getCoffe(){
        cout << coffe<<" "<<EspressoName << endl;
    }
};

void DoSomething(){}

GetEspresso::GetEspresso(/* args */)
{
    
	




}

GetEspresso::~GetEspresso()
{
	EspressoName = " ";
}

int main(/* argc, argv */){

    GetEspresso g;
    
    g.getCoffe();

    return 0;
}