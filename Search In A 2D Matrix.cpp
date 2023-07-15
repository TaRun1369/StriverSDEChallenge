// bool searchMatrix(vector<vector<int>>& mat, int target) {
//      pair<int,int> low,high;
//     int M = mat.size();
//     int N = mat[0].size();
//      low = make_pair(0,0);
//      high = make_pair(M-1,N-1);   
//     while(high.first > low.first && high.second> low.second){
//         pair<int,int> mid;
//         mid = make_pair((low.first + high.first)/2 ,(low.second + high.second)/2 );

//         if(mat[mid.first][mid.second] == target){
//             return true;
//         }
//         else if(mat[mid.first][mid.second] < target){
//             low.first = mid.first;
//             low.second = mid.first;
//         }
//         else{
//            high.first = mid.first;
//             high.second = mid.first; 
//         }
//     }

//     return false;
// }


bool searchMatrix(vector<vector<int>>& mat, int target) {

    int m=mat.size();

    int n=mat[0].size();

         int i=0;

   int j=n*m-1;

   int mid=(i+j)/2;

   while(i<=j){

   int row=mid/n;

   int col=mid%n;

  if(mat[row][col]==target){

      return true;

  }

  else  if(mat[row][col]>target){

      j=mid-1;

  }

  else{

 i=mid+1;

  }


 

       mid=(i+j)/2;

   }

   return false;

}