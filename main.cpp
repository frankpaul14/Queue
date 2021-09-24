#include "queue.h"

int main(){
    Queue<int> q;

    for ( int i=0; i<10; i++)
    {
        q.enqueue(i);
    }

    cout<< q << endl ; 
    
    int a = q.dequeue();
    cout<<"Valore estratto dalla coda: "<<a << endl;
    cout<<q << endl;
    int b = q.dequeue();
    cout<<"Valore estratto dalla coda: "<<b << endl;
    cout << q << endl;
    q.enqueue(11);
    q.enqueue(12);
    cout<< q << endl ; 
    
    
}