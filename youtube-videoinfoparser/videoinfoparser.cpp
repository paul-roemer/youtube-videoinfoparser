#include "videoinfoparser.h"

VideoInfoParser::VideoInfoParser(QString videoId) :
    videoId(videoId)
{
    this->manager = new QNetworkAccessManager(this);

    getVideoInfoStream();
}

void VideoInfoParser::parse(QString videoStream)
{
}

/**
  *
  */
void VideoInfoParser::getVideoInfoStream()
{
    qDebug() << "Sending Request";
    reply = manager->get(QNetworkRequest(QUrl("http://qt.nokia.com")));
}

void VideoInfoParser::replyFinished(QNetworkReply *reply)
{
    qDebug() << "reply";
    qDebug() << reply->isFinished();
    qDebug() << reply->bytesAvailable();
    reply->deleteLater();
}
