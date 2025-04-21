class RecentCounter {
private:
    std::queue<int> requests;

public:
    RecentCounter() {
        
    }

    int ping(int t) {
        requests.push(t); // Add current ping

        // Remove requests that are older than t - 3000
        while (!requests.empty() && requests.front() < t - 3000) {
            requests.pop();
        }

        return requests.size(); // Number of recent calls
    }
};


/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */