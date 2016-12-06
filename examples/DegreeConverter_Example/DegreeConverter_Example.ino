/* 
  DEGREE CONVERTER LIBRARY
  ------------------------
  
  INTRODUCTION
  ------------
  This sketch offers an illustration of using the various functions of the DegreeConverter library 
  
  BUG REPORTS
  -----------
  Please report any bugs/issues/suggestions at the GITHUB Repository of this library at: 
  https://github.com/nadavmatalon/DegreeConverter

  LICENSE
  -------
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
*/

#include "DegreeConverter.h"

void setup() {
    Serial.begin(9600);
    Serial.print(F("\n\nDEGREE CONVERTER"));
    Serial.print(F("\n----------------\n"));
    
    Serial.print(F("converting 0 degrees Celsius to degrees Fahrenheit ... "));
    Serial.print(DegreeConverter::conCtoF(0), 2);
    Serial.print(F(" degrees Fahrenheit\n\n"));
    
    Serial.print(F("converting 106.4 degrees Celsius to degrees Fahrenheit ... "));
    Serial.print(DegreeConverter::conCtoF(106.4), 2);
    Serial.print(F(" degrees Fahrenheit\n\n"));
    
    Serial.print(F("converting 0 degrees Fahrenheit to degrees Celsius ... "));
    Serial.print(DegreeConverter::conFtoC(0), 2);
    Serial.print(F(" degrees Celsius\n\n"));
    
    Serial.print(F("converting 281.76 degrees Fahrenheit to degrees Celsius ... "));
    Serial.print(DegreeConverter::conFtoC(281.76), 2);
    Serial.print(F(" degrees Celsius\n\n"));

    Serial.print(F("converting 1200 degrees Celsius x16 to degrees Celsius ... "));
    Serial.print(DegreeConverter::conC16toC(1200), 2);
    Serial.print(F(" degrees Celsius\n\n"));
    
    Serial.print(F("converting -1654 degrees Celsius x16 to degrees Celsius ... "));
    Serial.print(DegreeConverter::conC16toC(-1654), 2);
    Serial.print(F(" degrees Celsius\n\n"));
    
    Serial.print(F("converting 2480 degrees Fahrenheit x16 to degrees Fahrenheit ... "));
    Serial.print(DegreeConverter::conF16toF(2480), 2);
    Serial.print(F(" degrees Fahrenheit\n\n"));

    Serial.print(F("converting -104 degrees Fahrenheit x16 to degrees Fahrenheit ... "));
    Serial.print(DegreeConverter::conF16toF(-104), 2);
    Serial.print(F(" degrees Fahrenheit\n\n"));

    Serial.print(F("converting 752 degrees Celsius x16 to degrees Fahrenheit x16 ... "));
    Serial.print(DegreeConverter::conC16toF16(752));
    Serial.print(F(" degrees Fahrenheit x16\n\n"));

    Serial.print(F("converting -910 degrees Celsius x16 to degrees Fahrenheit x16 ... "));
    Serial.print(DegreeConverter::conC16toF16(-910));
    Serial.print(F(" degrees Fahrenheit x16\n\n"));

    Serial.print(F("converting 1107 degrees Fahrenheit x16 to degrees Celsius x16 ... "));
    Serial.print(DegreeConverter::conF16toC16(1107));
    Serial.print(F(" degrees Celsius x16\n\n"));

    Serial.print(F("converting -3609 degrees Fahrenheit x16 to degrees Celsius x16 ... "));
    Serial.print(DegreeConverter::conF16toC16(-3609));
    Serial.print(F(" degrees Celsius x16\n\n"));

    Serial.print(F("rounding 54.32 degrees Celsius to nearest 0.5 degrees Celsius ... "));
    Serial.print(DegreeConverter::roundC(54.32), 2);
    Serial.print(F(" degrees Celsius\n\n"));

    Serial.print(F("rounding -54.76 degrees Celsius to nearest 0.5 degrees Celsius ... "));
    Serial.print(DegreeConverter::roundC(-54.76), 2);
    Serial.print(F(" degrees Celsius\n\n"));    
}

void loop() {}
