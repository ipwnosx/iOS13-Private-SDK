//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@interface FCFDBFeed : NSManagedObject
{
}

- (id)prune;
- (void)willAccessFeedRange:(id)arg1;
- (void)insertSegment:(id)arg1;
- (void)insertFeedItems:(id)arg1 ckCursor:(id)arg2 plausibleRange:(id)arg3 segmentEntity:(id)arg4 itemEntity:(id)arg5 itemIndexEntity:(id)arg6 moc:(id)arg7 indexFeatures:(BOOL)arg8;
- (void)enumerateGapsWithBlock:(CDUnknownBlockType)arg1;
- (id)firstSegmentFollowingFeedRange:(id)arg1;
- (id)contiguousRangeInRange:(id)arg1;
- (id)contiguousSegmentsInFeedRange:(id)arg1;
- (void)willTurnIntoFault;
- (void)awakeFromFetch;

@end

