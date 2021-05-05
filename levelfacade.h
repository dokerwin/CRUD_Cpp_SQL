#ifndef LEVELFACADE_H
#define LEVELFACADE_H

#include "crudeinterface.h"

class LevelFacade :CrudeInterface<LevelFacade>
{


public:
    

    
    void create(const LevelFacade &) override;
    LevelFacade read(const LevelFacade &) override;
    LevelFacade read(int index) override;
    bool update (int index) override;
    bool update (LevelFacade&) override;
    bool remove (LevelFacade&)override;
    bool remove (int index)override;
    LevelFacade();
};

#endif // LEVELFACADE_H
