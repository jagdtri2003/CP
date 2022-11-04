"""
Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

 

Example 1:

Input: s = "hello"
Output: "holle"
Example 2:

Input: s = "leetcode"
Output: "leotcede"

"""

def reverseVowels(s):

    vowels = {'a','A','e','E','i','I','o','O','u','U'}
    s = list(s)

    ### extract all vowels from s
    vowelInS = [c for c in s if c in vowels]

    ### replace the vowels in s with the reversed ones
    for i in range(len(s)):
        if s[i] in vowels:
            s[i] = vowelInS.pop(-1)

    return ''.join(s)

s="LeetCodE"
print(reverseVowels(s))