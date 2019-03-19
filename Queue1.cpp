/*************************************************************************
	> File Name: Queue1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年03月16日 星期六 10时23分38秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

class myQueue{
    private:
        vector<int> data;
        int q_start;
    public:
        myQueue() {q_start=0;}
    bool enQueue(int x){
        data.push_back(x);
        return true;
    }
    bool deQueue(){
        if(isEmpty()){
            return false;
        }
        //value_Front();
        q_start++;
        return true;
    }

    bool isEmpty(){
        return q_start >= data.size();
    }
    int value_Front(){
        return data[q_start];
    }
};


int main(){
    myQueue q;
    q.enQueue(12);
    if(!q.isEmpty()){
        cout << q.value_Front() << endl;
    }
    q.deQueue();
    q.enQueue(23);
    if(!q.isEmpty()){
        cout << q.value_Front() << endl;
    }
    q.deQueue();
    if(!q.isEmpty()){
        cout << q.value_Front() << endl;
    }
    return 0;
}


