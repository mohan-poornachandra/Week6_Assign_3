#include<iostream>
#include<vector>
using namespace std;

 void setZeroes(vector<vector<int>>& matrix) {
        vector<int> row,col;
        for(int i=0;i<matrix.size();i++)
           for(int j=0;j<matrix[0].size();j++)
              if(matrix[i][j]==0){
                  row.push_back(i);
                  col.push_back(j);
              }
        int k=0;
        while(k<row.size())
        {
            for(int i=0;i<matrix.size();i++)
               matrix[i][col[k]]=0;

            for(int j=0;j<matrix[0].size();j++)
               matrix[row[k]][j]=0;

            k++;      
        }      
             
    }
int main()
{
    int m,n;
    cout<<"Enter order of matrix  ";
    cin>>m>>n;
    vector<vector<int>> arr(m,vector<int> (n));
    cout<<"Enter matrix elements: "<<endl;
    for(int i=0;i<m;i++)
      for(int j=0;j<n;j++)
        cin>>arr[i][j];

    setZeroes(arr);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
           cout<<arr[i][j]<<"  ";
        cout<<endl;   
    }


    
   
}