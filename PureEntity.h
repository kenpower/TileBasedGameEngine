#pragma once
#include<string>
#include<map>
#include"component.h"

struct PureEntity {
	std::map<std::string, Component*> components;
	const std::string name;
public:
	PureEntity(const std::string name) :name(name) {}
	void addComponent(Component* c);
	void removeComponent(const std::string name);

	Component* getComponent(const std::string name);
};