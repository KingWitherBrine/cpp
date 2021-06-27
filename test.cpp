#include "Bubble.h"
#include <vector>
#include <list>

int backgroundImages[10]; 
std::list<Bubble> bubbles(); // use the std namespace and instantiate it
std::vector<Bubble> bubbles_two(); // same here
Bubble b;

void AppMain()
{
    loadImages();
    ViewAdd(backgroundImages[8], 0,0);
    b = Bubble();
    b.velocity = Vector2D(9,4);

    //I know this can't be right..
    bubbles.push_back(b); // std::list also defines the method push_front
    bubbles_two.push_back(b);
}