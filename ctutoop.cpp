#include <iostream>
#include <string>
#include <fstream>

class Animal {
  // encapsulation
  private:
    int height;
    int weight;
    string name;

    //shared by all Animal class created
    static int numOfAnimals;

  public:
    int getHeight(){ return height; }
    int getWeight(){ return weight; }
    string getName(){ return name; }
    void setHeight(int cm){ height = cm; }
    void setWeight(int kg){ weight = kg; }
    void setName(string animalName){ name = animalName; }

    //Prototype
    void setAll(int, int, string);
    //Constructor
    Animal(int, int, string)
    //Destructor
    ~Animal();
    //Overlaod
    Animal();
    //static methods attached to class and access only static variables
    static int getNumOfAnimals() { return numOfAnimals; }

    void toString();
};

//Declare variables
//Static variables
int Animal::numOfAnimals = 0;

void Animal::setAll(int height, int weight, string name){

  this -> height = height;
  this -> weight = weight;
  this -> name = name;
  Animal::numOfAnimals++

}

//Constructor
Animal::Animal(int height, int weight, string name){
  this -> height = height;
  this -> weight = weight;
  this -> name = name;
  Animal::numOfAnimals++
}

Animal::~Animal(){
  cout << "Animal " << this -> name << " destroyed" << endl;
}

Animal::Animal(){
  Animal::numOfAnimals++;
}

void Animal::toString(){
  cout << this -> name << " is " << this -> height <<
    " cms tall and " << this -> weight << " kgs in weight" << endl;
}

// inherit all of Animal class
class Dog : public Animal{

  private:
    string sound = "Woof";

  public:
    void getSound() { cout << sound << endl; }

    //Constructor
    Dog(int, int, string, string);
    //Default superclass Constructor
    Dog() : Animal(){}

    void toString();
}

Dog::Dog(int height, int weight, string name, string bark) :
Animal(height, weight, name){
  //Add sound
  this -> sound = bark;
}

void Dog::toString(){
  cout << this -> getName() << " is " << this -> getHeight() <<
  " cms tall and " << this -> getWeight() << "kgs in weight and says " <<
  this -> sounds << endl;
}


int main(){
  Animal fred;

  fred.setHeight(33);
  fred.setWeight(10);
  Fred.setName("Fred");

  cout << fred.getName() << " is " << fred.getHeight() <<
    " cms tall and " << fred.getWeight() << "kgs n weight" << endl;

  Animal tom(36, 25, "Tom");

  cout << tom.getName() << " is " << tom.getHeight() <<
    " cms tall and " << tom.getWeight() << "kgs n weight" << endl;

  Dog Spot(38, 12, "Spot", "Woof");

  cout << "Numer of Animals " << Animal::getNumOfAnimals() << endl;

  spot.getSound();

  tom.toString();
  spot.toString();

  spot.Animal::toString();

  return 0;

}
