//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BLTAlertStateTester : NSObject
{
    id /* CDUnknownBlockType */ _sectionInfoRetriever;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ sectionInfoRetriever; // @synthesize sectionInfoRetriever=_sectionInfoRetriever;
// - (void).cxx_destruct;
- (BOOL)isScreenTimeBlockedForBundleIdentifier:(id)arg1;
- (NSUInteger)_blockingReasonForSectionInfo:(id)arg1;
- (NSUInteger)willNanoPresentNotificationForSectionInfo:(id)arg1 subsectionIDs:(id)arg2 isWristDetectDisabled:(BOOL)arg3 hasSectionIDOptedOutOfCoordination:(BOOL)arg4 hasSectionIDOptedForwardOnly:(BOOL)arg5;

@end

