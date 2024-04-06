//AlternateNegativePositive
//Variety Manitaing Order And Handling uneven Odds and evens
#include<bits/stdc++.h>
using namespace std;
  vector<int> RearrangebySign(vector<int>A, int n){
  // Define 2 vectors, one for storing positive 
  // and other for negative elements of the array.
  vector<int> pos;
  vector<int> neg;
  for(int i=0;i<n;i++){
    if(A[i]<0){
        neg.push_back(A[i]);
    }   
    else{
        pos.push_back(A[i]);
    }
  }
  if(pos.size()<neg.size()){
      for(int i=0;i<pos.size();i++){
        A[i*2]=pos[i];
        A[i*2+1]=neg[i];   
      }
      int index=pos.size()*2;
      for(int i=pos.size();i<neg.size();i++){
          A[index]=neg[i];
          index++;
      }
  }
  //if(pos.size()>=neg.size())
  else {
      for(int i=0;i<neg.size();i++){
          A[2*i]=pos[i];
          A[2*i+1]=neg[i];
      }
      int index=neg.size()*2;
      for(int i=neg.size();i<pos.size();i++){
          A[index]=pos[i];
          index++;
      }
  }
  return A;
}
int main() {
  // Array Initialisation.
  int n = 6;
  vector<int> A {1,2,-4,-5,3,4};

  vector<int> ans = RearrangebySign(A,n);
  
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }
  return 0;
}