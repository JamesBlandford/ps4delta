#pragma once

// Copyright (C) Force67 2019

#include <chrono>
#include <memory>
#include <string>
#include <kernel/VMA.h>

namespace krnl
{
	struct kObj
	{
		std::string name;
		uint32_t type;
		uint8_t* base;
		uint8_t* entry;
		uint16_t tlsSlot;
		uint32_t codeSize;
	};

	class proc
	{
		friend class elfModule;
	public:
		proc();
		void addObj(std::unique_ptr<kObj>);
		bool create(const std::string&);
		void start();

		inline kObj& getMainModule() {
			return *modules[0];
		}

		kObj* loadModule(std::string_view);

	private:
		// memory owned by proc
		VMAccessMgr vmem;

		kObj* getModule(std::string_view);

		uint32_t nextFreeTLS() {
			return -1;
		}

		bool trustZoneEnabled{ true };

		std::vector<std::unique_ptr<kObj>> modules;
	};
}