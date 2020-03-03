#include <cstdio>
using namespace std;

//From LinkedIn Learning

class Conv{
    int _value = 0;
    Conv();
    public:
        explicit Conv (const int & value) : _value(value) {}
        void setvalue(const int & value) {_value = value; }
        int getvalue() const { return _value; }
};

void func(const Conv &o){
    printf("value is %d\n", o.getvalue());
}

int main(){
    Conv o = 'x'; //conversion of char x to 120, with explicit, no viable conversion
    printf("value is %d\n", o.getvalue()); //pass
    func('x');
    return 0;
}