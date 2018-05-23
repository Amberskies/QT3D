#pragma once
#include <QObject>

class CoreEngine : public QObject
{
	Q_OBJECT

public:
	CoreEngine(QObject *parent);
	~CoreEngine();
	void InitializeEngine();
	void UpdateEngine();
};
