#include <iostream>
using namespace std;
class StandardPlayer
{
public:
    int runSpeed;
    void display()
    {
        cout << "Standard Player Run Speed :- " << runSpeed << endl;
    }
};
class ProPlayer : public StandardPlayer
{
public:
    int dashSpeed;
    void display()
    {

        cout << "Pro Player Dash Speed :- " << dashSpeed << endl;
    }
};
int main()
{
    ProPlayer alok;
    StandardPlayer *base_ptr = &alok; // base class pointer can point to derived class object
    base_ptr->runSpeed = 15;
    // base_ptr->dashSpeed = 50;// This will cause a compilation error because dashSpeed is not a member of StandardPlayer
    base_ptr->display(); // It will call the base class display function because the pointer is of base class type and the function is not virtual

    return 0;
}
