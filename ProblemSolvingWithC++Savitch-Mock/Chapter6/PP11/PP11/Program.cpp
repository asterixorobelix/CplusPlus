/*
Chapter 6, programming project 11

The SVG format defines a graphics image using Xml. The specification for the image is stored in a text file with the “.svg” extension.
The first five lines and the last line of the file are considered mainly “boilerplate” which must be inserted to properly create the image.
eg:
<rect x="20" y="20" width="50" height="250"
style="fill:blue;"/>
<rect x="75" y="100" width="150" height="50"
style="fill:rgb(0,255,0);"/>
<line x1="0" y1="0" x2="300" y2="300"
style="stroke:purple;stroke-width:2"/>

The lines beginning with <rect x="20"…draw a blue rectangle whose upper-left corner is at coordinate (20, 20) and whose width is 50 pixels and height is 250 pixels.
Finally, the <line> tag draws a purple line from (0, 0) to (300, 300) with a width of 2.
Based on this example, write a program which takes as input four nonnegative integer values and creates the SVG file that displays a simple bar chart that
depicts the integer values. 
Your program should scale the values so they are always drawn with a maximum height of 400 pixels. 
*/

#include "SvgFile.h"

int main() {
	SvgFile svg = SvgFile("rects");

	svg.CreateSVG();
}