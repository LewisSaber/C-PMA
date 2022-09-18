#pragma once
#include "flat.h"
template<typename T>
class SmallFlat : public flat<T>
{
    using flat<T>::rooms;
public:
    SmallFlat();
    SmallFlat(T);
    T getRooms();
    string Print();

};

