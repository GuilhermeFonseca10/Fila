#include <iostream>
#include "Queue.h"
using namespace std;

Queue::Queue(){
first=0;
last=0;

structure = new Item_type[Max_Items];
}

Queue::~Queue(){
delete[]structure;
}

bool Queue::isEmpty(){
if(first==last){
    cout<<"The queue is full"<<endl;
    return true;
}
else {
    cout<<"The queue is not full"<<endl;
    return false;
}
}

bool Queue::isFull(){
if(last-first==Max_Items){
    cout<<"The queue is empty"<<endl;
    return true;
}
else {
    cout<<"The queue is not empty"<<endl;
    return false;
}
}

void Queue::enqueue(Item_type item){
if(isFull()){
    cout<<"Overflow";
}
else{
    structure[last % Max_Items]=item;
    last++;
}
}
Item_type Queue::pop(){
if(isEmpty()){
    cout<<"Underflow";
}
else{
    first++;
    return structure[(first-1)% Max_Items];
}
}
void Queue::print(){
    cout<<"---Queue---"<<endl;
cout<<"[ ";
for(int i=first; i<last; i++){
    cout<< structure[i%Max_Items]<< " | ";
}
cout<<"]"<<endl;
}
int Queue::front(){
    cout<<"First: "<<"["<<structure[first]<<"]"<<endl;
return structure[first];
}
int Queue::back(){
  cout<<"Last: ""["<<structure[last-1]<<"]"<<endl;
  return structure[last-1];
}
int Queue::size(){
    cout<<"Size: "<<"["<<last<<"]"<<endl;
return last;
}
void Queue::clear(){
last=-1;
}
