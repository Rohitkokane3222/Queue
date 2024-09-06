#include <iostream>
#include <vector>
using namespace std;
int front = -1, rear = -1;

void Insertion(vector<int>&queue)
{
    int ele;
    if(rear == queue.size())
    {
        cout<<"!!-- Overflow --!!";
    }
    else
    {
        rear++;
        if(rear == 0)
        {
            front = 0;
        }
        
        cout<<"Enter the Insert Value: ";
        cin>>ele;
        queue[rear] = ele;
        cout<<queue[rear]<<endl;
    }
}

void Deletion(vector<int>&queue)
{
    if(front == -1)
    {
        cout<<"!!-- Underflow --!!";
    }
    else
    {
        if(front > rear)
        {
            front = -1;
            rear = -1;
        }

        queue.erase(queue.begin());
    }
}

void Display(vector<int>&queue)
{
    if(front == -1)
    {
        cout<<"Queue is Empty!!";
    }
    else
    {
        for(int i = front; i < queue.size(); i++)
        {
            if(queue[i] != 0)
            {
                cout<<queue[i]<<" ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the array size: ";
    cin>>n;

    vector<int> queue(n);
    while(1)
    {
        //Operation in queue 
        int check;
        cout<<"Press: "<<endl;
        cout<<"1. Insert the element in queue"<<endl;
        cout<<"2. Deletion the element in queue"<<endl;
        cout<<"3. Display the element in queue"<<endl;
        cout<<"4. Exit the loop: ";
        cin>>check;

        switch(check)
        {
            case 1: 
                Insertion(queue);
                break;

            case 2:
                Deletion(queue);
                break;

            case 3:
                Display(queue);
                break;
            
            case 4:
                cout<<"Code is Stop!!";
                exit(0);

            default:
            cout<<"Pls!! Select the write inpute";
        }
    }
}