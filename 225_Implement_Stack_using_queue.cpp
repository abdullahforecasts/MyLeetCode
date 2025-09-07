class MyStack {
private:

    queue<int>A;
    queue<int>B;

public:
    MyStack()
    {
        

    }
    void push(int x)
    {
        A.push(x);

    }
    int pop()
    {
        if (A.empty())return -1;
        {

        }
        while (A.size()>1)
        {
            B.push(A.front());
            A.pop();
        }

        int val = A.front();
        A.pop();
        swap(A, B);
        return val;
    }

    int top()
    {

        int val = A.back();

        return val;

    }
    bool empty()
    {

        return A.empty();
    }
};