#include <iostream>
#include <thread>
#include <future>
#include <cmath>
#include <vector>
#include <chrono>

using std::cout;

void workerFunction(int n)
{
    // print id of worker thread
    cout << "Worker Thread id = " << std::this_thread::get_id() << '\n';

    // do work
    for (int i = 0; i < n; ++i)
    {
        cout << pow(n, 5.0) <<'\n';
    }
}

int main()
{
    // print id of main thread
    std::cout << "Main  thread id = " << std::this_thread::get_id() << '\n';

    // start timer
    std::chrono::high_resolution_clock::time_point t_1 = std::chrono::high_resolution_clock::now();

    // start tasks
    std::vector<std::future<void>> futures;
    int num_loops = 10, num_threads = 5;
    for (int i = 0; i < num_threads; ++i)
    {
        futures.emplace_back(std::async(std::launch::async, workerFunction, num_loops));
    }

    // wait for tasks to complete
    for (const std::future<void> &ftr :futures)
        ftr.wait();

    // stop timer and print execution time
    std::chrono::high_resolution_clock::time_point t_2 = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t_2 - t_1).count();
    std::cout << "Execution finished after " << duration << " microseconds" << '\n';

    return 0;
}
