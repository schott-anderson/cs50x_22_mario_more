# cs50x_22_mario_more
Challenge cs50x mairio more

Here is my solution for Mario More problem set 1, feel free to comment

World 1-1
Toward the beginning of World 1-1 in Nintendo’s Super Mario Brothers, Mario must hop over adjacent pyramids of blocks, per the below.

![pyramids](https://user-images.githubusercontent.com/38475353/215298396-9fcbd5d1-47fd-4974-b247-891dd3521e59.png)
screenshot of Mario jumping over adjacent pyramids

Let’s recreate those pyramids in C, albeit in text, using hashes (#) for bricks, a la the below. Each hash is a bit taller than it is wide, so the pyramids themselves will also be taller than they are wide.

![image](https://user-images.githubusercontent.com/38475353/215298517-15cd19cc-763e-4d36-87d6-2716667a6aaa.png)

The program we’ll write will be called mario. And let’s allow the user to decide just how tall the pyramids should be by first prompting them for a positive integer between, say, 1 and 8, inclusive.

Here’s how the program might work if the user inputs 8 when prompted:

![image](https://user-images.githubusercontent.com/38475353/215298525-c13ed140-a77f-4e5e-a423-78dc5c08bf41.png)

Here’s how the program might work if the user inputs 4 when prompted:

![image](https://user-images.githubusercontent.com/38475353/215298537-7614f307-c11c-43ef-91ea-97271f60044a.png)

Here’s how the program might work if the user inputs 2 when prompted:

![image](https://user-images.githubusercontent.com/38475353/215298577-ea33804f-d218-4904-9313-95939234af09.png)

And here’s how the program might work if the user inputs 1 when prompted:

![image](https://user-images.githubusercontent.com/38475353/215298592-b1496137-a6d6-426b-9c98-9de3af5c9ee2.png)

If the user doesn’t, in fact, input a positive integer between 1 and 8, inclusive, when prompted, the program should re-prompt the user until they cooperate:

![image](https://user-images.githubusercontent.com/38475353/215298647-db7f017a-625a-4b7a-bc10-ccbc3617e6ee.png)

Notice that width of the “gap” between adjacent pyramids is equal to the width of two hashes, irrespective of the pyramids’ heights.

