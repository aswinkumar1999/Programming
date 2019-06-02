#include <thread>

int main()
{
    //waits 2 seconds
    boost::this_thread::sleep( boost::posix_time::seconds(1) );
    boost::this_thread::sleep( boost::posix_time::milliseconds(1000) );

    return 0;
}
