class Solution {
public:
   bool canConstruct(string ransomNote, string magazine) {
    vector<int> magazineCount(26, 0);

    for (char c : magazine) {
        magazineCount[c - 'a']++;
    }

    for (char c : ransomNote) {
        if (magazineCount[c - 'a'] > 0) {
            magazineCount[c - 'a']--;
        }
        else {
            return false;
        }
    }

    return true;
}
};