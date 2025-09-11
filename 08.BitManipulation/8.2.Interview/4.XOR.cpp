class Solution{	
	public:
        int find1toN(int n) {
	        if(n%4 == 1) return 1;
	        else if(n%4 == 2) return n+1;
	        else if(n%4 == 3) return 0;
	        else return n;
	    }
		int findRangeXOR(int l,int r){
			//your code goes here
            return (find1toN(l-1) ^ find1toN(r));
		}
};