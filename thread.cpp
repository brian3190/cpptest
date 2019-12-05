#include <iostream>
#include <thread>
using namespace std;

static bool s_Finished = false;

void doWork(){
    using namespace std::literals::chrono_literals;

    cout << "Started thread id=" << this_thread::get_id() << endl;

    while(!s_Finished){
        cout << "Working...\n";
        this_thread::sleep_for(1s);
    }

}

int main(){
    thread worker(doWork);
    cin.get();
    s_Finished = true;

    worker.join();
    cout << "Finished." << endl;
    cout << "Started thread id=" << this_thread::get_id() << endl;

    cin.get();
}
