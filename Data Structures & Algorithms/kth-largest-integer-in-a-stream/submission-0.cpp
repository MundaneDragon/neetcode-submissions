class KthLargest {
public:
    KthLargest(int k, const std::vector<int>& nums) : k(k) {
        for (int num : nums) {
            add(num);
        }
    }

    int add(int val) {
        minHeap.push(val);
        
        // If heap size exceeds k, drop the smallest element
        if (minHeap.size() > k) {
            minHeap.pop();
        }
        
        // The top is now the kth largest element
        return minHeap.top();
    }

private:
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
    int k;
};
