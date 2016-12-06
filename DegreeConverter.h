/*==============================================================================================================*
 
    @file     DegreeConverter.h
    @author   Nadav Matalon
    @license  MIT (c) 2016 Nadav Matalon
 
    Set of function for converting degrees Celsuis and Fahrenheit

    Rev 1.0 - First release (15.9.16)

 *===============================================================================================================*
 I  NTRODUCTION
 *===============================================================================================================*
 
    This library contains a set of functions for converting between degrees Celsius and Fahrenheit.

 *===============================================================================================================*
    LICENSE
 *===============================================================================================================*
 
    The MIT License (MIT)
    Copyright (c) 2016 Nadav Matalon

    Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated
    documentation files (the "Software"), to deal in the Software without restriction, including without
    limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
    the Software, and to permit persons to whom the Software is furnished to do so, subject to the following
    conditions:

    The above copyright notice and this permission notice shall be included in all copies or substantial
    portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT
    LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
    IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
    WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
    SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

 *==============================================================================================================*/

#if 1
__asm volatile ("nop");
#endif

#ifndef DegreeConverter_h
#define DegreeConverter_h

namespace Degreeconverter {
    
    class DegreeConverter {
        public:
            static float conCtoF(int valC);
            static float conCtoF(float valC);
            static float conCtoF(double valC);

            static float conFtoC(int valF);
            static float conFtoC(float valF);
            static float conFtoC(double valF);

            static float conC16toC(int valC16);
            static float conF16toF(int valF16);
            
            static int   conC16toF16(int valC16);
            static int   conF16toC16(int valF16);
            
            static float roundC(float valC);
            static float roundC(double valC);
    };
}

using namespace Degreeconverter;

#endif
