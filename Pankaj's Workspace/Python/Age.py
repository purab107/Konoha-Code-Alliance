# Python program to calculate age 
import datetime

name=input("Enter your name: ").capitalize
print(f"Hey, {name} \n")

Current_Year = datetime.datetime.today()

while True:
    try:
        birth_year=int(input("Enter your Birth year: "))

        if birth_year <= Current_Year.year:
            age = Current_Year.year-birth_year
            print(f"{name}, You are {age} years old")
            break
        else:
            print("NOT POSSIBLE")
            
    except ValueError:
        print("Please, Enter a Valid Year")



