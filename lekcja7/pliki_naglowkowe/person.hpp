#include <string>
#include <vector>

class Person
{
private:
    std::string name;
    std::string surname;
    int age;
    std::vector<Person> friends;

public:
    Person(std::string name_arg, std::string surname_arg, int age_arg);

    int age_in(int x);

    std::string get_greeting();

    void add_friend(Person person);

    std::string get_name();

    std::string get_friends_names();

    std::string get_surname();
    std::string get_friends_surnames();
};