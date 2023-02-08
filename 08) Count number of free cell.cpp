class Solution{
  public:
  vector<long long int> countZero(int n, int k, vector<vector<int>>& arr){
      //Code Here
      vector<long long  int> ans;
      unordered_map<int,int> rows;
      unordered_map<int,int> cols;
      int total= n*n;
      for(int i=0;i<k;i++){
          int r= arr[i][0]-1,c= arr[i][1]-1;
          if(rows.find(r)==rows.end()){
              int temp= cols.size();
              total-= (n-temp);
              rows[r]=1;
          }
          if(cols.find(c)==cols.end()){
              int temp= rows.size();
              total-= (n-temp);
              cols[c]=1;
          }
          ans.push_back(total);
      }
      return ans;
  }
};
