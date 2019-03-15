print("     MULTIPLICATION TABLE BOOK")
counter = 1
table_number = 1
while table_number <= 20:
    for counter in range(1, 21):
      product1 = table_number * counter
      product2 = (table_number + 1) * counter
      print("%2d x %2d = %3d\t      " %(table_number, counter, product1), end = ' ');
      print("%2d X %2d = %3d" %((table_number + 1), counter, product2));
    if table_number != 19:
      print("\n")
    table_number += 2