#pragma once

#include <pge/scene/Scene.h>

class SceneObjectEntryPointTennis : public pge::SceneObject {
public:
	// Inherited from SceneObject
	void onAdd();

	SceneObject* copyFactory() {
		return new SceneObjectEntryPointTennis(*this);
	}
};