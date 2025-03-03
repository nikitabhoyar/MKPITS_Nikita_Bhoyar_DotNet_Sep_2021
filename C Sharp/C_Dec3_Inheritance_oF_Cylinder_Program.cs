﻿using System;
using System.Collections.Generic;
using System.Text;

namespacem C_Dec3_Inheritance_oF_Cylinder_Program
{
    class Cylinder : Circle
    {
        public int Height { get; set; }

        public Cylinder()                                                  //default
        {
            Height = 100;
            //Radius = 12;                                                 //radius is derived in classes
        }
        public Cylinder(int h, int r, int x, int y) : base(r, x, y)     //parameterised constructor
        {
            Height = h;
        }                                                                //2*pi*r*r+2(pi*r*r)+2(pi*r*h)
        public new double Area()
        {
            return 2 * base.Area() + 2 * Math.PI * Radius * Height;
        }

    }

}
  
