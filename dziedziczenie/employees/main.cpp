#include <iostream>
#include <string>
#include <memory>

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
    };
};

class Manager : public Employee
{
public:
    Manager(std::string name_arg, double salary_arg)
    {
        this->name = name_arg;
        this->salary = 10 * salary_arg;
    };
};

class Developer : public Employee
{
public:
    Developer(std::string name_arg, double salary_arg)
    {
        this->name = name_arg;
        this->salary = 2 * salary_arg;
    };

    void show_data() override
    {
        std::cout << "Developer Name: " << this->name << std::endl;
        std::cout << "I should make more money than the manager!" << std::endl;
    }
};

class SuperDeveloper : public Developer
{
public:
    SuperDeveloper(std::string name_arg, double salary_arg) : Developer(name_arg, 10 * salary_arg) {};

    void show_data() override
    {
        std::cout << "I'm the best " << std::endl;
        std::cout << "My salary is: " << this->salary << std::endl;
    };
};
int main()
{
    std::unique_ptr<Employee> employee1 = std::make_unique<Manager>("Marcel", 1000);
    std::unique_ptr<Employee> employee2 = std::make_unique<SuperDeveloper>("Janek", 1000);

    employee1->show_data();
    employee2->show_data();

    return 0;
}