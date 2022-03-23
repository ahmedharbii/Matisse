#ifndef NETWORK_CLIENT_SECURE_CONNECTION_WRAPPER_H_
#define NETWORK_CLIENT_SECURE_CONNECTION_WRAPPER_H_

#include <QObject>
#include <QtDebug>

#include "connection_wrapper.h"

#include "sshconnection.h"
#include "sftpchannel.h"
#include "sshremoteprocess.h"

using namespace QSsh;

namespace network_tools {

class SecureConnectionWrapper : public ConnectionWrapper
{
    Q_OBJECT

public:
    explicit SecureConnectionWrapper();

    void resetConnection();

protected:
    void disableConnection();
    void freeConnection();
    void connectToRemoteHost();
    void disconnectFromHost();
    QByteArray readShellStandardOutput();
    QByteArray readShellStandardError();

private slots:
    void sl_onConnected();
    void sl_onDisconnected();
    void sl_onConnectionError(QSsh::SshError _err);
    void sl_onChannelInitialized();
    void sl_onChannelError(const QString& _err);
    void sl_onChannelClosed();
    void sl_onOpfinished(QSsh::SftpJobId _job, const SftpError _error_type, const QString& _error = QString());
    void sl_onTransferProgress(QSsh::SftpJobId _job, quint64 _progress, quint64 _total);
    void sl_onFileInfoAvailable(QSsh::SftpJobId _job, const QList<QSsh::SftpFileInfo>& _file_info_list);
    void sl_onShellStarted();
    void sl_onReadyReadStandardOutput();
    void sl_onReadyReadStandardError();
    void sl_onShellClosed(int _exit_status);

protected slots:
    void sl_initFileChannel();
    void sl_upload(QString _local_path, QString _remote_path, bool _is_dir_upload, bool _recurse);
    void sl_download(QString _remote_path, QString _local_path, bool _is_dir_download);
    void sl_dirContent(QString _remote_dir_path, FileTypeFilters _flags, QStringList _file_filters, bool _is_for_dir_transfer=false);

    void sl_createRemoteShell(QString& _command);
    void sl_closeRemoteShell();
    void sl_executeShellCommand();

private:
    void startDownloadDir(QString _remote_path, QString _local_path);
    void reinitBeforeFileOperation();
//    void reinitProgressIndicators(quint64 _transfer_size);
    void mapConnectionError(QSsh::SshError _err);
    void mapTransferError(QSsh::SftpError _err);

    QSsh::SshConnection* m_connection;
    QSet<QSsh::SshConnection*> m_obsolete_connections;
    QSsh::SftpChannel::Ptr m_channel;
    QSsh::SshRemoteProcess::Ptr m_shell;

};

} // namespace network_tools

#endif // NETWORK_CLIENT_SECURE_CONNECTION_WRAPPER_H_
