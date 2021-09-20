#include <iostream>
#include <string>
using namespace std;

class GetEspresso
{
private:
    string coffe = "Coffe brrrr!";
    /* data */

    string GG;

    string EspressoName;

    string EspressoName2;
public:
    GetEspresso(/* args */);

    ~GetEspresso();
	

void setCoffe(){

	EspressoName = "new name";
    
}
    void getCoffe(){
        cout << coffe<<" "<<EspressoName << endl;
    }
};

void DoSomething(){}

GetEspresso::GetEspresso(/* args */)
{
    
	GG = "default";




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