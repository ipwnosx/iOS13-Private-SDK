//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPRecoveryKeyValidatorInternal-Protocol.h>

@class CDPContext, NSDictionary, NSString;
@protocol CDPAuthProviderInternal;

@interface CDPDAccountRecoveryValidator : NSObject <CDPRecoveryKeyValidatorInternal>
{
    id <CDPAuthProviderInternal> _authProvider;
    CDPContext *_context;
    NSDictionary *_recoveredInfo;
    NSString *_recoveryKey;
}

@property(copy, nonatomic) NSString *recoveryKey; // @synthesize recoveryKey=_recoveryKey;
@property(copy, nonatomic) NSDictionary *recoveredInfo; // @synthesize recoveredInfo=_recoveredInfo;
// - (void).cxx_destruct;
- (id)_cdpErrorFromAuthKitError:(id)arg1;
- (void)generateRecoveryKey:(CDUnknownBlockType)arg1;
- (void)confirmRecoveryKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithContext:(id)arg1 authProvider:(id)arg2;

@end

