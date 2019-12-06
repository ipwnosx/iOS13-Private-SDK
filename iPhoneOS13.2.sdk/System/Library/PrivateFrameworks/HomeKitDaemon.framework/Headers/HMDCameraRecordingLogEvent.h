//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

@class NSUUID;

@interface HMDCameraRecordingLogEvent : HMDLogEvent
{
    NSUUID *_sessionID;
    NSUInteger _sequenceNumber;
    NSUUID *_cameraID;
}

@property(readonly, copy) NSUUID *cameraID; // @synthesize cameraID=_cameraID;
@property NSUInteger sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly, copy) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
// - (void).cxx_destruct;
- (id)attributeDescriptions;
@property(readonly, copy) NSUUID *ephemeralCameraID;
@property(readonly) NSUInteger endTimestamp;
@property(readonly) NSUInteger startTimestamp;
- (id)initWithEventType:(id)arg1 sessionID:(id)arg2 cameraID:(id)arg3 sequenceNumber:(NSUInteger)arg4;

@end

