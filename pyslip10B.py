# Write a Python class to find validity of a string of parentheses, '(', ')', '{', '}', '[' ']’. These 
# brackets must be close in the correct order. 
# for example "()" and "()[]{}" are valid but "[)", "({[)]" and "{{{" are invalid.

class Validity:
    def is_valid(self, s):
        stack, pchar = [], {"(": ")", "{": "}", "[": "]"}
        for c in s:
            if c in pchar:
                stack.append(c)
            elif not stack or pchar[stack.pop()] != c:
                return False
        return not stack

print(Validity().is_valid("(){}[]"))
print(Validity().is_valid("()[{)}"))
print(Validity().is_valid("()"))
