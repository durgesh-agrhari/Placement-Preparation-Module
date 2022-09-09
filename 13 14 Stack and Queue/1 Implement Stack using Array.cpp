#include<bits/stdc++.h>
using namespace std;

class Stack 
{
  int size;
  int * arr;
  int top;
  public:
    Stack() {
      top = -1;
      size = 1000;
      arr = new int[size];
    }
  void push(int x) {
    top++;
    arr[top] = x;
  }
  int pop() {
    int x = arr[top];
    top--;
    return x;
  }
  int Top() {
    return arr[top];
  }
  int Size() {
    return top + 1;
  }
  
};
int main() {

  Stack s;
  s.push(6);
  s.push(3);
  s.push(7);
  cout << "Top of stack is before deleting any element " << s.Top() << endl;
  cout << "Size of stack before deleting any element " << s.Size() << endl;
  cout << "The element deleted is " << s.pop() << endl;
  cout << "Size of stack after deleting an element " << s.Size() << endl;
  cout << "Top of stack after deleting an element " << s.Top() << endl;
  return 0;
}

















// #include <iostream>
// using namespace std;
// int stack[100], n=100, top=-1;
// void push(int val) {
//    if(top>=n-1)
//    cout<<"Stack Overflow"<<endl;
//    else {
//       top++;
//       stack[top]=val;
//    }
// }
// void pop() {
//    if(top<=-1)
//    cout<<"Stack Underflow"<<endl;
//    else {
//       cout<<"The popped element is "<< stack[top] <<endl;
//       top--;
//    }
// }
// void display() {
//    if(top>=0) {
//       cout<<"Stack elements are:";
//       for(int i=top; i>=0; i--)
//       cout<<stack[i]<<" ";
//       cout<<endl;
//    } else
//    cout<<"Stack is empty";
// }
// int main() {
//    int ch, val;
//    cout<<"1) Push in stack"<<endl;
//    cout<<"2) Pop from stack"<<endl;
//    cout<<"3) Display stack"<<endl;
//    cout<<"4) Exit"<<endl;
//    do {
//       cout<<"Enter choice: "<<endl;
//       cin>>ch;
//       switch(ch) {
//          case 1: {
//             cout<<"Enter value to be pushed:"<<endl;
//             cin>>val;
//             push(val);
//             break;
//          }
//          case 2: {
//             pop();
//             break;
//          }
//          case 3: {
//             display();
//             break;
//          }
//          case 4: {
//             cout<<"Exit"<<endl;
//             break;
//          }
//          default: {
//             cout<<"Invalid Choice"<<endl;
//          }
//       }
//    }while(ch!=4);
//    return 0;
// }














// // #include<bits/stdc++.h>
// // #include<vector>
// // using namespace std;

// // int fun(int arr)
// // {
// //     push(arr){
// //         arr[++top] = x;
// //     }
// //     pop(){
// //         top--;
// //     }
// //     top(){
// //         return arr[top];
// //     }
// //     size(){
// //         return top+1;
// //     }
// //     iseEmpity(){
// //         if(top == -1)
// //         {
// //             return empity;
// //         }
// //     }
// // }

// // int main()
// // {
// //     int arr[5];
// //     int top = -1;
// //     push(5);

// //     return 0;
// // }

