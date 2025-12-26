void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for(int i=0;i<=n-2;i++) {
        int didSwap = 0;
        for(int j=0;j<=n-2;j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        if(didSwap == 0) break;
    }
}