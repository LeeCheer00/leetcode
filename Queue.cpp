/*************************************************************************
	> File Name: Queue.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年03月16日 星期六 09时02分42秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

class MyQueue{
    private:
        vector <int> data;
        //定义出栈的位置
        int p_start;
    public:
        MyQueue() {p_start=0;}// p_start = 0 ; 分号在其中括号其中.
        bool enQueue(int x){
            data.push_back(x);
            return true;
        }
        bool deQueue(){
            if(isEmpty()){
                return false;
            }
            print_Front();
            p_start++;
            return true;
        }
        bool isEmpty(){
            return p_start >= data.size();
        } 

        int print_Front(){
            return data[p_start];
        } 
}; 

int main(){
    MyQueue q;
    q.enQueue(6);
    q.enQueue(5);
    if(!q.isEmpty()){
        cout << q.print_Front() << endl;
    }
    q.deQueue();
    if(!q.isEmpty()){
        cout << q.print_Front() << endl;
    } 
    q.deQueue();
    if(!q.isEmpty()){
        cout << q.print_Front() << endl;
    } 
    return 0;
}
