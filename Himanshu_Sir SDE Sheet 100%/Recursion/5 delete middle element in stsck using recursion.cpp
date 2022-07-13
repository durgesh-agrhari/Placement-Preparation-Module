
// C++ code to delete middle of a stack 
// without using additional data structure. 
#include<bits/stdc++.h> 
using namespace std; 
  
// Deletes middle of stack of size 
// n. Curr is current item number 
void deleteMid(stack<char> &st, int n, int curr=0) 
{ 
   // If stack is empty or all items 
   // are traversed 
   if (st.empty() || curr == n) 
     return; 
  
   // Remove current item 
   int x = st.top(); 
   st.pop(); 
  
   // Remove other items 
   deleteMid(st, n, curr+1); 
  
   // Put all items back except middle 
   if (curr != n/2) 
     st.push(x); 
} 
  
//Driver function to test above functions 
int main() 
{ 
    stack<char> st; 
  
    //push elements into the stack 
    st.push('1'); 
    st.push('2'); 
    st.push('3'); 
    st.push('4'); 
    st.push('5'); 
    st.push('6'); 
    st.push('7'); 
  
    deleteMid(st, st.size()); 
  
    // Printing stack after deletion 
    // of middle. 
    while (!st.empty()) 
    { 
        char p=st.top(); 
        st.pop(); 
        cout << p << " "; 
    } 
    return 0; 
} 



// #include<bits/stdc++.h>
// using namespace std;

// void solve(stack<int>& s, int k)
// {
//     if(k==1)
//     {
//         s.pop();
//         return;
//     }
//     int temp = s.top();
//     s.pop();
//     solve(s,k-1);
//     s.push(temp);
//     return;
// }

// stack<int> middelete(stack<int> s, int size)
// {
//     if(s.size()==0)
//     {
//         return s;
//     }
//     int n = s.size();
//     int k = ((n/2)+1);
//     solve(s,k);
//     return s;
// }

// void printStack(stack<int> s)
// {
//     while (!s.empty())
//     {
//         cout << s.top() << " ";
//         s.pop();
//     }
//     cout << endl;
// }


// int main()
// {
//     vector<int> l = {5, 2, 9, 7, 3};
//     stack<int> s;
//     for (int i : l)
//     {
//         s.push(i);
//     }
    
//     cout << "Stack before sorting: ";
//     printStack(s);
 
//     stack<int> middelete(s);
 
//     cout << "Stack after sorting: ";
//     printStack(s);
//     return 0;
// }


