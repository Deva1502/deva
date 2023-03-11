#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void room1();
void room2();
void room3();
void room4();

int main()
{
    room1();  // Start the game in the first room
    
    return 0;
}

void room1()
{
    char choice[20];
    
    printf("You are in a dark room. There is a door to your left and a door to your right.\n");
    printf("What do you do? (type 'left' or 'right')\n");
    scanf("%s", choice);
    
    if (strcmp(choice, "left") == 0)
    {
        room2();
    }
    else if (strcmp(choice, "right") == 0)
    {
        room3();
    }
    else
    {
        printf("Invalid choice. Please try again.\n");
        room1();
    }
}

void room2()
{
    char choice[20];
    
    printf("You are in a small room with a table in the center. There is a key on the table.\n");
    printf("What do you do? (type 'take' or 'leave')\n");
    scanf("%s", choice);
    
    if (strcmp(choice, "take") == 0)
    {
        printf("You take the key and put it in your pocket.\n");
        room1();
    }
    else if (strcmp(choice, "leave") == 0)
    {
        printf("You leave the key on the table and return to the first room.\n");
        room1();
    }
    else
    {
        printf("Invalid choice. Please try again.\n");
        room2();
    }
}

void room3()
{
    char choice[20];
    
    printf("You are in a room with a staircase leading up and a staircase leading down.\n");
    printf("What do you do? (type 'up' or 'down')\n");
    scanf("%s", choice);
    
    if (strcmp(choice, "up") == 0)
    {
        room4();
    }
    else if (strcmp(choice, "down") == 0)
    {
        printf("You go down the stairs, but they lead to a dead end. You return to the first room.\n");
        room1();
    }
    else
    {
        printf("Invalid choice. Please try again.\n");
        room3();
    }
}

void room4()
{
    printf("Congratulations! You have found the treasure and won the game!\n");
}

