#include "entity_manager.h"

#ifndef SYSTEM_H
#define SYSTEM_H

class System {
	public:
		System(EntityManager &entity_manager);

		virtual void update() = 0;

	protected:
		void update_entities();

		EntityManager &entity_manager;
	private:
		virtual void update_entity(int id) = 0;
};

#endif
