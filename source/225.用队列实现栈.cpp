/*
 * @lc app=leetcode.cn id=225 lang=cpp
 *
 * [225] 用队列实现栈
 */

// @lc code=start
class MyStack {
    queue<int> q1;
    queue<int> q2;
public:
    MyStack() {
         
    }
    
    void push(int x) {
        q1.push(x);
        if(q1.size()>1){
            int i=q1.front();
            q1.pop();
            q2.push(i);
        }
    }
    
    int pop() {
        int x=q1.front();
        q1.pop();
        swap(q1,q2);
        while(q1.size()>1){
            int i=q1.front();
            q1.pop();
            q2.push(i);
        }
        return x;
    }
    
    int top() {
        
        return q1.front();
    }
    
    bool empty() {
        
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
// @lc code=end

