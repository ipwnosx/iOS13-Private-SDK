//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphNode.h>

#import <PhotosGraph/PGGraphLocalizable-Protocol.h>

@class NSString;

@interface PGGraphHolidayNode : PGGraphNode <PGGraphLocalizable>
{
}

@property(readonly, nonatomic) NSString *localizedName;
- (void)enumerateCelebratingHighlightNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateCelebratingMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSUInteger category;

@end

