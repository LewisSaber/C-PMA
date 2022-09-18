#pragma once
#include "flat.h"

template<typename T>
class LargeFlat :
    public flat<T>
{
private:
    T floor1rooms;
    T floor2rooms;
public:
    LargeFlat();
    LargeFlat(T,T);
    T getRooms();
    string Print();

};

