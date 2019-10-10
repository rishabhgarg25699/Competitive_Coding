#include<iostream>
#include<queue>
using namespace std;

class Stack{
private:
    queue<int> *q;
public:
    Stack(){
        q=new queue<int>;
    }
    void push(int d){
        q->push(d); ///here we generate a queue using pointer dynamically. here we use arrow this pointer to point towards the queue
    }
    int top(){
        if (q->empty()) return -1;
        queue<int> *q1=new queue<int>; //generating a temp queue
        int t;
        while (!q->empty()){
            t=q->front();
            q->pop();
            q1->push(t);
        }
        swap(q,q1); //swap the two queues. not mandatory. but we get our original queue back.
        delete q1;
        return t;
    }
    void pop(){
        if (q->empty()) return;
        queue<int> *q1=new queue<int>;
        int t;
        while (!q->empty()){
            t=q->front();
            q->pop();
            if (!q->empty()) q1->push(t);
        }
        swap(q,q1);
        delete q1;
    }
    bool isEmpty(){
        return q->empty();
    }
};

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();
    s.push(4);
    s.push(19);
    cout<<s.top()<<endl;
    while (!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
