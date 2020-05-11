#include <iostream>
#include <vector>

using namespace std;

double findMedian(vector<int>& a)
{
    // check for even case 
    if (a.size() % 2 != 0)
        return (double)a[a.size() / 2];
    if (a.size() == 1) {
        return a[0];
    }

    return (double)(a[(a.size() - 1) / 2] + a[a.size() / 2]) / 2.0;
}
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    if (nums1.size() == 0) {
        return findMedian(nums2);
    }
    if (nums2.size() == 0) {
        return findMedian(nums1);
    }
    auto med1 = findMedian(nums1);
    auto med2 = findMedian(nums2);

    return (findMedian(nums1) + findMedian(nums2)) / 2;
}

void main() {
    vector <int> nums1 = { 3 };
    vector <int> nums2 = { -2,-1 };
    cout << findMedianSortedArrays(nums1, nums2);
}