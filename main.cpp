#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

struct connections
{  
  /*The roads (and other things) that run between those intersections, in no particular
    order. Each line contains five space-free items:

      the official name of the road, or "?" if it hasn't got one
      what kind of road it is, as a three character code
          the only really significant part of this is the first letter - F indicates
          that it is a ferry crossing and not a road at all.
      intersection A
      intersection B
          the road connects A to B. A and B are line numbers (counting from 0) in
          the intersections.txt file
      the length of this section of road, in miles. */

  string roadName;
  string roadType;
  int intersectionA;
  int intersectionB;
  double length;

  connections(string rN, string rT, int iA, int iB, double l)
  {
    roadName = rN;
    roadType = rT;
    intersectionA = iA;
    intersectionB = iB;
    length = l;
  }
};
struct intersections
{   /*
    Everywhere in the U.S. that two major roads meet, or that one major road has
    a notable change of direction. One per line. The first line is considered to
    be line 0 and does not contain useful data.

      longitude
      latitude
      distance from nearest named place
      what that named place is, state then name.
    */
  double longtitude;
  double latitude;
  double distFromPlace;
  string placeState;
  string placeCity;

  intersections(double lo, double la, double dfp, string pS, string pC)
  {
    longtitude = lo;
    latitude = la;
    distFromPlace = dfp;
    placeState = pS;
    placeCity = pC;
  }
};


//read file connections
  /// one space between each data
  /// US-2 T-- 281 274 10.301

//read file intersections
  /// -122.3135   47.2812    1.42 WA Lakeland South
  /// -123.8130   46.9763    0.27 WA Aberdeen
  


int main() 
{

} 