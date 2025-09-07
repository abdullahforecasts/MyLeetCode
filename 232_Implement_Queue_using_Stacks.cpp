class MyQueue {


private :

    stack<int>in;
    stack<int>out;


    void transfer()
    {

        while (!in.empty())
        {
            out.push(in.top());
            in.pop();
        }

    }

public:
    MyQueue()
    {

    }
    void push(int x)
    {
        in.push(x);
       
    }
    int pop()
    {
        if (out.empty())
        {
            transfer();
        }
       
        int val = out.top();
        out.pop();

        return val;
        
    }
    int peek()
    {
        if (out.empty())
        {
            transfer();
        }

        int val = out.top();
        return val;

    }
    bool empty()
    {
        return in.empty() and out.empty();

    }
};