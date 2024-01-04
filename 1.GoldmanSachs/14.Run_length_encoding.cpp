// tc -> O(n), sc -> O(1)
string encode(string src)
{     
  //Your code here 
  string ans = "";
  int cnt = 1;
  for(int i=1; i<=src.size(); i++){
      if(src[i-1] != src[i]){
          ans += src[i-1];
          ans += to_string(cnt);
          cnt = 1;
      }
      else{
          cnt += 1;
      }
  }
  return ans;
}     