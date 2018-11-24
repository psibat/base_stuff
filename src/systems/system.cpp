#include "systems/system.h"

System::System(EntityManager &entity_manager) : entity_manager(entity_manager) { }

void System::update_entities() {
	for (int id = 0; id < MAX_ENTITIES; id++) {
		if (entity_manager.exists(id)) {
			update_entity(id);
		}
	}
}
