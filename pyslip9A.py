# Write a Python script using class to reverse a string word by word

class Solution:
    def rev_words(self, s):
        return ' '.join(reversed(s.split()))

s = Solution()
print(s.rev_words('hello world'))
