#include "CoreEngine.h"

CoreEngine::CoreEngine(Qt3DCore::QEntity *rootEntity) 
	: m_coreEntity(rootEntity)
{
}

CoreEngine::~CoreEngine()
{
	qWarning("CoreEngine Shutdown");
}

void CoreEngine::InitializeEngine()
{
	// Empty
}

void CoreEngine::UpdateEngine()
{
	// Empty
}
