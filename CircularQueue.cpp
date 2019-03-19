/*************************************************************************
	> File Name: CircularQueue.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年03月16日 星期六 11时29分53秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;


class MyCircularQueue{
    private:
        vector<int> data;
        int head;
        int tail;
        bool reset;//When the array is empty, so reset the mark
    public:
        MyCircularQueue(int k) {
            data.resize(k);
            head = 0;
            tail = 0;
            reset = true;
        }

        bool enQueue(int value){
            if (isFull()) return false;
            if(head == tail && reset ) reset = false;
            data[tail] = value;
            tail = (tail + 1) % data.size(); // good, Circular structer useful.
            return true;

        }
        bool deQueue(){
            if (isEmpty())return false;
            if(head==tail && !reset){
                // 当队列满后, reset回归,head, tail归零.
                reset = true;
                /**head = 0;
                tail = 0;*/
            }
            head = (head + 1) % data.size();
            return true; 
        }
        /** Get the front item from the queue. */
        int Front(){
            if(isEmpty()) return -1;
            return data[head];
        }
        /** Get the last item from the queue. */
        int Rear(){
            if(isEmpty()) return -1;
            // tail = (tail + data.size() - 1)
            return data[tail];
        }
        /** Checks whether the circular queue is empty or not.*/
        bool isEmpty(){
            //return tail != head;
            if(tail==head && reset) return true;
            return false;

        }
        bool isFull(){
            if(tail)
            //return ((tail + 1) % data.size());
            } 
        } 
};


