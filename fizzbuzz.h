#ifndef N
#include<iostream>
#define t(a) t_(a)
#define t_(a) #a
int main(){
	#include"fizzbuzz.hpp"
	return 0;
}
#endif

#ifdef FizzBuzz
#undef FizzBuzz
#endif

#ifdef N

#if N%3==0&&N%5
#define FizzBuzz "Fizz"

#elif N%3&&N%5==0
#define FizzBuzz "Buzz"

#elif N%3==0&&N%5==0
#define FizzBuzz "FizzBuzz"

#else
#define FizzBuzz t(N)

#endif

#endif
