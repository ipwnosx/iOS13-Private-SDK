//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUIPostPlayConfig : NSObject
{
    double _bootstrapInterval;
    double _documentUpdateOffsetInterval;
    NSUInteger _maximumAutoPlayableItems;
    double _duration;
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) NSUInteger maximumAutoPlayableItems; // @synthesize maximumAutoPlayableItems=_maximumAutoPlayableItems;
@property(nonatomic) double documentUpdateOffsetInterval; // @synthesize documentUpdateOffsetInterval=_documentUpdateOffsetInterval;
@property(nonatomic) double bootstrapInterval; // @synthesize bootstrapInterval=_bootstrapInterval;
- (id)init;

@end

