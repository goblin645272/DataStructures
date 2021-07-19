#include<iostream>
using namespace std;
#define MAX 5
class Stack
{
   int top;
   public:
   int myStack[MAX]; 
  
   Stack() { top = -1; }
   bool push(int x);
   int pop();
   bool isEmpty();
   void display();
};
   
   //pushes element on to the stack
bool Stack::push(int item){
    if (top >= (MAX-1)) {
       cout << "Stack Overflow!!!";
       return false;
    }
    else {
       myStack[++top] = item;
       cout<<item<<endl;
       return true;
   }
}
  
//removes or pops elements out of the stack
int Stack::pop()
{
    if (top < 0) {
      cout << "Stack Underflow!!";
      return 0;
    }
    else {
       int item = myStack[top--];
      return item;
    }
} 

void Stack::display(){
    if (top < 0) {
      cout << "No elements in stack"<<endl;
    }
    else{
    
        for (const int &n : myStack) {
        cout << n << "  ";
        }
    }
}

//check if stack is empty
bool Stack::isEmpty()
{
   return (top < 0);
}
  
// main program to demonstrate stack functions
int main()
{
    
   class Stack stack;
   cout<<"The Stack Push "<<endl;
   stack.push(2);
   stack.push(4);
   stack.push(6);
   stack.push(8);
   stack.push(10);
   cout<<"The Stack Now is "<<endl;
   stack.display();
   cout<<"The Stack Pop : "<<endl;
   while(!stack.isEmpty())
      {
        cout<<stack.pop()<<endl;
      }
    cout<<"The stack will be empty"<<endl;
   stack.display();
   return 0;
}