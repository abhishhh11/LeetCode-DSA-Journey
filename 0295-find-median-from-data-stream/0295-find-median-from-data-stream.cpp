class MedianFinder {
public:
    priority_queue<int> pq; // maxHeap
    priority_queue<int, vector<int>, greater<int> > p; // minHeap
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(pq.size() ==0 || num < pq.top()) pq.push(num);
        else p.push(num);

        if(pq.size() > p.size() +1) {
            p.push(pq.top());
            pq.pop();
        }
        else if(p.size() > pq.size() +1) {
            pq.push(p.top());
            p.pop();
        }
    }
    
    double findMedian() {
        if(pq.size() == p.size()) return (pq.top() + p.top())/2.0;

        else if(pq.size() > p.size()) return pq.top();
        else return p.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */