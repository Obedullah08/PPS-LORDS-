import random
com = random.randint(1,50)
tries = 0

while True:
    tries = tries + 1
    hum = int(input("pleae guess the number :-"))

    if hum == com:
        print(f"congratulations you have won the game in {tries} tries")
        break

    elif hum > com:
        print("sorry please guess a lower number")

    elif hum < com:
        print("sorry please guess a higher number")    

        
















