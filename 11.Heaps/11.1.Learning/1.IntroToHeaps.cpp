class Heap {
public: 
    int total_size, size,idx;
    vector<int> arr;
    
    Heap(int n) {
        total_size = n;
        size = 0;
        idx = 1;
        arr.resize(n+1);
    }
    void insert(int val) {
        if(size == total_size) {
            cout<<"Heap Overflow\n";
            return;
        }
        arr[idx] = val;
        size++;
        
        int i = idx;
        while(i>1 && arr[i/2] < arr[i]) {
            swap(arr[i/2],arr[i]);
            i = i/2;
        }
        idx++;
    }
    void Heapify(int index) {
        int largest = index;
        int left = 2*index;
        int right = 2*index+1;
        //largest will store index of largest element between 
        //parent, left child and right child
        if(left <= size && arr[left] > arr[largest]) 
        largest = left;
        if(right <= size && arr[right] > arr[largest])
        largest = right;
        
        if(largest != index) {
            swap(arr[index],arr[largest]);
            Heapify(largest);
        }
    }
    void deleteH() {
        if(size == 0) {
            cout<<"Heap underflow"<<endl;
            return;
        }
        arr[1] = arr[size];
        size--;
        idx--;
        if(size == 0) return;
        Heapify(1);
    }
    void print() {
        for(int i=1;i<=size;i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};