#include <iostream>

struct Card
{
    int face;   //number on face
    int shape;  //0 = lower tier: diamond/club 1 = higher tier: heart/spade
    int color;  //0 = black        1 = red
};

int main()
{
    //Initialize 4 of 52 cards {face, shape, color}
    struct Card deck[52] = {{1,0,0}, {2,0,0}, {3,0,0}, {4,0,0}}
    
    printf("%d", deck[0].face);

    printf("%d", deck[0].shape);

    return 0;
}
