//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/HMFLogging-Protocol.h>

@class HMBLocalSQLContextInputBlock, HMBLocalZone, HMFActivity;

@interface HMBMirrorInput : HMFObject <HMFLogging>
{
    HMBLocalZone *_localZone;
    HMBLocalSQLContextInputBlock *_block;
    HMFActivity *_activity;
}

+ (id)logCategory;
@property(readonly, nonatomic) HMFActivity *activity; // @synthesize activity=_activity;
@property(readonly, nonatomic) HMBLocalSQLContextInputBlock *block; // @synthesize block=_block;
@property(readonly, nonatomic) __weak HMBLocalZone *localZone; // @synthesize localZone=_localZone;
// - (void).cxx_destruct;
- (id)logIdentifier;
- (id)abort;
- (id)commitWithOptions:(id)arg1 error:(id )arg2;
- (id)removeModelWithExternalID:(id)arg1;
- (id)removeModelWithModelID:(id)arg1;
- (id)updateModelData:(id)arg1 modelEncoding:(NSUInteger)arg2 externalID:(id)arg3 externalData:(id)arg4;
- (id)updateModel:(id)arg1 externalID:(id)arg2 externalData:(id)arg3;
- (void)dealloc;
- (id)initWithLocalZone:(id)arg1 block:(id)arg2;

@end

