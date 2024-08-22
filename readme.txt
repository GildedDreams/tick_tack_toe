This is the official documentation for creating this tick tack toe program in C.

***********************FOOTNOTES****************************************************
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


**************************DAILY LOGS********************************************************
21/08/2024
1. in the main function, i created a for loop that prints something like
 1 2 3 
 4 5 6
 7 8 9
where user can select the position where first 0 is to be put. 

2. i accepted the index no. from 1 to 9 from the user as "input".
3. i created a function called accept_ip which inputs the value of a given position
   in the array as 0 according to user input.

22/08/2024
1. At this point i realised that i can do the same thing with one dimensional array, which will be far more simpler to manipulate. 
   therefore, i made the necessary changes.
2. I created a print function that prints the grid whenever called.
3. I also thought of initialising the entire array with 99 as sentinel value.
