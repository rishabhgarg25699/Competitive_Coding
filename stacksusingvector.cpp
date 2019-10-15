#include<iostream>
using namespace std;
class Stacks{
private:
    int * arr;
    int Maxsize;
    int Index;
public:
    Stacks(int size=4){ ///index is where we need to write
        Maxsize=size;
        arr= new int [Maxsize];
        Index=0;
    }
    void Push(int d){
        if (Index==Maxsize){
            int * temp=arr;
            Maxsize*=2;
            arr=new int [Maxsize];
            for (int i=0;i<Index;i++) temp[i]=arr[i];
            delete [] temp;
            temp=NULL;
        }
        arr[Index]=d;
        Index++;
    }
    void Pop(){
       if (Index!=0) Index--;
    }
    int top(){
        if (Index==0) return -1;
        return arr[Index-1];
    }
    void print(){
        if (Index==0) cout<<"underflow"<<endl;
        for(int i=Index-1;i>=0;i++) cout<<arr[i]<<" ";
    }

};
int main(){
    Stacks s;
    s.Push(10);
    s.Push(2);
    s.Push(5);
    s.Push(140);
    s.Push(6);
    s.print();
}
