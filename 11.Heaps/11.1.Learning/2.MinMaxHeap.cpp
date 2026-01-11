int main() {
    priority_queue<int> pq; //max heap
    
    //insert
    pq.push(1);
    pq.push(3);
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(7);
    pq.push(5);
    pq.push(6);
    pq.push(8);
    
    //top element
    cout<<pq.top()<<endl;
    
    //delete element
    pq.pop();
    
    //size of queue
    cout<<pq.size()<<endl;
    
    while(!pq.empty()) {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    
    priority_queue<int, vector<int>, greater<int>> pq1;     //min heap
    
    //insert
    pq1.push(1);
    pq1.push(3);
    pq1.push(4);
    pq1.push(2);
    pq1.push(5);
    pq1.push(7);
    pq1.push(5);
    pq1.push(6);
    pq1.push(8);
    
    //top element
    cout<<pq1.top()<<endl;
    
    //delete element
    pq1.pop();
    
    //size of queue
    cout<<pq1.size()<<endl;
    
    while(!pq1.empty()) {
        cout<<pq1.top()<<" ";
        pq1.pop();
    }
    return 0;
}