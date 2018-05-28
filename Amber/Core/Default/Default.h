#pragma once

#include <QObject>

#include <Qt3DCore/QEntity>


class Default : public QObject
{
	Q_OBJECT

	Qt3DCore::QEntity *m_coreEntity;


public:
	explicit Default(Qt3DCore::QEntity *rootEntity);
	virtual ~Default();

	void UpdateDefault();
};
