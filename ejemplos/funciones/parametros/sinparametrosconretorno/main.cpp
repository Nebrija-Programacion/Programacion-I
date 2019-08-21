#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

milliseconds tic(){
    return duration_cast< milliseconds >(system_clock::now().time_since_epoch());
}


int main()
{
    milliseconds start_time = tic();

    // Do something
    for(int i{0}; i < 10000000; i++){
        // foo
    }

    milliseconds end_time = tic();
    milliseconds ellapsed = end_time - start_time;

    std::cout << "Computation has taken " << ellapsed.count() << " miliseconds" << endl;

    return 0;
}
