//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSBackingStoreRecord-Protocol.h>

@class NSNumber, NSString;

@interface DNDSBypassSettingsRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord>
{
    NSNumber *_immediateBypassEventSourceType;
    NSString *_immediateBypassCNGroupIdentifier;
    NSNumber *_repeatEventSourceBehaviorEnabledSetting;
}

+ (id)newWithDictionaryRepresentation:(id)arg1;
+ (id)migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(NSUInteger)arg2 toVersionNumber:(NSUInteger)arg3;
+ (id)recordForLegacyPrivilegedSenderType:(NSUInteger)arg1 legacyAddressBookID:(int)arg2;
+ (id)_recordWithEncodedInfo:(id)arg1 error:(id )arg2;
@property(readonly, copy, nonatomic) NSNumber *repeatEventSourceBehaviorEnabledSetting; // @synthesize repeatEventSourceBehaviorEnabledSetting=_repeatEventSourceBehaviorEnabledSetting;
@property(readonly, copy, nonatomic) NSString *immediateBypassCNGroupIdentifier; // @synthesize immediateBypassCNGroupIdentifier=_immediateBypassCNGroupIdentifier;
@property(readonly, copy, nonatomic) NSNumber *immediateBypassEventSourceType; // @synthesize immediateBypassEventSourceType=_immediateBypassEventSourceType;
// - (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (id)_initWithImmediateBypassEventSourceType:(id)arg1 immediateBypassCNGroupIdentifier:(id)arg2 repeatEventSourceBehaviorEnabledSetting:(id)arg3;
- (id)_initWithRecord:(id)arg1;
- (id)init;
- (NSUInteger)legacyPrivilegedSenderType;

@end

