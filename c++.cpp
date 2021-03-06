//role player class

#include <iostream>
#include <string>
#include <Windows.h>
#include <ctime>
#include <cstdlib>

using namespace std;

class Mage {
    string name;
    string role = "Mage";
    int power;
    bool isCharged = false;

public:
    Mage(string aname);
    ~Mage();

    //methods
    void GetInfo();
    void CastSkill();
    int Damage();
};

Mage::Mage(string aname) {
    name = aname;
    role = role;
    power = 40;
    isCharged = false;
    GetInfo();
}

Mage::~Mage() {
}
//methods
void Mage::GetInfo() {
    cout << "********THIS IS YOUR ROLE!!*************" << endl << endl;
    cout << "Character name: " << name << endl;
    cout << "Power: " << power << endl;
    cout << "Role: " << role << endl << endl << endl;
    
}

void Mage::CastSkill() {
    if (!isCharged)
    {
        cout << "CASTING YOUR SKILL!!!!..." << endl;
        isCharged = true;
        Sleep(1000);
        Damage();
        cout << endl << endl;
    }   
}

int Mage::Damage() {
    srand(time(0));
    int damage = rand() % (40 - 0 + 1) + 0;
    cout << "you dealth " << damage << " damage.";
    return 0;
}


int main()
{
    Mage DesTroyer("DesTroyer");
    Mage RodolfoRP("RodolfoRP");

    EvilGod.CastSkill();
    RodolfoRP.CastSkill();
}