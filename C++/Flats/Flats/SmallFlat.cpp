#include "SmallFlat.h"

template<typename T>
SmallFlat<T>::SmallFlat()
{
    rooms = 0;
}

template<typename T>
SmallFlat<T>::SmallFlat(T Rooms)
{
    rooms = Rooms;
}

template<typename T>
T SmallFlat<T>::getRooms()
{
    return rooms;
}
template<typename T>
string SmallFlat<T>::Print() {
    return "Flat with " + to_string(rooms) + " rooms.";
}
