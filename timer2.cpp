#include <chrono>
#include <iostream>
#include <thread>
using namespace std;

struct Timer
{
  chrono::time_point<chrono::steady_clock> start, end;
  chrono::duration<float> duration;

  Timer(){
    start = chrono::high_resolution_clock::now();
  }

  ~Timer(){
    end = chrono::high_resolution_clock::now();
    duration = end - start;

    float ms = duration.count() * 1000.0f;
    cout << "Timer took " << ms << "ms\n";
  }
};

void Function(){
  Timer timer;

  for(int i=0; i<100; i++){
    cout << "Hello\n";
  }
};


int main(){
  //using namespace std::literals::chrono_literals;

  //auto start = chrono::high_resolution_clock::now();
  //this_thread::sleep_for(1s);
  //auto end = chrono::high_resolution_clock::now();

  //chrono::duration<float> duration = end - start;
  //cout << duration.count() << "s " << endl;

  Function();

  cin.get();
}
