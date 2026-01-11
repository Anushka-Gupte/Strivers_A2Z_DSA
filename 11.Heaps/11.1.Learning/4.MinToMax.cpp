class Solution {
  public:
    void heapify(vector<int>& arr, int N, int index) {
        int largest = index;
        int left = 2*index+1;
        int right = 2*index+2;
        
        if(left < N && arr[left] > arr[largest]) 
        largest = left;
        if(right < N && arr[right] > arr[largest])
        largest = right;
        
        if(index != largest) {
            swap(arr[index],arr[largest]);
            heapify(arr,N,largest);
        }
    }
    void convertMinToMaxHeap(vector<int> &arr, int N) {
        for(int i=N/2-1;i>=0;i--) {
            heapify(arr,N,i);   
        }
    }
};

//https://www.geeksforgeeks.org/problems/convert-min-heap-to-max-heap-1666385109/1