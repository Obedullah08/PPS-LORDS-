
def palindrome_checker(v):
       
        a = 101
        copy = a
        rev = 0

        while a > 0:
            rev = rev * 10 + a % 10
            a = a // 10

        if copy == rev:
                print("the given number is a palindrome")

        else:
                print("the given number is not a palindrome") 

    palindrome_checker(1212)



