# cs50x_22_mario_more
Challenge cs50x mairio more

Here is my solution for Mario More problem set 1, feel free to comment

World 1-1
Toward the beginning of World 1-1 in Nintendo’s Super Mario Brothers, Mario must hop over adjacent pyramids of blocks, per the below.

![pyramids](https://user-images.githubusercontent.com/38475353/215298396-9fcbd5d1-47fd-4974-b247-891dd3521e59.png)
screenshot of Mario jumping over adjacent pyramids

Let’s recreate those pyramids in C, albeit in text, using hashes (#) for bricks, a la the below. Each hash is a bit taller than it is wide, so the pyramids themselves will also be taller than they are wide.

   #  #
  ##  ##
 ###  ###
####  ####
The program we’ll write will be called mario. And let’s allow the user to decide just how tall the pyramids should be by first prompting them for a positive integer between, say, 1 and 8, inclusive.

Here’s how the program might work if the user inputs 8 when prompted:

$ ./mario
Height: 8
       #  #
      ##  ##
     ###  ###
    ####  ####
   #####  #####
  ######  ######
 #######  #######
########  ########

Here’s how the program might work if the user inputs 4 when prompted:

$ ./mario
Height: 4
   #  #
  ##  ##
 ###  ###
####  ####
Here’s how the program might work if the user inputs 2 when prompted:

$ ./mario
Height: 2
 #  #
##  ##
And here’s how the program might work if the user inputs 1 when prompted:

$ ./mario
Height: 1
#  #
If the user doesn’t, in fact, input a positive integer between 1 and 8, inclusive, when prompted, the program should re-prompt the user until they cooperate:

$ ./mario
Height: -1
Height: 0
Height: 42
Height: 50
Height: 4
   #  #
  ##  ##
 ###  ###
####  ####
Notice that width of the “gap” between adjacent pyramids is equal to the width of two hashes, irrespective of the pyramids’ heights.

