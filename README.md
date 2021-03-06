# My LeetCode

- ## **Goat Latin (824)**

1. Get the index of space

2. Fetch each word

3. Transform those words in 3 rules

4. Concatenate them

**check out the code** [here](https://github.com/ccjameslai/MyLeetCode/blob/master/code/GoatLatin.cpp)

- ## **Two Sum (1)**

1. Two for loops to find two elements, which adding these numbers equals the target

**check out the code** [here](https://github.com/ccjameslai/MyLeetCode/blob/master/code/TwoSum.cpp)

- ## **Replace All ?'s to Avoid Consecutive Repeating Characters (1576)**

1. Check the first char. If it is a question mark and the next char is also a question mark, directly assign to 'a'. 

2. If the next char is not a question mark, replace the first char not the same as the next.

3. Do the similiar thing at step 1 and 2. However, there is a little different thing at step 2. It not only checks the next char, but also the previous. 

**check out the code** [here](https://github.com/ccjameslai/MyLeetCode/blob/master/code/ReplaceQuestionMark.cpp)

- ## **Reverse Only Letters (917)**

1. Given a iterator i from head to tail and another iterator j from tail to head.

2. Check if i is larger than j. If it is positive, then stop the iteration.

3. Check if the i_th element of the string is alphabet. If it is negative, then continue the loop.

4. Check if the j_th element of the string is alphabet. If it is negative, then assign the previous index to j.

5. Swap the char of i_th and j_th.

**check out the code** [here](https://github.com/ccjameslai/MyLeetCode/blob/master/code/ReverseOnlyLetters.cpp)

- ## **Add Two Numbers (2)**

1. Determine the value of l1 and l2. If l1 or l2 is nullptr, the value is 0.

2. Add up l1 and l2 node by node. Be aware of the carry.

**check out the code** [here](https://github.com/ccjameslai/MyLeetCode/blob/master/code/AddTwoNumbers.cpp)

- ## **Middle of the Linked List (876)**

1. Find the size of the linked list, and calculate the value(index) of the middle.

2. For loop the linked list until the step equals the value(index) of the middle.

**check out the code** [here](https://github.com/ccjameslai/MyLeetCode/blob/master/code/MiddleoftheLinkedList.cpp)

- ## **Crawler Log Folder (1598)**

1. Increase one step if the string is neither "./" nor "../".

2. Decrease one step if the string is "../".

**check out the code** [here](https://github.com/ccjameslai/MyLeetCode/blob/master/code/CrawlerLogFolder.cpp)

- ## **Maximum Profit of Operating a Centennial Wheel (1599)**

1. Calculate profit and the number of people who are inlined and record the number of the rest of people for each loop in existed vector length.

2. Add up the profit of the rest of people if they existed.

**check out the code** [here](https://github.com/ccjameslai/MyLeetCode/blob/master/code/MaxProfitofWheel.cpp)

- ## **Pow(x, n) (50)**

   - recursive version
  
   1. Set the boundary condition.

   2. Split two sub-operation, Pow(x,a) * Pow(x,b) = Pow(x,n).

**check out the code** [here](https://github.com/ccjameslai/MyLeetCode/blob/master/code/Pow.cpp)

- ## **Teemo Attacking (495)**
  
   1. if the difference between current value and next in the vector is less than the duration, the result is added the difference.

   2. if the difference between current value and next in the vector is greater than the duration, the result is added the duration.
   
   3. at last, return the summation of the result and the duration

**check out the code** [here](https://github.com/ccjameslai/MyLeetCode/blob/master/code/TeemoAttacking.cpp)

- ## **Valid Parentheses (20)**
  
   1. Use stack to store left parentheses.
   
   2. if the stack is empty and right parentheses exist, return false
   
   3. if the stack is not empty but the top of stack can't match the current parentheses, return false.
   
   4. pop out the top item if it matches the current parentheses.
   
   5. finally, if the stack is empty, then return true.
   
**check out the code** [here](https://github.com/ccjameslai/MyLeetCode/blob/master/code/ValidParentheses.cpp)
