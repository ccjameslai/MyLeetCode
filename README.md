# My LeetCode

### **Goat Latin (824)**

1. Get the index of space

2. Fetch each word

3. Transform those words in 3 rules

4. Concatenate them

**check out the code** [here](https://github.com/ccjameslai/MyLeetCode/blob/master/code/GoatLatin.cpp)

### **Two Sum (1)**

1. Two for loops to find two elements, which adding these numbers equals the target

**check out the code** [here](https://github.com/ccjameslai/MyLeetCode/blob/master/code/TwoSum.cpp)

### **Replace All ?'s to Avoid Consecutive Repeating Characters (1576)**

1. Check the first char. If it is a question mark and the next char is also a question mark, directly assign to 'a'. 

2. If the next char is not a question mark, replace the first char not the same as the next.

3. Do the similiar thing at step 1 and 2. However, there is a little different thing at step 2. It not only checks the next char, but also the previous. 

**check out the code** [here](https://github.com/ccjameslai/MyLeetCode/blob/master/code/ReplaceQuestionMark.cpp)

### **Reverse Only Letters (917)**

1. Given a iterator i from head to tail and another iterator j from tail to head.

2. Check if i is larger than j. If it is positive, then stop the iteration.

3. Check if the i_th element of the string is alphabet. If it is negative, then continue the loop.

4. Check if the j_th element of the string is alphabet. If it is negative, then assign the previous index to j.

5. Swap the char of i_th and j_th.

**check out the code** [here](https://github.com/ccjameslai/MyLeetCode/blob/master/code/ReverseOnlyLetters.cpp)

### **Add Two Numbers (2)**

1. Determine the value of l1 and l2. If l1 or l2 is nullptr, the value is 0.

2. Sumarize l1 and l2 node by node. Be aware of the carry.

**check out the code** [here](https://github.com/ccjameslai/MyLeetCode/blob/master/code/AddTwoNumbers.cpp)
