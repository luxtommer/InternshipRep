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
public:
    GetEspresso(/* args */);
    ~GetEspresso();

    void getCoffe(){
        cout << coffe<<" "<<EspressoName << endl;
    }
};

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