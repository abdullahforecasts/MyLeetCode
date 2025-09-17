class CustomStack {
private:
    vector<int> stack;
    int topPlace;

public:
    CustomStack(int maxSize) {
        stack.resize(maxSize, 0);  
        topPlace = 0;
    }

    void push(int x) {
        if (topPlace < stack.size()) {
            stack[topPlace++] = x;
        }
    }

    int pop() {
        if (topPlace == 0) {
            return -1;
        }
        return stack[--topPlace];  
    }

    void increment(int k, int val) {
        int till = min(k, topPlace);
        for (int i = 0; i < till; i++) {
            stack[i] += val;
        }
    }
};
