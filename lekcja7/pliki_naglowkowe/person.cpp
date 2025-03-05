#include "person.hpp"
#include <string>
#include <sstream>

Person::Person(std::string name_arg, std::string surname_arg, int age_arg)
{
    this->name = name_arg;
    this->surname = surname_arg;
    this->age = age_arg;
}

int Person::age_in(int x)
{
    return age + x;
}

std::string Person::get_greeting()
{

    std::stringstream ss;
    ss << "Hello, my name is " << this->name << " " << this->surname << std::endl;
    ss << "My age is " << this->age << " and in 5 years it will be " << this->age_in(5) << std::endl;

    return ss.str();
}

void Person::add_friend(Person person)
{
    this->friends.push_back(person);
}

std::string Person::get_name()
{
    return this->name;
}
std::string Person::get_surname()
{
    return this->surname;
}
std::string Person::get_friends_surnames()
{
    std::stringstream ss;
    for (auto &f : this->friends)
    {
        ss << f.get_surname() << " ";
    }
    ss << std::endl;
    return ss.str();
}

std::string Person::get_friends_names()
{
    std::stringstream ss;
    for (auto &f : this->friends)
    {
        ss << f.get_name() << " ";
    }
    ss << std::endl;
    return ss.str();
}
