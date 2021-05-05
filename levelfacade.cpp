#include "levelfacade.h"

void LevelFacade::create(const LevelFacade & level)
{

}

LevelFacade LevelFacade::read(const LevelFacade & level)
{

    return level;

}

LevelFacade LevelFacade::read(int index)
{

   LevelFacade level;
   return level;

}

bool LevelFacade::update(int index)
{
    return false;
}

bool LevelFacade::update(LevelFacade & level)
{
    return false;
}

bool LevelFacade::remove(LevelFacade & level)
{
   return false;
}

bool LevelFacade::remove(int index)
{
    return false;
}

LevelFacade::LevelFacade()
{

}
