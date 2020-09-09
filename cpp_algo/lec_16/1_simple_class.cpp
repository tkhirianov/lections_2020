#include <iostream>
#include <string>

// Developer #1
struct Student
{
private:
    std::string name;
    std::string group;
    int age;
    double *memory;

public:
    Student(std::string name_, std::string group_, int age_)
    {
        name = name_;
        group = group_;
        age = age_;
        std::cout << "Hooray!!! Me " << name << " enrolled to the course!\n";
        //RESOURCE ALLOCATION
        memory = new double[100];
    }

    ~Student()
    {
        std::cout << "Ouch!!! Me " << name << " dismissed from the course!\n";
        //RESOURCE DEALLOCATION
        delete[] memory;
    }

    void print() const
    {
        std::cout << name << " " << group << " ";
        std::cout << age << "\n";
    }

    void ageing()
    {
        std::cout << "Hooray!!! Today is my birthday! I'm " << name << '\n';
        age += 1;
        print(); //the same as this->print()
    }
};

// Developer #2
int main()
{
    Student a("Petya", "B02-991", 18);

    a.print();
    a.ageing();
    a.print();

    Student b("Vasya", "B012", 17);
    b.print();
    b = a; // RAII concept is broken HERE!
    b.print();
}


