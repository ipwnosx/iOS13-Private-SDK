//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedTransforming-Protocol.h>

@class FCFeedRange;

@interface FCFeedTransformationClamp : NSObject <FCFeedTransforming>
{
    FCFeedRange *_feedRange;
}

+ (id)transformationWithFeedRange:(id)arg1;
+ (id)transformationWithDateRange:(id)arg1;
@property(retain, nonatomic) FCFeedRange *feedRange; // @synthesize feedRange=_feedRange;
// - (void).cxx_destruct;
- (id)transformFeedItems:(id)arg1;

@end

