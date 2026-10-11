import random
choices = ["rock", "paper", "scissor"]
com = random.choice(choices)
tries = 0

while True:
    tries = tries + 1
    hum = (input("please tell your move:-"))

    if hum == com:
        print("draw try again")    

    elif hum == "rock" and com == "scissor":
        print(f"congratulations you have won the game in {tries} tries") 

    elif hum == "paper" and com == "rock":
        print(f"congratulations you have won the game in {tries} tries") 

    elif hum == "scissor" and com == "paper":
        print(f"congratulations you have won the game in {tries} tries")
        break

    else:
        print("sorry you have lost the game")

            





























