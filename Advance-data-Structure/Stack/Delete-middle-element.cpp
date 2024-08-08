#include <bits/stdc++.h> 

void StackTraverse (stack<int>& inputStack, int count, int N) {

   //If stack is empty
   if (count == N/2) {
      inputStack.pop();
      return;
   }

   int num = inputStack.top();
   inputStack.pop();

   //Recursive call
   StackTraverse(inputStack, count+1, N);

   inputStack.push(num);

}


void deleteMiddle(stack<int>&inputStack, int N){
	
   int count = 0;
   StackTraverse(inputStack, count, N);
   
}
