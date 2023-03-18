"""
PART B
Part B is compulsory
Activity 3
Write a program that lets user enter in a potentially unlimited series of subject marks from 0 to 100.
Ensure that the numbers entered are greater than 0 and less than 100. You cannot assume that the user
will enter an integer or a float. User can enter both float and integer values. If they input a negative
number or a number more than hundred you should continually prompt them to enter a valid number
until they do so. When the user enters a the line ”end” you should stop collecting marks.
Then use their input to generate a summary report that includes Total marks, Average mark, Highest
mark and the lowest mark. Sample output is given below.


Enter a mark, 0 to 100: apple
That's not a valid mark!

Enter a price, 0 to end: -5
Marks must be positive!

Enter a mark, 0 to 100: 10
Enter a mark, 0 to 100: 20
Enter a mark, 0 to 100: 30

Enter a mark, 0 to 100: 40
Enter a mark, 0 to 100: 50
Enter a mark, 0 to 100: end

Total marks: 150.0
Average marks: 30.0
Highest mark: 50.0
Lowest mark: 10.0


"""

mark_list = []

while True:
    
    mark = input("Enter a mark, 0 to 100:")
    if mark == "end":
        print(f"\nTotal marks:{sum(mark_list)}")
        print(f"Average marks:{sum(mark_list)/len(mark_list)}")
        print(f"Highest mark: {max(mark_list)}")
        print(f"Lowest mark: {min(mark_list)}")
        break
    elif float(mark) > 0:
        mark_list.append(float(mark))
    elif float(mark) < 0:
        print("Marks must be positive!")
        break
    else:
        print("That's not a valid mark!")
        break
