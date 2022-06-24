//Short project to explain how pointers and reference works

#include <iostream>

struct Entity {
	
	//Custom constructor
	Entity() {
		std::cout << "[Entity] constructed\n";
	}
	
	//Copy constructor
	Entity(const Entity& ent) {
		std::cout << "[Entity] copied\n";
	}

	//Custom destructor
	~Entity() {
		std::cout << "[Entity] destructed\n";
	}

	//Method
	void Operation(void) {
		std::cout << "[Entity] operation\n";
	}
};

void funcCpy(Entity ent) {
	ent.Operation();
}

void funcPtr(Entity* ent) {
	ent->Operation();
}

void funcRef(Entity& ent) {
	ent.Operation();
}

int main() {
	Entity e1;
	Entity* e2 = new Entity;
	Entity& e3 = e1;
	Entity* e4 = &e1;

	std::cout << std::endl;

	funcCpy(e1);
	funcCpy(*e2);
	funcCpy(e3);

	std::cout << std::endl;

	funcPtr(&e1);
	funcPtr(e2);
	funcPtr(&e3);

	std::cout << std::endl;

	funcRef(e1);
	funcRef(*e2);
	funcRef(e3);

	std::cout << std::endl;

	delete e2;
}