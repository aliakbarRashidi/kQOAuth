#ifndef KQOAUTHREQUEST_P_H
#define KQOAUTHREQUEST_P_H

#include <QString>
#include <QUrl>

class KQOAuthRequestPrivate {

    Q_DECLARE_PUBLIC(KQOAuthRequest);

public:
    KQOAuthRequestPrivate();

    // Helper methods to get the value for the OAuth request.
    QString oauthTimestamp() const;
    QString oauthNonce() const;
    QString oauthSignature() const;

    // Let's define the OAuth keys for the request
    // parameters here.
    static const QString OAUTH_KEY_CONSUMER;
    static const QString OAUTH_KEY_CONSUMER_KEY;
    static const QString OAUTH_KEY_TOKEN;
    static const QString OAUTH_KEY_SIGNATURE_METHOD;
    static const QString OAUTH_KEY_TIMESTAMP;
    static const QString OAUTH_KEY_NONCE;
    static const QString OAUTH_KEY_SIGNATURE;

    QString oauthConsumerKey;
    QString oauthConsumerSecretKey;
    QString oauthSignatureMethod;
    QUrl oauthCallbackUrl;

    // These will be generated by the helper methods
    QString oauthTimestamp_;
    QString oauthNonce_;

    // Q-pointer
    KQOAuthRequest *q_ptr;

};
#endif // KQOAUTHREQUEST_P_H