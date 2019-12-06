//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface NNMKSyncedAccount : NSObject
{
    BOOL _shouldArchive;
    BOOL _resendRequested;
    NSString *_accountId;
    NSString *_displayName;
    NSArray *_emailAddresses;
    NSUInteger _resendInterval;
    NSUInteger _sourceType;
    NSString *_username;
    NSString *_localId;
}

@property(retain, nonatomic) NSString *localId; // @synthesize localId=_localId;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) NSUInteger sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) NSUInteger resendInterval; // @synthesize resendInterval=_resendInterval;
@property(nonatomic) BOOL resendRequested; // @synthesize resendRequested=_resendRequested;
@property(retain, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(nonatomic) BOOL shouldArchive; // @synthesize shouldArchive=_shouldArchive;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
// - (void).cxx_destruct;
- (id)account;
- (id)init;
- (id)initWithAccount:(id)arg1;

@end

