#include <iostream>

struct Person
{
    int age;
    double weight;
};

int main()
{
    Person person;

    Person &ref = person;
    ref.age = 24;
    ref.weight = 93;

    Person *ptr = &person;

    (*ptr).age = 25; // This is undesirable
    ptr -> age = 26; // This is preferrable

    std::cout << "Age: " << ptr -> age << std::endl;
    std::cout << "Weight: " << ptr -> weight << std::endl;

    return 0;

}