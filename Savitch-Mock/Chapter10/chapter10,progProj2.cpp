/*
Savitch, Chapter 10, programming project 2, page 642

A marathon society wants you to develop a program to keep track of runner's records.
For each race, your program should record the length of the race (in km), the name of each runner participating and the runner's finish time (time taken to finish race), in HH:MM::SS.
The program should also produce statistics for each race, such as longest and shortest time of all the runners and the average time of all the runners.
For each race, the name of the runner with the shortest time, together with what that time was should be recorded.
When the old record for a given race is broken, the program should announce that the old record of x time was broken.
It should then display the name of the new record holder and the new record. 

Program specifics
Record information should be stored in a file called records.txt
Statistics for each race should be stored as follows:
raceName longestTime shortestTime shortestTimeRunnerFirstName shortestTimeRunnerLastName averageTime

Information for each race should be provided in a different text file. These files must be in the following format:
raceName lengthOfRace //in km  
runner1LastName runner1FirstName runner1raceTime //in 24 hour format HH:MM::SS eg 06:00:00
runner2LastName runner2FirstName runner2raceTime
etc

*/