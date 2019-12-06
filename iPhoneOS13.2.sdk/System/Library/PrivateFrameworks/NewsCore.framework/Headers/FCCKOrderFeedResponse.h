//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FCCKOrderFeedResponse : NSObject
{
    BOOL _reachedEnd;
    BOOL _reachedMinOrder;
    BOOL _wasDropped;
    NSString *_feedID;
    NSArray *_feedItemAndArticleRecords;
    NSUInteger _extent;
}

@property(nonatomic) BOOL wasDropped; // @synthesize wasDropped=_wasDropped;
@property(nonatomic) NSUInteger extent; // @synthesize extent=_extent;
@property(nonatomic) BOOL reachedMinOrder; // @synthesize reachedMinOrder=_reachedMinOrder;
@property(nonatomic) BOOL reachedEnd; // @synthesize reachedEnd=_reachedEnd;
@property(copy, nonatomic) NSArray *feedItemAndArticleRecords; // @synthesize feedItemAndArticleRecords=_feedItemAndArticleRecords;
@property(copy, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
// - (void).cxx_destruct;
- (id)description;

@end

