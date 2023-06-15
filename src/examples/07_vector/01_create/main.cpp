#include<iostream>
#include<vector>

using std::cout;
using std::vector;

int main()
{
    
    /*vector<int> nums{1, 10, 7};
    cout<<nums[0]<<"\n";
    nums[0] = 5;
    cout<<nums[0]<<"\n";
    cout<<"Size of nums: "<<nums.size()<<"\n";
    cout<<"Capacity of nums: "<<nums.capacity()<<"\n";
    
    nums.push_back(20);
    cout<<"Size of nums: "<<nums.size()<<"\n";
    cout<<"Capacity of nums: "<<nums.capacity()<<"\n";

    nums.push_back(15);
    nums.push_back(11);
    nums.push_back(21);
    cout<<"Size of nums: "<<nums.size()<<"\n";
    cout<<"Capacity of nums: "<<nums.capacity()<<"\n";*/
    

    //different ways to use vectors
    vector<int> nums0;
    nums0.push_back(5);//push back adds one element to the vector

    vector<int> nums1{1, 10, 7};

    cout<<nums1[0]<<"\n";

    vector<int> nums3(5, 100);
    for(auto n: nums3){
        cout<<n<<"\n";
    }
    cout<<"\n";
    vector<char> chrs{'a', 's'};

    return 0;
}