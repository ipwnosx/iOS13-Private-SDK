//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailCore/ECAuthenticationScheme.h>

@interface MFNTLMAuthScheme : ECAuthenticationScheme
{
}

- (BOOL)hasEncryption;
- (BOOL)sendsPlainTextPasswords;
- (id)humanReadableName;
- (id)name;
- (Class)authenticatorClass;

@end

