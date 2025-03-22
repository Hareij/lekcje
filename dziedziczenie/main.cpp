#include <iostream>
#include <string>

class Employee
{
protected:
    std::string name;
    double salary;

public:
    virtual void show_data()
    {
        std::cout << "Name: " << this->name << std::endl;
        std::cout << "Salary: " << this->salary << std::endl;
    } // = 0;
};

int main()
{
    return 0;
}