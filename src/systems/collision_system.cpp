#include "systems/collision_system.h"

CollisionSystem::CollisionSystem(EntityManager &entity_manager) : System(entity_manager) {}

void CollisionSystem::update() {
	update_entities();
}

void CollisionSystem::update_entity(int id) {
	CollisionComponent *collision = entity_manager.get<CollisionComponent>(id);
	if (collision != NULL) {

	}
}
