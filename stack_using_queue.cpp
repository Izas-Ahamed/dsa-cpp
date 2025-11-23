// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
using namespace std;
class Stack
{
  queue<int> q1,q2;
  public:
  
  bool empty()
  {
      return q1.empty() && q2.empty();
  }
  
   void push(int data)
   {
       if(!q1.empty())
       {
           q1.push(data);
       }else
       {
           q2.push(data);
       }
   }
   
   void pop()
   {
       if(!q1.empty()){
           while(!q1.empty())
           {
               int top = q1.front();
               q1.pop();
               if(!q1.empty())
               {
                 q2.push(top);
               }
           }
       }
       else
       {
            while(!q2.empty())
           {
               int top = q2.front();
               q2.pop();
               if(!q2.empty())
               {
                 q1.push(top);
               }
           }
       }
   }
  
    int top()
    {
         int top;
      if(!q1.empty()){
           while(!q1.empty())
           {
               top = q1.front();
               q1.pop();
               q2.push(top);
           }
       }
       else
       {
            while(!q2.empty())
           {
               top = q2.front();
               q2.pop();
               q1.push(top);
           }
       }
       return top;
    }
};

int main() {
    
    Stack s;
    
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();
    s.push(5);
    while(!s.empty())
    {
        cout<<s.top()<<",";
        s.pop();
    }



    return 0;
}