# PYTHON PRACTICE PROGRAMS
# For Loop and While Loop Questions


def question1():
    n = int(input("Enter your number: "))
    for i in range(n, 0, -1):
        print(i)


def question2():
    n = int(input("Enter your number: "))
    for i in range(1, n + 1):
        if i % 2 != 0:
            print(i)


def question3():
    n = int(input("Enter your number: "))
    for i in range(1, n + 1):
        print(i * i)


def question4():
    n = int(input("Enter your number: "))
    total = 0
    for i in range(2, n + 1, 2):
        total += i
    print("Even sum =", total)


def question5():
    n = int(input("Enter your number: "))
    count = 0
    for i in range(1, n + 1):
        if i % 3 == 0:
            count += 1
    print("Count =", count)


def question6():
    n = int(input("Enter your number: "))
    for i in range(1, n + 1):
        print(i)


def question7():
    n = int(input("Enter your number: "))
    total = 0
    for i in range(1, n + 1):
        total += i
    print("Sum =", total)


def question8():
    n = int(input("Enter your number: "))
    for i in range(1, n + 1):
        if i % 5 == 0:
            print(i)


def question9():
    n = int(input("Enter your number: "))
    total = 0
    for i in range(1, n + 1, 2):
        total += i
    print("Odd sum =", total)


def question10():
    n = int(input("Enter your number: "))
    count = 0
    for i in range(1, n + 1):
        if i % 2 == 0:
            count += 1
    print("Even count =", count)


def question11():
    n = int(input("Enter your number: "))
    while n > 0:
        print(n % 10)
        n //= 10


def question12():
    n = int(input("Enter your number: "))
    rev = 0
    while n > 0:
        rev = rev * 10 + n % 10
        n //= 10
    print("Reversed number =", rev)


def question13():
    n = int(input("Enter your number: "))
    i = 1
    while i <= n:
        print(i)
        i += 1


def question14():
    n = int(input("Enter your number: "))
    while n >= 1:
        print(n)
        n -= 1


def question15():
    n = int(input("Enter your number: "))
    total = 0
    i = 1
    while i <= n:
        total += i
        i += 1
    print("Sum =", total)


# Main menu
while True:
    print("\n===== PYTHON PRACTICE MENU =====")
    for i in range(1, 16):
        print(f"{i}. Question {i}")
    print("0. Exit")

    choice = input("Choose a question: ")

    if choice == "0":
        print("Goodbye!")
        break

    elif choice.isdigit() and 1 <= int(choice) <= 15:
        questions = {
            1: question1,
            2: question2,
            3: question3,
            4: question4,
            5: question5,
            6: question6,
            7: question7,
            8: question8,
            9: question9,
            10: question10,
            11: question11,
            12: question12,
            13: question13,
            14: question14,
            15: question15
        }

        questions[int(choice)]()

    else:
        print("Invalid choice. Please try again.")