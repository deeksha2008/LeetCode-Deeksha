class Solution {
public:
//     vector<int> majorityElement(vector<int>& v) {
   
// 	// Write your code here
// 	int cnt1,cnt2=0;
// 	int nums1=INT_MIN;
//     int nums2=INT_MIN;
// 	for(int i=0;i<v.size();i++)
// 	{
// 		if(cnt1==0 && nums2!=v[i])
// 		{
//              cnt1 = 1;
// 			nums1=v[i];
// 		}
// 		else if(cnt2==0 && nums1!=v[i])
// 		{
//              cnt2=1;
// 			nums2=v[i];
// 		}
// 		else if(v[i]==nums1)
// 		cnt1++;
// 		else if(v[i]==nums2)
// 		cnt2++;
// 		else{ 
// 		cnt1--;
// 		cnt2--;
// 		}
// 	}
// 	int cnt=0;
// 	 cnt2=0;
	
	
// 	for(int i=0;i<v.size();i++)
// 	{
// 		if(v[i]==nums1)
// 		cnt++;
// 		else if(v[i]==nums2)
// 		cnt2++;
		
// 	}
//     vector <int> ls;
// 	int n=v.size();
// 	int mini= int(n/3)+1;
// 	if(cnt>=mini)
//         ls.push_back(nums1);
// 	if(cnt2>=mini)
//         ls.push_back(nums2);
// 	//sort(ls.begin(),ls.end());
// 	return ls;
// } 
    
// };





vector<int> majorityElement(vector<int>& v) {
    int n = v.size(); //size of the array

    int cnt1 = 0, cnt2 = 0; // counts
    int el1 = INT_MIN; 
    int el2 = INT_MIN; 

    // Extended Boyer Moore's Voting Algorithm:
    for (int i = 0; i < n; i++) {
        if (cnt1 == 0 && el2 != v[i]) {
            cnt1 = 1;
            el1 = v[i];
        }
        else if (cnt2 == 0 && el1 != v[i]) {
            cnt2 = 1;
            el2 = v[i];
        }
        else if (v[i] == el1) cnt1++;
        else if (v[i] == el2) cnt2++;
        else {
            cnt1--, cnt2--;
        }
    }

    vector<int> ls; // list of answers

    
    cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == el1) cnt1++;
        if (v[i] == el2) cnt2++;
    }

    int mini = int(n / 3) + 1;
    if (cnt1 >= mini) ls.push_back(el1);
    if (cnt2 >= mini) ls.push_back(el2);

   
     sort(ls.begin(), ls.end()); //TC --> O(2*log2) ~ O(1);

    return ls;
}
};

