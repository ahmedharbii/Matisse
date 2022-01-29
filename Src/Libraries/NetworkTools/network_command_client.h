#ifndef NETWORK_TOOLS_COMMAND_CLIENT_H_
#define NETWORK_TOOLS_COMMAND_CLIENT_H_

#include "network_client.h"

namespace network_tools {

class NetworkCommandClient : public NetworkClient
{
    Q_OBJECT
public:
    NetworkCommandClient();

protected:
    void doInit();
    void doInitBeforeAction();
    void connectAction(NetworkAction *_action);
    void disconnectAction(NetworkAction *_action);

signals:
    void si_commandOutputReceived(NetworkAction *_action, QByteArray _output);
    void si_commandErrorReceived(NetworkAction *_action, QByteArray _error);

protected slots:
//    virtual void sl_createRemoteShell(QString& _command) = 0;
//    virtual void sl_closeRemoteShell() = 0;
//    virtual void sl_executeCommand() = 0;
    void sl_onShellStarted();
    void sl_onReadyReadStandardOutput();
    void sl_onReadyReadStandardError();
    void sl_onShellClosed();

};

} // namespace network_tools

#endif // NETWORK_TOOLS_COMMAND_CLIENT_H_
