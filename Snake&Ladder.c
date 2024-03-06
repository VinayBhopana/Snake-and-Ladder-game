#include <stdio.h>

int main() {
    struct snake
    {
        int snake_head;
        int snake_tail;
    };
    struct ladder
    {
        int ladder_bottom;
        int ladder_top;
    };
    int no_snake,no_ladder;
    scanf("%d %d",&no_snake,&no_ladder);
    struct snake s[no_snake];
    struct ladder l[no_ladder];
    for(int i=0;i<no_snake;i++)
    {
        scanf("%d %d",&s[i].snake_head,&s[i].snake_tail);
    }
    for(int i=0;i<no_ladder;i++)
    {
        scanf("%d %d",&l[i].ladder_bottom,&l[i].ladder_top);
    }
    printf("Game started!\n");
    int dice;
    int sum;
    for(int j=0;j<12;j++)
    {
        scanf("%d",&dice);
        if(dice==0)
        {
            printf("Game ended bu user\nThank You\n");
            break;
        }
        else
        {
            printf("You rolled a %d\n",dice);
            sum+=dice;
            printf("You are now at %d position\n",sum);
            for(int i=0;i<no_snake;i++)
            {
                if(sum==s[i].snake_head)
                {
                    sum=s[i].snake_tail;
                    printf("Oh no! You got swallowed and went down to %d position\n",s[i].snake_tail);
                    continue;
                }
                else
                {
                    continue;
                }
                
            }
            for(int i=0;i<no_ladder;i++)
            {
                if(sum==l[i].ladder_bottom)
                {
                    sum=l[i].ladder_top;
                    printf("Congratulations! You climbed a ladder and moved to position %d \n",l[i].ladder_top);
                    continue;
                }
                else
                {
                    continue;
                }
            
        }
        if(j<12 && sum==50)
        {
            printf("You reached the end in %d dice rolls\n",j+1);
            break;
        }
        else if(j==11)
        {
            printf("Sorry you could not reach the end in 12 dice rolls\n Game over");
        }
        }
    }
    
    return 0;
}
