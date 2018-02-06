/* Savitch, pg 476, chapt 7, progproj11
Write a program to assign passengers seats in an airplane. Assume a small airplane with seat numbering as follows:
1 A B C D
2 A B C D
3 A B C D
4 A B C D
5 A B C D
6 A B C D
7 A B C D
The program should display the seat pattern, with an X marking the seats already assigned. 
For example, after seats 1A, 2B, and 4C are taken, the display should look like this:
1 X B C D
2 A X C D
3 A B C D
4 A B X D
5 A B C D
6 A B C D
7 A B C D
After displaying the seats available, the program prompts for the seat desired, the user types in a seat, and then the display of available seats is
updated. This continues until all seats are filled or until the user signals that the program should end. 
If the user types in a seat that is already assigned, the program should say that that seat is occupied and ask for another choice.
*/