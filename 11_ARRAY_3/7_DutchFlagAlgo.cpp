#include<iostream>
#include<vector>
using namespace std;
void colorSort(vector<int>&v)
{
  int n = v.size();
  int low = 0;
  int mid = 0;
  int high = n-1;   // v.size()-1;
  // 1. Humesa mid ke bare me socho
  // 2. 0 to low-1 --> 0
  // 3. high+1 to end --> 2
  // 4. low to mid-1 --> 1
  while(mid<=high)
  {
    if(v[mid]==2)
    {
      int temp = v[mid];
      v[mid] = v[high];
      v[high] = temp;
      high--;
    }
    else if(v[mid]==0)
    {
      int temp = v[mid];
      v[mid] = v[low];
      v[low] = temp;
      mid++;
      low++;
    }
    else
      mid++;
  }
}

void display(vector<int>&v)
{
  for(int i=0; i<=v.size()-1; i++)
  {
    cout<<v[i]<<" ";
  }
  cout<<endl;
}

int main()
{
  int n;
  cout<<"Enter Array Size : ";
  cin>>n;
  vector<int>v;
  cout<<"Enter Array Elements : ";
  for(int i=0; i<=n-1; i++)
  {
    int q;
    cin>>q;
    v.push_back(q);
  }
  display(v);
  colorSort(v);
  display(v);
}