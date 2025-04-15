class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
    queue<int> q;
    for (int s : students) q.push(s);

    int index = 0;
    int count = 0;

    while (!q.empty() && count < q.size()) {
        if (q.front() == sandwiches[index]) {
            q.pop();
            index++;
            count = 0;
        } else {
            q.push(q.front());
            q.pop();
            count++;
        }
    }

    return q.size();
}
};