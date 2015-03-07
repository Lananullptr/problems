
#ifndef NAV_H
#define NAV_H

#include <string>
class nav
{
public:

    // Constructors/Destructors
    //


    /**
     * Empty Constructor
     */
    nav (int, std::string );

    /**
     * Empty Destructor
     */
    virtual ~nav ( );


    void setPrice (int new_var)   {
      price = new_var;
    }

    void setName (std::string new_var)   {
      name = new_var;
    }

    virtual void getInfo () const;

    int getPrice () const  {
    return price;
  }

private:

    // Private attributes
    //

    int price;
    std::string name;


private:


    void initAttributes ( ) ;

};

#endif // NAV_H

