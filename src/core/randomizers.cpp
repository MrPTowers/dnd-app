#include<iostream>
#include<random>
#include<vector>


int randomizeAbilityScores(int low, int high) {
    
    std::cout << "Ability Scores: " << std::endl;
	return 0;
}

int randomizeDC(int level) {

    std::cout << "DC: " << std::endl;
	return 0;
}

int randomizePreparedSpells(int amount) {

    std::cout << "Prepared Spells:" << std::endl;

    return 0;
} 

/*import random
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


*/

/*import random

def roll_scores():
    scores = [random.randint(3, 18) for _ in range(6)]
    print(*scores)
    return sum(scores)

print("DND Ability Score Roller\n")

while True:
    total = roll_scores()
    while not (72 <= total <= 90):
        total = roll_scores()
    if input("Continue? (y/n) ").lower() == "n":
        break
*/

/*import random
import sys

spell_amount = int(sys.argv[1])
file = sys.argv[2]


def main():
    global spell_amount
    spells = []

    with open(file, 'r') as f:
        for line in f:
            spells.append(line.strip())

    randomized_spells = []

    while spell_amount > 0:

        random_spell = random.choice(spells)
        randomized_spells.append(random_spell)

        spells.remove(random_spell)
        spell_amount = spell_amount - 1

    print(randomized_spells)

if __name__ == "__main__":
    if len(sys.argv) == 3:
        main()
    else:
        print("Usage: python3 spell_randomizer.py <spell_amount> <spells_file>")
*/

