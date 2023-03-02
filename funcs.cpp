#include <iostream>
#include "funcs.h"


//Task A
bool isDivisibleBy(int n, int d){
    bool answer;
    if (n%d == 0)
    {
        answer = true;
    }
    else 
    {
        answer = false;
    }
    return answer;
}

//Task B
bool isPrime(int n){
    bool answer = true;
    if (n <= 1)
    {
        answer = false;
    }
    for (int i = 2; i<n; i++)
    {
        if (n%i == 0)
        {
            answer = false;
        }
    }
    
    return answer;
}

//Task C
int nextPrime(int n){
    int i = n+1;
    while (true)
   {
    if (isPrime(i))
        break;
    i++;
   }
    return i;
}


//Task D
int countPrimes(int a, int b){
    int count = 0;
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            count ++;
        }
    }
    return count;
}


//Task E
bool isTwinPrime(int n){
    bool answer;
    int y = n-2;
    int x = n+2;
    if (isPrime(n) && isPrime(x)==true || isPrime(n) && isPrime(y)==true)
    {
        answer = true;
    }
    else 
    {
        answer = false;
    }

    return answer;
}



//Task F
int nextTwinPrime(int n){

    int i = n + 1;

    while(isTwinPrime(i)==false)
        i++;
    
    return i;
}



//Task G
int largestTwinPrime(int a, int b){
    int max = -1;

    for (int i = a; i <= b; i++)
    {
        if (isTwinPrime(i) == true)
        {
            max = i;
        }
    }
   return max;
}





