import random
from datetime import datetime

print("DND Difficulty Class Generator\n\n")

print("Difficulties:\n")

print("\n\tEasy (Base 5)\n\tAverage(Base 10)\n\tModerate (Base 15)\n\tHard(Base 20)\n\tVery Hard(Base 25)\n\tImpossible (DC 30)")

programRun = True

while programRun == True:

    random.seed(datetime.now().timestamp())

    deviation = random.randint(-3,3)

    choice = str(input("\n\nInsert the first initial of the desired base difficulty: "))

    if choice.lower() == "e":
        print("\n\nDC: ", deviation + 5)
        
    elif choice.lower() == "a":
        print("\n\nDC: ", deviation + 10)

    elif choice.lower() == "m":
        print("\n\nDC: ", deviation + 15)

    elif choice.lower() == "h":
        print("\n\nDC: ", deviation + 20)

    elif choice.lower() == "v":
        print("\n\nDC: ", deviation + 25)

    elif choice.lower() == "i":
        print("\n\nDC: ", 30)

    else:
        print("\nIncorrect choice, try again.\n")

    leave = str(input("Continue program? (y/n): "))

    if leave == "n":
        programRun = False
    else:
        continue
