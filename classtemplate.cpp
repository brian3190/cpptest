template <class T>
class Pair{
  private:
    T first, second;
  public:
    Pair(T a, T b):
    first(a), second(b){
    }
    T bigger();
};

template <class T>
T Pair<T>::bigger(){
  return (first>second?first:second);
}

template <class int>
Pair <int> obj(11,22);
cout << obj.bigger();
