#pragma once

#include <QObject>

#include <Qt3DCore/QEntity>


class Dice : public QObject
{
	Q_OBJECT

	Qt3DCore::QEntity *m_coreEntity;


public:
	explicit Dice(Qt3DCore::QEntity *rootEntity);
	virtual ~Dice();

	void UpdateDice();
};
