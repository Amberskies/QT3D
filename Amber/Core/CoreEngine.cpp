#include "CoreEngine.h"

CoreEngine::CoreEngine(Qt3DCore::QEntity *rootEntity) 
	: m_coreEntity(rootEntity)
	, m_defaultScreen(new Default(rootEntity))
	, m_diceScreen(new Dice(rootEntity))
	, m_screenChoice(1)
{
}

CoreEngine::~CoreEngine()
{
	m_diceScreen->~Dice();
	m_defaultScreen->~Default();
	qWarning("CoreEngine Shutdown");
}

void CoreEngine::InitializeEngine()
{
	// Empty
}

void CoreEngine::UpdateEngine()
{
	UpdateCurrentScreen();
}

void CoreEngine::setScreen(int i)
{
	m_screenChoice = i;
}

////////////////////////////////////////PRIVATE////////////////////////////////////
void CoreEngine::UpdateCurrentScreen()
{
	// change this to a full switch case

	if (m_screenChoice == 1) m_defaultScreen->UpdateDefault();
	if (m_screenChoice == 2) m_diceScreen->UpdateDice();
}
