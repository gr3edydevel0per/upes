"""
Task is to count the number of notes required to 


    """


amount = int(input("Please enter the amount : "))


num2k = amount//2000
temp= amount%2000
num5k=temp//500
left = temp%500
num1k = left//100
print(f" 2000-> {num2k} 500-> {num5k} 100->{num1k}")