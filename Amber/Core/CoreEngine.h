#pragma once
#include <QObject>

#include <Qt3DCore/QEntity>

class CoreEngine : public QObject
{
	Q_OBJECT

	Qt3DCore::QEntity *m_coreEntity;

public:
	explicit CoreEngine(Qt3DCore::QEntity *rootEntity);
	virtual ~CoreEngine();

	void InitializeEngine();
	void UpdateEngine();
};
