#ifndef CRUDEINTERFACE_H
#define CRUDEINTERFACE_H

template<class T>
class CrudeInterface
{


public:
    virtual void create (const T&)=0;
    virtual T read (int idex)=0;
    virtual T read (const T&)=0;
    virtual bool update (int index)=0;
    virtual bool update (T&)=0;
    virtual bool remove (T&)=0;
    virtual bool remove (int index)=0;


};

#endif // CRUDEINTERFACE_H
