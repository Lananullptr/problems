#include "map.h"
#include "incl.h"
// Constructors/Destructors
//


map::~map ( ) { }

//
// Methods
//
void map::getInfo() const {
	nav::getInfo();
    cout << "\nРазмер карты (мб): " << this->size_mb << "\n";
}

// Accessor methods
//


// Other methods
//

void map::initAttributes ( ) {
}


