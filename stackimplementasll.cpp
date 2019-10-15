#include<iostream>
using namespace std;
class Node{
private:
    int data;
    Node* next;
public:
    Node (int d){
        data=d;
        next=NULL;
    }
    friend class stack;
};
class stack{
 private:
    Node* head;
public:
    stack(){
        head=NULL;
    }
    void push(int d){
    Node * newnode= new Node(d);
    newnode->next=head;
    head=newnode;
    }
    void pop(){
        if (head==NULL) return;
        Node * t= head;
        head=head->next;
        delete t;
    }
    bool isempty() {
    if (head==NULL) return true; else return false;
    }
    void top(){
        cout<<head->data<<endl;
    }
    void Print(){
        Node * t=head;
        while (t!=NULL){
            cout<<t->data<<" ";
            t=t->next;
        }
        cout<<endl;
    }
};
int main(){
stack k;
k.push(1);
k.push(2);
k.push(3);
k.push(4);
k.push(5);
k.top();
k.Print();
k.pop();
k.Print();

}
