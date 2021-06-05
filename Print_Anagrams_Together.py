Given an array of strings, return all groups of strings that are anagrams. The groups must be created in order of their appearance in the original array. Look at the sample case for clarification.


Example 1:

Input:
N = 5
words[] = {act,god,cat,dog,tac}
Output: 
god dog
act cat tac
Explanation:
There are 2 groups of
anagrams "god", "dog" make group 1.
"act", "cat", "tac" make group 2.
Example 2:

Input:
N = 3
words[] = {no,on,is}
Output: 
no on
is
Explanation:
There are 2 groups of
anagrams "no", "on" make group 1.
"is" makes group 2. 

Your Task:
The task is to complete the function Anagrams() that takes a list of strings as input and returns a list of groups such that each group consists of all the strings that are anagrams.


Expected Time Complexity: O(N*|S|*log|S|), where |S| is the length of the strings.
Expected Auxiliary Space: O(N*|S|), where |S| is the length of the strings.


Code :
Approach: 
  1) First sort the words within the word
  2) after sorting the words which are anagrams will have same order of sequences so keeping those same sequences make a dictionary and to that dictionary attach the words which
      are same word formation after sorting.
For Input:
5
act god cat dog tac
your output is: 
{'dgo': ['god', 'dog'], 'act': ['act', 'cat', 'tac']}
act cat tac 
god dog 

code:
    d={} 
    for i in words:
        x="".join(sorted(list(i))) #convert the word into list then sort it using sorted function. after sorting the words make the string.
        if x in d: #this is very nice check whether the word exist in the dictionary, if it does exist just append the dictionary.
            d[x].append(i)
        else:
            d[x]=[i] #best way to make the right hand side as dictionary.
    print(d)
    return sorted(d.values())
