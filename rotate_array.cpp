
class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        // code here 
          for (int i=0;i<matrix.size();i++){
        for (int j=i+1;j<matrix[0].size();j++){
            swap(matrix[i][j], matrix[j][i]);
        }
        
    }
    int i=0;
    int j=matrix.size()-1;
    while(i<=j)
    {
        swap(matrix[i],matrix[j]);
        i++;
        j--;
    } 
    }
};