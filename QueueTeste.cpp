#include <iostream>
#include "Queue.h"

using namespace std;

int main(){
 Queue q1;
 int option;
 Item_type item;
 cout<<"----Queue-----"<<endl;

 do{
    cout<<"Type 1 to insert an element"<<endl;
   cout<<"Type 2 to remove element"<<endl;
   cout<<"Type 3 to print the queue"<<endl;
   cout<<"Type 4 to see if this full"<<endl;
   cout<<"Type 5 to see if this is empty"<<endl;
   cout<<"Type 6 to see the first of the queue"<<endl;
   cout<<"Type 7 to see the last element of the queue"<<endl;
   cout<<"Type 8 to see the queue size"<<endl;
   cout<<"Type 9 to clear the queue"<<endl;
    cout<<"Type 0 to stop the program"<<endl;
    cin>>option;
    if(option==1){
        cout<<"Type the element to be inserted:"<<endl;
        cin>>item;
        q1.enqueue(item);
    }
    else if(option==2){
        item = q1.pop();
        cout<<"removed element: "<<"["<<item<<"]"<<endl;

    }
    else if(option==3){
        q1.print();
    }
    else if(option==4){
        q1.isEmpty();
    }
    else if(option==5){
        q1.isFull();
    }
    else if(option==6){
        q1.front();
    }
    else if(option==7){
        q1.back();
    }else if(option==8){
    q1.size();
    }
    else if(option==9){
        q1.clear();
    }
 }while(option !=0);

return 0;
}
