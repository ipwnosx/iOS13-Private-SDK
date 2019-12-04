//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFCloudKitItem-Protocol.h>

@class CKRecordID, NSString;

@interface WFCloudKitSyncFlags : NSObject <WFCloudKitItem>
{
    _Bool _migratedVoiceShortcuts;
    CKRecordID *_identifier;
}

+ (id)recordIDWithZoneID:(id)arg1;
+ (id)properties;
+ (id)recordType;
@property(nonatomic) _Bool migratedVoiceShortcuts; // @synthesize migratedVoiceShortcuts=_migratedVoiceShortcuts;
@property(readonly, nonatomic) CKRecordID *identifier; // @synthesize identifier=_identifier;
- (id)initWithZoneID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
