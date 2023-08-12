#include <iostream>
#include <string>

using namespace std;

struct Person
{
    string name;
    int age;
    string address;
};

int main()
{
    Person person1,person2;

    person1.name = "John Doe";
    person1.age = 30;
    person1.address = "123 Elm St, Town";

    person2.name = "Jane Smith";
    person2.age = 25;
    person2.address = "456 Elm St, Town";

    cout << "Person 1\n";
    cout << "Name: " << person2.name << "\n";
    cout << "Age: " << person2.age << "\n";
    cout << "Address: " << person2.address << "\n\n";

    cout << "Person 2\n";
    cout << "Name: " << person1.name << "\n";
    cout << "Age: " << person1.age << "\n";
    cout << "Address: " << person1.address << "\n\n";

    return 0;
}
