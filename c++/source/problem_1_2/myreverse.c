#include <stdio.h>
#include <string.h>

// Problem 1.2:
// Implement a function void reverse(char* str) in C or C++ which reverses
// a null-terminated string.
//
// to compile:
// gcc -o a.out myreverse.c
//
// 1. didn't follow instructions (method signature wrong on first attempt)
// 2. code didn't even work at first attempt
// 3. C was invalid
// 4. took me about 35 min to write a bad algorithm.
// 5. spent another 1.5 hours trying to figure it out
void reverse(char* someString) {
   // strlen returns num of characters without /0
   int length = strlen(someString);
   
   // our reversed string needs to add the /0 so +1
   char reversed[length+1];

   // loop through the standard length (i <= length - 1)
   int i=0; 
   for(i=0; i<=length-1; i++) {
      reversed[i] = someString[length-i-1];  
   }
   
   // add the terminator
   reversed[length+1] = someString[length];

   printf("debug=%s\n",reversed);

   someString = (char*)reversed;

   printf("debug2=%s\n",someString);

   // so as of now, someString exists on the stack and is correct
   // as soon as this function returns though, it's off the stack
   // is there a way to solve this? going to PUNT on this for now
   // as it stands, this all compiles no warnings or errors and
   // probably a great example of what I need to learn.
}

void main(void) {
   char* test1 = "EveryGoodBoyDoesFine";
   char* test2 = "GoodBoysDoFineAlways";
   
   printf("test1=%s\n",test1);
   reverse(test1);
   printf("test1 reversed=%s\n", test1); // fails
   
   printf("test2=%s\n",test2);
   reverse(test2);
   printf("test2 reversed=%s\n", test2); // fails
}

