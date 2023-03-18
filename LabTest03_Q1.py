"""
 Write a Python function for checking the speed of drivers. 
 This function should have one parameter: speed.
  
i. If speed is less than 70, it should print “Ok”.

ii. Otherwise, for every 5km above the speed limit (70), it should give the driver one demerit point
    and print the total number of demerit points. For example, if the speed is 80, it should print:
    “Points: 2”.
    
iii. If the driver gets more than 12 points, the function should print: “License suspended”

"""

def Speed(speed):
    
    count = 0
    if speed <= 70:
        return "ok"
    else:
        nowSpeed = speed
        
        while nowSpeed > 70:
            count += 1
            nowSpeed -= 5
            if count > 12:
                return "License suspended"
                break
        return f"Count : {count}"  
    
if __name__=="__main__":
    speed = int(input("Input your speed :-" ))
    print(Speed(speed))


