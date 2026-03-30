class Solution {
public:
    vector<int> minInterval(vector<vector<int>>& intervals, vector<int>& queries) {
     sort(intervals.begin(), intervals.end());

        // 2. Pair queries with their original indices and sort them
        int n = queries.size();
        vector<pair<int, int>> sortedQueries;
        for (int i = 0; i < n; ++i) {
            sortedQueries.push_back({queries[i], i});
        }
        sort(sortedQueries.begin(), sortedQueries.end());

        // 3. Min-heap stores {size, end_time}
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        vector<int> res(n, -1);
        int i = 0; // Pointer for intervals

        for (auto& [qVal, qIdx] : sortedQueries) {
            // Add all intervals that could potentially cover this query
            while (i < intervals.size() && intervals[i][0] <= qVal) {
                int left = intervals[i][0];
                int right = intervals[i][1];
                minHeap.push({right - left + 1, right});
                i++;
            }

            // Remove intervals from the top that end before the current query
            while (!minHeap.empty() && minHeap.top().second < qVal) {
                minHeap.pop();
            }

            // If heap isn't empty, the top is the smallest valid interval
            if (!minHeap.empty()) {
                res[qIdx] = minHeap.top().first;
            }
        }

        return res;

    }
};