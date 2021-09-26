# Vending-machine

Problem Statement 
The purpose of this homework is to extend Assignment 1 Change Maker to act as a 
vending machine. 
 Directions 
1. Restrict denominations to 1, 2, 5, and 10. 
2. Restrict sales prices to not include cents. 
3. Ask for the amount tendered by denomination. That is, instead of entering a value 
such as Rs. 29, ask for how many 1s, 2s, 5s, and 10s. 
4. Do not display zero denominations. 
5. Real vending machines make repeated sales and maintain a reserve of coins stored 
inside the machine. Over time, the coin reserve can exceed its capacity or run out 
of a denominations of coins completely. If a denomination reserve exceeds it 
capacity; the excess simply goes into an overflow bin. If a denomination goes to 
low, smaller denominations can substitute for larger denominations that are 
empty. Eventually, it is possible that a “Insert correct change only” lamp must 
light, or that an “out of change” condition exists, in which case money may need 
to be returned to the customer. Convert your program to run in a loop, assume 
that 100 of each coin are preloaded, and make sales repeatedly until a 
denomination is empty. Continue until change cannot be made. 
