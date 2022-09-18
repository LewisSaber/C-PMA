#include "LargeFlat.h"

template<typename T>
LargeFlat<T>::LargeFlat()
{
   
    floor1rooms = 0;
    floor2rooms = 0;
}

template<typename T>
LargeFlat<T>::LargeFlat(T Rooms , T Rooms2)
{
    floor1rooms = Rooms;
    floor2rooms = Rooms2;
}

template<typename T>
T LargeFlat<T>::getRooms()
{
    return floor1rooms + floor2rooms;
}

template<typename T>
string LargeFlat<T>::Print()
{
    return "Flat With: " + to_string(floor1rooms) + " rooms on first floor \nand " + to_string(floor2rooms) + " rooms on second floor.";
}
