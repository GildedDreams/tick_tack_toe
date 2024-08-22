# Official documentation

# Footnotes
1. i decided to create a tick tak toe game using c language.
It sure will be quite inefficent to do so in C language, but let us see how it turns out.

2. the basic idea is to use a 2 dimensional array to accept values of o in the grid,
and then to prompt the system to generate an x, and then prompt the user to enter yet another o.

3. now offcourse it will be better if the system makes decisions on where to enter an x so as to win
based on user input, but it will be quite complicated (but not impossible to do so) therefore at this stage
we will prompt system to insert x at random positions.

4. it is also important to know when to stop the process and declare a clear winner after a certain point.
But first we should focus on how to completely fill the grid with x and 0.

5. for the sake of simplicity, first i will use 0 and 1 instead of x or o in the game.


# Changelogs
## 21/08/2024
1. in the main function, i created a for loop that prints something like
   1 2 3
   4 5 6
   7 8 9
   where user can select the position where first 0 is to be put.

2. i accepted the index no. from 1 to 9 from the user as "input".
3. i created a function called accept_ip which inputs the value of a given position
   in the array as 0 according to user input.

## 22/08/2024
1. At this point i realised that i can do the same thing with one dimensional array, which will be far more simpler to manipulate.
   therefore, i made the necessary changes.
2. I created a print function that prints the grid whenever called.
3. I also thought of initialising the entire array with 99 as placeholder value.
4. now after all this, i want the system to insert a 0 at any random position, and then prompt the user again to enter a position to
   insert a 1 after that.
5. i thought of writing a user defined function "generate_0" using the standard library function rand to generate a random number between
   1 to 9, and the system will only insert a 0 at that random position if and only if 99 is present at that location. if there is already
   a 0 or 1 present at that location, another random index will be generated for the system to insert a 0 and the condition will be
   checked again and again.
6. Now, i want the process from taking input from user to generating a 0 by the system to be continued again and again untill all of the
   positions in the grid are not filled by either 0s or 1s. to repeat this process, in the main function i use a for and if loop to check
   if any of the positions with 99 are remaining.

[arnav]
I did a few changes to the code, resulting in some main features to be working properly:
1. fixed up the code indentation lol(no, placing the bracket right after the function declaraton is not correct)
2. the error handling function works correctly now
3. placed the user input code inside a do...while loop so that it will loop until the user enters a valid answer

Now, the user can enter where they want to enter the value, and the computer will randomly do the same. The user cannot select an already placed square, only an empty square can be selected
There are a couple of things I want to add, though. The functionality to check if there are 3 0s or 1s in a row can be added, so the game can end, declaring a winner.
