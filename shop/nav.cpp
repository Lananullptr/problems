
#include "nav.h"
#include "incl.h"
// Constructors/Destructors
//



nav::nav (int pr, string nm)
{
    this->setPrice(pr);
    this->setName(nm);
}

nav::~nav ( ) { }

//
// Methods
//


// Accessor methods
//

void nav::getInfo () const{
	cout << "Цена: " << this->price
        << "\nНаименование: " << this->name;
}
// Other methods
//

void nav::initAttributes ( ) {

}

