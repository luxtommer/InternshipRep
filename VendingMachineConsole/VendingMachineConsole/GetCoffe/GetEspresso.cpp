#include <iostream>
using namespace std;

class GetEspresso
{
private:
    /* data */
	string EspressoName;
public:
    GetEspresso(/* args */);
    ~GetEspresso();
};

GetEspresso::GetEspresso(/* args */)
{
	EspressoName = "default";
}

GetEspresso::~GetEspresso()
{
	delete EspressoName;
}
