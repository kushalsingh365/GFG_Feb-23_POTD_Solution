class Solution{
public:
    int maxInstance(string s){
        int arr[26]={0};
        
        for(int i=0;i<s.length();i++){
            arr[s[i]-'a']++;
        }
        int ans = min({arr[0],arr[1],arr[11]/2,arr[14]/2,arr[13]});
        return ans;
        
    }
   // }
};
