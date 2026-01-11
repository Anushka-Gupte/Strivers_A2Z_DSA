class MedianFinder {
public:
    priority_queue<int> LeftMaxHeap;
    priority_queue<int, vector<int>, greater<int>> RightMinHeap;

    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(LeftMaxHeap.empty()) {
            LeftMaxHeap.push(num);
            return;
        }
        if(num > LeftMaxHeap.top())
            RightMinHeap.push(num);
        else 
            LeftMaxHeap.push(num);
        
        
        if(RightMinHeap.size() > LeftMaxHeap.size()) {
            LeftMaxHeap.push(RightMinHeap.top());
            RightMinHeap.pop();
        }
        else {
            if(RightMinHeap.size() < LeftMaxHeap.size()-1) {
                RightMinHeap.push(LeftMaxHeap.top());
                LeftMaxHeap.pop();
            }
        }
    }
    
    double findMedian() {
        if(LeftMaxHeap.size() > RightMinHeap.size()) 
            return LeftMaxHeap.top();
        else {
            double med = LeftMaxHeap.top() + RightMinHeap.top();
            med /= 2;
            return med;
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */

// https://leetcode.com/problems/find-median-from-data-stream/