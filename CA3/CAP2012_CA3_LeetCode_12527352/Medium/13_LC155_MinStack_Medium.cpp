class MinStack {
private:
    stack<pair<int, int>> st;

public:
    MinStack() {}

    void push(int val) {
        int minimum = val;

        if (!st.empty()) {
            minimum = min(val, st.top().second);
        }

        st.push({val, minimum});
    }

    void pop() {
        st.pop();
    }

    int top() {
        return st.top().first;
    }

    int getMin() {
        return st.top().second;
    }
};