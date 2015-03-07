
#ifndef GPS_H
#define GPS_H
#include "nav.h"

#include <string>
class gps : public nav
{
public:

    // Constructors/Destructors
    //


    /**
     * Empty Constructor
     */
    gps (bool im, bool au, int pr, std::string nm):nav(pr, nm)
    {
        import = im;
        autohand = au;
        if(au)
            auto_nm="auto";
        else
            auto_nm="hand";
    };

    /**
     * Empty Destructor
     */
    virtual ~gps ( );



    /**
     */
    virtual void getInfo () const;




private:

    // Private attributes
    //

    bool import;
    bool autohand;
    std::string auto_nm;

private:


    void initAttributes ( ) ;

};

#endif // GPS_H


