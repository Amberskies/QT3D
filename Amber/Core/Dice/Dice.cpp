#include "Dice.h"

Dice::Dice(Qt3DCore::QEntity *rootEntity)
	: m_coreEntity(rootEntity)
{
	// Empty
}

Dice::~Dice()
{
	qWarning("Dice Shutdown");
}

void Dice::UpdateDice()
{
	qWarning("Dice Button Selected");
}
