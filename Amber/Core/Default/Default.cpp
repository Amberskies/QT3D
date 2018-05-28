#include "Default.h"

Default::Default(Qt3DCore::QEntity *rootEntity)
	: m_coreEntity(rootEntity)
{
	// Empty
}

Default::~Default()
{
	qWarning("Default Shutdown");
}

void Default::UpdateDefault()
{
	qWarning("Default Button Selected");
}
