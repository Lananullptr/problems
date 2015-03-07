#include "gps.h"
#include "incl.h"
// Constructors/Destructors
//


gps::~gps ( ) { }

//
// Methods
//
void gps::getInfo() const {
	nav::getInfo();
	cout << "\nТип gps: " << this->auto_nm<< "(type: "<<this->autohand<<");";
	if(this->import)
	cout<< "\nВозможность загрузки карт: есть);\n";
	else cout<< "\nВозможность загрузки карт: отсутствует);\n";
}

// Accessor methods
//


// Other methods
//

void gps::initAttributes ( ) {
}



