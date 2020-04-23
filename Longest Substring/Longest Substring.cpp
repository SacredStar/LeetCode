#include <vector>
#include <string>
#include <iostream>
#include <stack>

using namespace std;

int lengthOfLongestSubstring(string s) {
    int max = 0;
    for (int j = 0; j < s.size(); j++)
    {
        int Arr[256] = { 0 };
        int len = 0;
        int i = j;
        for (; i < s.size(); i++)
        {
            if (Arr[(int)s[i]] == 0)
            {
                len++;
                Arr[(int)s[i]]++;
            }
            else
                break;
        }
        if (max < len)
            max = len;
        if (s.size() == i)
            break;
    }
    return max;
}


void main() {
    cout << lengthOfLongestSubstring("bbbbbbb");
}