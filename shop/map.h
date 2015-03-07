
#ifndef MAP_H
#define MAP_H
#include "nav.h"

#include <string>
class map : public nav
{
public:

    // Constructors/Destructors
    //


    /**
     *not Empty Constructor
     */
    map (int sz, int pr, std::string nm ):nav(pr, nm){
        size_mb = sz;
    };

    /**
     * Empty Destructor
     */
    virtual ~map ( );



    /**
     */
    virtual void getInfo () const;




private:

    // Private attributes
    //

    int size_mb;


private:


    void initAttributes ( ) ;

};

#endif // MAP_H

