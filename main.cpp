#include <iostream>
#include "funcs.h"

int main()
{

  //Task A

  std::cout << "Task A: Is divisible?\n";
  if (isDivisibleBy(12,8) == true)
  {
    std::cout <<"Yes\n";
  }
  else 
  {
    std::cout << "No\n";
  }
  bool result2 = isDivisibleBy(56,7);
  if (result2 == true)
  {
    std::cout << "Yes\n";
  }
  else 
  {
    std::cout << "No\n";
  }
  bool result3 = isDivisibleBy(-21,3);
  if (result3 == true)
  {
    std::cout << "Yes\n";
  }
  else 
  {
    std::cout << "No\n";
  }

  std::cout << "___________________\n";

  //Task B

  std::cout << "Task B: Is a prime?\n";
  bool result4 = isPrime(10);
  if (result4 == true)
  {
    std::cout << "10: "<<"Yes\n";
  }
  else 
  {
    std::cout << "10: "<<"No\n";
  }
  bool result5 = isPrime(2);
  if (result5 == true)
  {
    std::cout << "2: "<< "Yes\n";
  }
  else 
  {
    std::cout << "2: "<< "No\n";
  }
   bool result6 = isPrime(-5);
  if (result6 == true)
  {
    std::cout << "-5: " <<"Yes\n";
  }
  else 
  {
    std::cout << "-5: " << "No\n";
  }

  std::cout << "___________________\n";


  //Task C
  std::cout << "Task C: Next Prime\n";
  std::cout << "17: " << nextPrime(17) << std::endl;
  std::cout << "14: " << nextPrime(14) << std::endl;
  std::cout << "23: " << nextPrime(23) << std::endl;
  std::cout << "-2: " << nextPrime(-2) << std::endl;
  std::cout << "___________________\n";


  //Task D
  std::cout << "Task D: Count primes in range\n";
  std::cout << "(2,3): " << countPrimes(2,3) << std::endl;
  std::cout << "(2,15): " << countPrimes(2,15) << std::endl;
  std::cout << "(1,7): " << countPrimes(1,7) << std::endl;
  std::cout << "___________________\n";

  //Task E
  std::cout << "Task E: Is a twin prime?\n";
  if (isTwinPrime(-1) == true)
  {
    std::cout << "-1: "<< "Yes\n";
  }
  else
  {
    std::cout << "-1: "<< "No\n";
  }

  if (isTwinPrime(3) == true)
  {
    std::cout << "3: "<<"Yes\n";
  }
  else
  {
    std::cout << "3: "<< "No\n";
  }

  if (isTwinPrime(2) == true)
  {
    std::cout << "2: " <<"Yes\n";
  }
  else
  {
    std::cout << "2: " << "No\n";
  }

   if (isTwinPrime(23) == true)
  {
    std::cout << "23: "<< "Yes\n";
  }
  else
  {
    std::cout << "23: " << "No\n";
  }
  std::cout << isTwinPrime(77);
  std::cout << "___________________\n";

  //Task F
  std::cout << "Task F: Next twin Prime\n";
  std::cout << "3: "<< nextTwinPrime(3) << std::endl;
  std::cout << "29: " << nextTwinPrime(29) << std::endl;
  std::cout << "11: " <<nextTwinPrime(11) << std::endl;
  std::cout << "-1: " <<nextTwinPrime(-1) << std::endl;
  std::cout << "___________________\n";

  //Task G
  std::cout << "Task G: Largest twin prime in range\n";
  std::cout << "(5,18): " << largestTwinPrime(5,18) << std::endl;
  std::cout << "(1,31): " << largestTwinPrime(1,31) << std::endl;
  std::cout << "(14,16): " << largestTwinPrime(14,16) << std::endl;
  std::cout << "(15,28): " << largestTwinPrime(15,28) << std::endl;
  std::cout << "(66,77): " << largestTwinPrime(66,77) << std::endl;
  std::cout << "___________________\n";






  return 0;
}
