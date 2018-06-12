#include <iostream>

using namespace std;

class Enemy {
  protected:
    int attackPower;
  public:
    //virtual void attack() = 0; //pure virtual function
    virtual void attack(){
      cout << "Enemy! - " << endl;
    }
    void setAttackPower(int a){
      attackPower = a;
    }
};

class Ninja: public Enemy {
  public:
  void attack() {
    cout << "Ninja! - " << attackPower << endl;
  }
};

class Monster: public Enemy {
  public:
    void attack() {
      cout << "Monster! - " << attackPower << endl;
    }
};

int main() {
  Ninja n;
  Monster m;
  Enemy e;
  Enemy *e1 = &n;
  Enemy *e2 = &m;
  Enemy *e3 = &e;

  e1->setAttackPower(20);
  e2->setAttackPower(80);

  n.attack();
  m.attack();
  e3->attack();
}
