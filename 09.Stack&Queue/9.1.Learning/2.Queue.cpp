class Queue {
    public:
    int front, rear, arr[MAX],num;
        Queue (int n) {
            front = 0;
            rear = -1;
            num = n;
        }
        void enqueue(int ele) {
            if(rear == num -1) {
                return;
            }
            rear++;
            arr[rear] = ele;
        }
        int dequeue() {
            if(front > rear) return -1;
            int e;
            e = arr[front];
            front++;
            return e;
        }
};