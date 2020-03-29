#include<iostream>
#define N 6
using namespace std;
int stack_size[N],top=-1;
void push(int val)
{
    if(top>=N-1)
    {
        cout<<"Stack is Full"<<endl;
    }
    else
    {
       /// top++;
        stack_size[++top]=val;
    }
}
void pop()
{
    if(top==-1)
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        top--;
    }
}
void display()
{
    for(int i=top;i>=0;i--)
    {
        cout<<stack_size[i]<<endl;
    }
}
int main()
{
    push(9);
    push(8);
    push(7);
    push(6);
    push(5);
    push(4);
    display();
    pop();

    display();


    return 0;
}
