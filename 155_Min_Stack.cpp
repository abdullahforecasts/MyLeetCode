struct Node
{
    int val;
    Node * prv;
    int min;

};

class MinStack {
public:
    MinStack() {
       
        this->ptr = nullptr;
        this->size = 0;
    }

    void push(int val)
    {
        if (size==0)
        {
            Node* block = new Node();
            block->val = val;
            block->min = val;
            this->ptr = block;
        }
        else
        {
            
            Node* block = new Node();
            block->prv = ptr;
            block->val = val;

            if (block->val < ptr->min)
            {
                block->min = block->val;
            }
            else
            {
                block->min = ptr->min;
            }

            this->ptr = block;
          


        }

        size++;

    }

    void pop() 
    {
        

        Node* temp = ptr->prv;
        delete ptr;

        ptr = temp;
       
        size--;


    }

    int top() 
    {

        return ptr->val;
        
    }

    int getMin() {
       
        return ptr->min;
    }

private:

    Node* ptr;
    int size;
};