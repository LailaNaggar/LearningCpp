#include "cons.h"
#include <iostream>
#include <string>

    ball::ball()
        {
            m_color="black";
            m_radius=10;
        };

    ball::ball(std::string color)
        {
            m_color=color;
            m_radius=10;
        };

    ball::ball(double radius)
        {
            m_color="black";
            m_radius=radius;
        };

    ball::ball(std::string color, double radius)
        {
            m_color=color;
            m_radius=radius;
        };

        void ball::print()
        {
            std::cout<<"The ball's color: "<<m_color<<"," <<" The balls radius "<<m_radius<<std::endl;
        };