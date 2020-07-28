#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int j = 0;
    int cnt = m;
    for(int i = 0; i < n; i++)
    {
        while(1)
        {
            if(j < cnt)
            {
                if(nums1[j]>=nums2[i])
                {
                    nums1.erase(nums1.end()-1);
                    nums1.insert(nums1.begin()+j,nums2[i]);
                    j++;
                    cnt++;
                    break;
                }
                else
                {
                    j++;
                }
            }
            else
            {
                nums1.erase(nums1.begin()+cnt, nums1.end());
                nums1.insert(nums1.end(), nums2.begin()+i, nums2.end());
                return;
            }

        }
    }
}
int main() {
    vector<int> num1 = {1,2,3,0,0,0};
    vector<int> num2 = {2,5,6};
    merge(num1, 3, num2,3);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
