//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailCore/ECSASLAuthenticator.h>

@interface _MFLoginAuthenticator : ECSASLAuthenticator
{
    BOOL _justSentPassword;
}

- (BOOL)justSentPlainTextPassword;
- (id)responseForServerData:(id)arg1;
- (id)saslName;

@end

