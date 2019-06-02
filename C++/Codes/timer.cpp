#include <iostream>
#include <ctime>
//#include <cstdlib>

int main()
{
 clock_t startTime = clock(); //Start timer
 double secondsPassed;
 double secondsToDelay = 5;
 std::cout << "Time to delay: " << secondsToDelay << std::endl;
 bool flag = true;
 while(flag)
  {
   secondsPassed = (clock() - startTime) / CLOCKS_PER_SEC;
   if(secondsPassed >= secondsToDelay)
    {
     std::cout << secondsPassed << " seconds have passed" << std::endl;
     flag = false;
    }
  }
}

