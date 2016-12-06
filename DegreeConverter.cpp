/*==============================================================================================================*
 
    @file     DegreeConverter.cpp
    @author   Nadav Matalon
    @license  MIT (c) 2016 Nadav Matalon
    Set of function for converting degrees Celsuis and Fahrenheit

    Rev 1.0 - First release (15.9.16)

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

#include "Arduino.h"
#include "DegreeConverter.h"

/*==============================================================================================================*
    CONVERT °C TO °F (I)
 *==============================================================================================================*/

float DegreeConverter::conCtoF(int valC) {
    return (valC * 1.8) + 32;
}

/*==============================================================================================================*
    CONVERT °C TO °F (II)
 *==============================================================================================================*/

float DegreeConverter::conCtoF(float valC) {
    return (valC * 1.8) + 32;
}

/*==============================================================================================================*
    CONVERT °C TO °F (III)
 *==============================================================================================================*/

float DegreeConverter::conCtoF(double valC) {
    return (valC * 1.8) + 32;
}

/*==============================================================================================================*
    CONVERT °F TO °C (I)
 *==============================================================================================================*/

float DegreeConverter::conFtoC(int valF) {
    return (valF - 32.0) * (5.0 / 9.0);
}

/*==============================================================================================================*
    CONVERT °F TO °C (II)
 *==============================================================================================================*/

float DegreeConverter::conFtoC(float valF) {
    return (valF - 32.0) * (5.0 / 9.0);
}

/*==============================================================================================================*
    CONVERT °F TO °C (III)
 *==============================================================================================================*/

float DegreeConverter::conFtoC(double valF) {
    return (valF - 32.0) * (5.0 / 9.0);
}

/*==============================================================================================================*
    CONVERT °Cx16 TO °C
 *==============================================================================================================*/

float DegreeConverter::conC16toC(int valC16) {
    return ((float)valC16 / 16.0);
}

/*==============================================================================================================*
    CONVERT °Fx16 TO °F
 *==============================================================================================================*/

float DegreeConverter::conF16toF(int valF16) {
    return (valF16 / 16.0);
}

/*==============================================================================================================*
    CONVERT °Cx16 TO °Fx16
 *==============================================================================================================*/

int DegreeConverter::conC16toF16(int valC16) {
    return ((((long)valC16 * 18) + 5120) / 10);
}

/*==============================================================================================================*
    CONVERT °Fx16 TO °Cx16
 *==============================================================================================================*/

int DegreeConverter::conF16toC16(int valF16) {
    return (int)((long(valF16) - 512) * (5.0 / 9.0));
}

/*==============================================================================================================*
    ROUND TO NEAREST 0.5°C
 *==============================================================================================================*/

float DegreeConverter::roundC(float valC) {
    if (valC > 0) return (int)(((valC) * 2.0) + 0.5) / 2.0;
    else if (valC < 0) return (int)(((valC) * 2.0) - 0.5) / 2.0;
    else return 0;
}

/*==============================================================================================================*
    ROUND TO NEAREST 0.5°C
 *==============================================================================================================*/

float DegreeConverter::roundC(double valC) {
    if (valC > 0) return (int)(((valC) * 2.0) + 0.5) / 2.0;
    else if (valC < 0) return (int)(((valC) * 2.0) - 0.5) / 2.0;
    else return 0;
}
