#ifndef _OPENJABNAB_H_
#define _OPENJABNAB_H_

#include <QCoreApplication>
#include <QTcpServer>
#include "pluginmanager.h"

class OpenJabNab : public QCoreApplication
{
	Q_OBJECT
	
public:
	OpenJabNab(int argc, char ** argv);
	~OpenJabNab();

private slots:
    void NewHTTPConnection();
    void NewXMPPConnection();

private:
	QTcpServer * httpListener;
	QTcpServer * xmppListener;
	PluginManager * pluginManager;
};

#endif