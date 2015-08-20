//
//  main.cpp
//  Sum In Loop
//
//  Created by JLegendary on 8/20/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//   JLegendary@me.com
//


#include<iostream>

int main()
{
    int amountValue;
    int values;
    int valueSum;
    
    std::cout << "Input the amount of value to add, then values: \n";
    std::cin >> amountValue;
    
    while(amountValue>0)
    {
        std::cin >> values;
        valueSum += values;
        amountValue--;
    }
    
    std::cout<< "Total is " << valueSum << std::endl;
    
    return 0;
}