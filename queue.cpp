#include <iostream>
#include <vector>
using namespace std;

class Queue{
    vector <int> v;
    int front,rear;
public:
    Queue(int size){
        v.resize(size);
        front = -1;
        rear = -1;
    }
    void push(int val){
        if(rear == v.size()-1){
            cout<<"Overflow\n";
            return;
        }
        if(front == -1){
            front = 0;
        }
        v[++rear] = val;
    }
    void pop(){
        if(front == -1){
            cout<<"Undeflow\n";
            return;
        }
        cout<<"Deleted:"<<v[front]<<'\n';
        front++;
    }
    int isEmpty(){
        return front == -1 || front>rear;
    }
    int size(){
        if(isEmpty()){
            return 0;
        }
        return rear - front + 1;
    }
    void traverse(){
        if(isEmpty()){
            cout<<"Empty\n";
        }
        for(int i = front; i<=rear; i++){
            cout<<v[i]<<'\t';
        }
        cout<<"\n";
    }

};

int main(){
    Queue q1(3);
    q1.push(10);
    q1.push(12);
    q1.push(11);
    q1.traverse();
    q1.pop();
    q1.traverse();

}