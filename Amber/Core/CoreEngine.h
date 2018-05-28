#pragma once
#include <QObject>

#include <Qt3DCore/QEntity>

#include "Default/Default.h"
#include "Dice/Dice.h"

class CoreEngine : public QObject
{
	Q_OBJECT

	Qt3DCore::QEntity *m_coreEntity;
	Default *m_defaultScreen;
	Dice *m_diceScreen;
	int m_screenChoice;

public:
	explicit CoreEngine(Qt3DCore::QEntity *rootEntity);
	virtual ~CoreEngine();

	void InitializeEngine();
	void UpdateEngine();

	void setScreen(int i);

private:
	void UpdateCurrentScreen();
};
