#include <iostream>
#include <string>
using namespace std;

class GetMilk
{private:
    string milk = "Milk brrrr!";
public:
    GetMilk(/* args */);
    ~GetMilk();

    void GetMilk(){
        cout << milk << endl;
    }
};
