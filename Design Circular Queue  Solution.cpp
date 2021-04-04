class MyCircularQueue {
public:
    int front;
    int rear;
    int size;
int *v;
    MyCircularQueue(int k) {
        front=rear=-1;
        size=k;
        v=new int[k];
    }
    
    bool enQueue(int value) {
        if(isFull())
        {
            return false;
        }
        if(isEmpty())
        {
            front++;
        }
        rear=(rear+1)%size;
        v[rear]=value;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty())
        {
            return false;
        }
        if(front==rear)
        {
          front=rear=-1;  
        }
        else
        {
            front=(front+1)%size;
        }
      return true;  
        
    }
    
    int Front() {
      if(isEmpty())
      {
          return -1;
      }
        return v[front];
    }
    
    int Rear() {
        if(isEmpty())
        {
            return -1;
        }
        return v[rear];
    }
    
    bool isEmpty() {
       return front==-1 ? true:false; 
    }
    
    bool isFull() {
        return front == (rear + 1)%size ? true : false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
