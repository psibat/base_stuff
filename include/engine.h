#include "entity_manager.h"

#include "systems/collision_system.h"

#ifndef ENGINE_H
#define ENGINE_H

class Engine {
	public:
		Engine();

		void start();
		void stop();
	private:
		EntityManager entity_manager;

		// Systems
		CollisionSystem collision_system;

		void gameplay();

		void process();
		void draw();

};

#endif
