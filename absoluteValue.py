print("I made this Absolute Value Calculator on python because C was fucking my brain up")
var = input("variable: ")
operand = input("Type in the operand: ")
num = int(input("What is the number: "))
numb = int(input("What is the equation equal to: "))

def positive():
    resultpos = num + numb
    writepos = str(resultpos)
    print(var + ' = ' + writepos)

def negative():
    resultpos = num - numb
    writepos = str(resultpos)
    print(var + ' = ' + writepos)

if operand == '+':
    positive()
    negative()
else:
    print("This is for simple calculations only!")            