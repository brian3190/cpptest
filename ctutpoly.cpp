#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

class Animal{
  public:
    void getFamily(){ cout << "We are animals" << endl; }
    // use virtual when base class may be overwritten by subclass
    virtual void getClass() { cout << "I'm an Animal" << endl; }
    virtual void makeSound(){ cout << "The Animal says grr" << endl; }
};

class Dog : public Animal{
  public:
    void getClass() { cout << "I'm a Dog" << endl; }
    void makeSound(){ cout << "The Dog says woof" << endl; }
};

class Cat : public Animal{
  public:
    void getClass() { cout << "I'm a Cat" << endl; }
    void makeSound(){ cout << "The Cat says meow" << endl; }
};

class GermanShepard : public Dog{
  public:
    void getClass() { cout << "I'm a German Shepard" << endl; }
    void getDerived() { cout << "I'm an Animal and Dog" << endl;}
};

//Abstract class
class Car{
  public:
    virtual int getNumWheels() = 0;
    virtual int getNumDoors() = 0;
};

class StationWagon : public Car{
  public:
    int getNumWheels(){ cout << "Station wagon has 4 wheels" << endl; } //err: control reaches end of non-void function
    int getNumDoors(){ cout << "Station wagon has 4 doors" << endl; }
    StationWagon(){}
    ~StationWagon();
};

void whatClassAreYou(Animal *animal){
  animal -> getClass();
};

int main(){

  Animal *animal = new Animal;
  Dog *dog = new Dog;

  animal -> getClass();
  dog -> getClass();

  whatClassAreYou(animal);
  whatClassAreYou(dog);

  Dog spot;
  GermanShepard max;

  Animal* ptrDog = &spot;
  Animal* ptrGShepard = &max;

  ptrDog -> getFamily();
  ptrDog -> getClass();

  ptrGShepard -> getFamily();
  ptrGShepard -> getClass();

  Animal* pCat = new Cat;
  Animal* pDog = new Dog;

  pCat -> makeSound();
  pDog -> makeSound();

  Car* stationWagon = new StationWagon();

  stationWagon -> getNumWheels();

  return 0;
};
