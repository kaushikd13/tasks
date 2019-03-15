count = int(input("How many even numbers you want to print:"))
print("The first %d even numbers are" %count, end = ' ')
counter = 0
for counter in range(0, (2 * count) - 1):
  if(counter % 2 == 0):
    print(" "+ str(counter), end = '')
print(".")