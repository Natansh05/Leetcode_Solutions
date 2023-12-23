class Solution {
    private:

    void heapify(vector<int> &arr,int n,int i){
        ios_base::sync_with_stdio(0);
        int largest = i;
        int left = 2*i + 1;
        int right = 2*i + 2;

        if(left < n && arr[largest] < arr[left])
            largest = left;
        if(right < n && arr[largest] < arr[right])
            largest = right;

        if(largest !=i){
            swap(arr[largest],arr[i]);
            heapify(arr ,n,largest);
        }
    }

    void heapSort(vector<int> &arr,int n){
        ios_base::sync_with_stdio(0);
        int size = n;
        while(size > 1){
            swap(arr[size-1],arr[0]);
            size--;
            heapify(arr,size,0);
        }
    }

public:
    vector<int> sortArray(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        int n = nums.size();
        for(int i=n/2-1 ;i>=0;i--){
            heapify(nums,n,i);
        }

       heapSort(nums,n);
        return nums;
    }

    //Heap Sort is used here
    //T.C - O(nlogn)
    //S.C - O(n) {recursion stack space in worst condition}
};