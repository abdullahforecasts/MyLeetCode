class MyCircularQueue {

private :

    vector<int>A;
    int head, tail,cap,size ;

public:
    MyCircularQueue(int k)
    {
        A.resize(k);
        head = 0;
        tail = 0;
        cap = k;
        size = 0;

    }
    bool enQueue(int value)
    {
        if (isFull())
        {
            return false;
        }

        A[tail] = value;

        tail = (tail + 1) % cap;
        
        size++;
        return true;
    }
    bool deQueue()
    {
        if (isEmpty())
        {
            return false;
        }

        head = (head+1)%cap;
        size--;
        return true;
    }
    int Front()
    {
        if (isEmpty()) return -1;
        return A[head];

    }
    int Rear()
    {

        if (isEmpty()) return -1;
        return A[(tail-1+cap)%cap];

    }
    bool isEmpty()
    {

        return size==0;

    }
    bool isFull()
    {
        return size == cap;

    }
};