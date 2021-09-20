#include <iostream>
#include <string>
using namespace std;

class GetEspresso
{
private:
    string coffe = "Coffe brrrr!";
    /* data */
	string EspressoName;
public:
    GetEspresso(/* args */);
    ~GetEspresso();

    void getCoffe(){
        cout << coffe<<" "<<EspressoName << endl;
    }
};

GetEspresso::GetEspresso(/* args */)
{
	EspressoName = "default";
}

GetEspresso::~GetEspresso()
{
	
}

int main(/* argc, argv */){

    GetEspresso g;
    
    g.getCoffe();
}