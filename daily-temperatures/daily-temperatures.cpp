class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        int n = temperatures.size();
        vector<int>nge(n, 0); 
        stack<int>st;
        
		//오르쪽에서 왼쪽으로 이동
        for(int i = n-1; i>=0; --i){
			
			// s.top() is the index of elements so we put that index inside temperatures vector to check

            while(!st.empty()&&temperatures[st.top()] <= temperatures[i])
                st.pop();
				
            // if stack not empty, then we have some next greater element, 
			// so we take distance between next greater and current temperature
			// as we are storing indexes in the stack
            if(!st.empty())
                nge[i] = st.top()-i; // distance between next greater and current
            
			// push the index of current temperature in the stack,
			// same as pushing current temperature in stack
           
            st.push(i);
        }
        
        return nge;
    }
};