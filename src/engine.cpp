#include "engine.h"

Engine::Engine() : collision_system(entity_manager) {}

void Engine::start() {
	int height, width;

	int player = entity_manager.create();
	entity_manager.player = player;
	entity_manager.center = player;
	entity_manager.add(player, new CollisionComponent());

	int other = entity_manager.create();
	entity_manager.add(other, new CollisionComponent());

}

void Engine::gameplay() {
	draw();
	process();
}

void Engine::process() {
	int player = entity_manager.player;
	//entity_manager.get<CollisionComponent>(player)->distance = 1;

	collision_system.update();
}

void Engine::draw() {

}
