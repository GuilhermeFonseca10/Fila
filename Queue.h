//https://www.youtube.com/watch?v=4tVXls2-0DE

typedef int Item_type;
const int Max_Items =10;

class Queue{
private:
int first, last;
Item_type* structure;

public:
    Queue();
    ~Queue();
    bool isEmpty();
    bool isFull();
    void enqueue(Item_type item);
    Item_type pop();
    void print();
     int size();
     int front();
     int back();
     void clear();
};
