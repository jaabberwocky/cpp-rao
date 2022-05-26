#include <iostream>
#include <string>
using namespace std;

enum RobotType
{
    Attack = 0,
    Utility,
    Defence,
    NoType,
};

class Robot
{
public:
    int age;
    string name;
    RobotType type;

    // default constructor
    Robot()
    {
        this->name = "DefaultRobot";
        this->age = 0;
        this->type = RobotType::NoType;
    }

    // overloaded constructor
    Robot(string name, int age = 1, RobotType type = RobotType::Attack)
    {
        this->name = name;
        this->age = age;
        this->type = type;
    }

    void describeSelf()
    {
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
        cout << "Type: " << this->type << endl;
    }
};

int main()
{
    Robot r1;
    r1.describeSelf();
    cout << endl;

    Robot r2("FirstRobot", 100, RobotType::Utility);
    r2.describeSelf();

    return 0;
}