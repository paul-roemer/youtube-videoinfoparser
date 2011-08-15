#ifndef VIDEOINFOPARSER_H
#define VIDEOINFOPARSER_H

#include <QObject>
#include <QtCore>
#include <QtNetwork>

class VideoInfoParser : public QObject
{
    Q_OBJECT

private:
    QString videoId;
    QNetworkAccessManager *manager;
    QNetworkReply *reply;

private:
    void getVideoInfoStream();
    void parse(QString videoStream);

public:
    explicit VideoInfoParser(QString videoId);

signals:

public slots:
    void replyFinished(QNetworkReply *reply);
};

#endif // VIDEOINFOPARSER_H
