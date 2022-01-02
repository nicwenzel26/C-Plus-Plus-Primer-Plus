#include <iostream>
#include <string>

struct CandyBar
{
    std::string brandName;
    float weight;
    int calories;
};

int main(void)
{
    CandyBar candyBars[3];
    candyBars[0].brandName = "Mars";
    candyBars[0].weight    = 3.4;
    candyBars[0].calories  = 78;

    candyBars[1].brandName = "Luna";
    candyBars[1].weight    = 1.0;
    candyBars[1].calories  = 125;

    candyBars[2].brandName = "Belter";
    candyBars[2].weight    = 0.8;
    candyBars[2].calories  = 20;

    for (int i = 0; i < 3; i++)
    {
        std::cout << candyBars[i].brandName << ", " << candyBars[i].weight << ", " << candyBars[i].calories << std::endl;
    }

    return 0;

}