# Roman-to-Integer--LeetCode
Roman to Integer - LeetCode (Day - 2 of #100daysCodingChallenge - DSA)

Hey coders, Welcome again!!
Today, i have solved Roman to Integer problem on LeetCode. 

Problem : 
The input is pretty simple and straight forward, it is a string i.e Roman Number. Roman numbers only contain I, V, X, L, C, D, M. The range of given input i.e roman number is from 1 to 3999. 

How i solved?
I have followed brute-force approach to convert the roman number(in string format) to integer. Used for loops, some variables and if statements to solve this problem. Iterate the loop, monitoring the each character of string(Roman Number) and checking the conditions of what character it is from the fixed letters of Roman Numbering System. Write the possible conditions and checked all of them to get actual output.

Variables i used?
"add" of type int.
To update the "add" variable to sum up all the corresponding integer values of roman characters.
"ch" of type char.
To store the next index/character of current index/character of iterable string.
"c" of type int.
To track which condition is executed.

Conditions i wrote?
1) Whether the current index/character of string is I or V or X or L or C or D or M.
   1.1) if it is V or L or D or M, then updating the "add" variable by storing the corresponding integer value of its.
2) Whether it is I or V or X
   2.1) if 'I', then updating the "add" variable by checking 3 conditions.
        Condition - 1
        if next index/character of 'I' is 'V', then adding 4 to the "add" Variable.
        Condition - 2 
        else if it is 'X', then adding 9.
        Condition - 3
        None of them, then moving to the next index/character.
   2.2) if 'X', then updating the "add" variable by checking 3 conditions.
        Condition - 1
        if next index/character of 'X' is 'L', then adding 40 to the "add" Variable.
        Condition - 2 
        else if it is 'C', then adding 90.
        Condition - 3
        None of them, then moving to the next index/character.
   2.3) if 'C', then updating the "add" variable by checking 3 conditions.
        Condition - 1
        if next index/character of 'C' is 'D', then adding 400 to the "add" Variable.
        Condition - 2 
        else if it is 'M', then adding 900.
        Condition - 3
        None of them, then moving to the next index/character.
   if any of the above condition is triggered, then setting the value of "c" variable to 1 which is used for skipping the iteration by using the keyword "continue" for next index/character, Why this step is 
   crucial and necessary? because i already added the value directly by subtracting the corresponding integer values of adjacent characters( current, next), if done so, it unnecessarily triggers the 1.1 condition 
   discussed above which leads to wrong output.


Yeah, my code mate!! that's how i solved. It took 2 Hrs 05 Minutes to write the above code. Ok, by solving more problems, i can reduce my time spending to code and increase speed. And also, the next step here after this is, i will solve this problem using "Hash Table" or "Hash Map" whatever it is to optimize the code and increase efficiency. I will update here when it's done. Bye bye coder!!!

