#include<iostream>
#include<string>

class Person
{
public:
    // Performance penalty due to formation of V table
    virtual std::string getName(){ return "Person"; } 
};

class Student : public Person
{
private:
    std::string Name_;
public:
    Student(const std::string& name)
        : Name_(name) {}
    std::string getName() override { return Name_; } 
};

int main()
{
    Person* p = new Person();
    std::cout << p->getName() << std::endl;

    Student* stud = new Student("Mel")
    std::cout << stud->getName() << std::endl;

    std::cin.get();
};
    
