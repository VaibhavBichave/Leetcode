class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        sort(score.begin(), score.end(), [&](auto& s1, auto& s2) { return s1[k] > s2[k]; });
        return score;
    }
};