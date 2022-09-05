// problem link : https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=row-with-max-1s



class Solution{
public:
    // calculate first row ones after that check if next row has greater number of one or not 
    // it will take O(n + m) time 
    

	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int index = 0;
	    int j = m - 1;
	    for(int i=0;i<n;i++){
	        bool f = false;
	        while(j >= 0 && arr[i][j] == 1){
	            j--;
	            f = true;
	        }
	        if(f){
	            index = i;
	        }
	    }
	    
	    if(index == 0 && arr[0][m-1] == 0){
	        return -1;
	    }
	    else return index;
	    
	}

};
