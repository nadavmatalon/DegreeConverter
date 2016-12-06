
# Degree Converter

[![Platform Badge](https://img.shields.io/badge/platform-Arduino-orange.svg)](https://www.arduino.cc/)
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
[![SemVer](https://img.shields.io/badge/SemVer-1.0.0-brightgreen.svg)](http://semver.org/)
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
[![MIT License](https://img.shields.io/badge/license-MIT-blue.svg)](https://opensource.org/licenses/MIT)

## INTRODUCTION

This library contains a set of functions for converting between degrees Celsius and Fahrenheit.

## REPOSITORY CONTENTS

- **DegreeConverter.h** - Library Header file.
- **DegreeConverter.cpp** - Library Compilation.
- **/examples**  
  - **/DegreeConverter_Example**
    - **DegreeConverter_Example.ino** - A basic sketch illustrating usage of the library's different functions.
- **/extras** 
  - **License.txt** - A cope of the end-user license agreement.  
- **keywords.txt** - Keywords for this library which will be highlighted in sketches within the Arduino IDE. 
- **library.properties** - General library properties for the Arduino's IDE (>1.5) Library Package Manager.
- **README.md** - The readme file for this library.
- **library.json** - JSON file for the Arduino's IDE (>1.5) Package Manager.

## LIBRARY INSTALLATION & SETUP

Begin by installing the library either by using the Arduino IDE's Installation Wizard (Arduino Version >1.5) or simply download the library's ZIP folder from Github, extract it, and copy the extraxcted folder to your Arduino 'libraries' folder.

Next, include the library at the top of the sketch as follows:

```
#include "DegreeConverter.h"
```

## LIBRARY FUNCTIONS

With the library installed & included in the sketch, the following functions are available (see the  example sketch for a detailed implementation):

__conCtoF();__  
Parameters:&nbsp;&nbsp;&nbsp;int / float / double  
Description:&nbsp;&nbsp;&nbsp;converts degrees Celsius to Fahrenheit   
Returns:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;float  

__conFtoC();__  
Parameters:&nbsp;&nbsp;&nbsp;int / float / double  
Description:&nbsp;&nbsp;&nbsp;converts degrees Fahrenheit to Celsius  
Returns:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;float  

__conC16toC();__  
Parameters:&nbsp;&nbsp;&nbsp;int  
Description:&nbsp;&nbsp;&nbsp;calculates degrees Celsius from derees Celsius times 16   
Returns:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;float  

__conF16toF();__  
Parameters:&nbsp;&nbsp;&nbsp;int  
Description:&nbsp;&nbsp;&nbsp;alculates degrees Fahrenheit from derees Fahrenheit times 16  
Returns:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;float  

__conC16toF16();__  
Parameters:&nbsp;&nbsp;&nbsp;int  
Description:&nbsp;&nbsp;&nbsp;converts degrees Celsius times 16 to degrees Fahrenheit times 16  
Returns:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;int  

__roundC();__  
Parameters:&nbsp;&nbsp;&nbsp;float / double  
Description:&nbsp;&nbsp;&nbsp;rounds degrees Celsius to the nearest 0.5 degree  
Returns:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;float  

## RUNNING THE EXAMPLE SKETCHES

1) Start the Arduino IDE and open the example sketch  
2) Upload the sketch to the Arduino  
3) Open the Serial Communications Window (make sure the baud-rate is set to 9600 or change it in the sketch to match your Serial Port's buad-rate)  

## BUG REPORTS

Please report any issues/bugs/suggestions at the [Issues](https://github.com/nadavmatalon/DegreeConverter/issues) section of this Github repository.

## TODO


## VERSION HISTORY

__Ver. 1.0.0__ - First release (15.9.16)  

## LICENSE

[The MIT License (MIT)](https://opensource.org/licenses/MIT)
Copyright (c) 2016 Nadav Matalon

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

