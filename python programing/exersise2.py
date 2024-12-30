#  Good Morning Sir 
import time
timehours =  int(time.strftime("%H"))
print(timehours)
if(timehours<=11):
    print("good morning")
elif(timehours>=12 and timehours<=16):
        print("good afternoon")
elif(timehours>=17 and timehours<=19):
      print("good evening")
else:
      print("good night")