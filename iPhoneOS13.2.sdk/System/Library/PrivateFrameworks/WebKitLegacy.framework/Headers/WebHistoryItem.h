//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString, WebHistoryItemPrivate;

@interface WebHistoryItem : NSObject <NSCopying>
{
    WebHistoryItemPrivate *_private;
}

+ (id)entryWithURL:(id)arg1;
+ (void)initialize;
- (void)_visitedWithTitle:(id)arg1;
- (CGPoint)scrollPoint;
- (id)initFromDictionaryRepresentation:(id)arg1;
- (void)setViewState:(id)arg1;
- (id)initWithWebCoreHistoryItem:(Ref_0785b76d )arg1;
- (id)initWithURLString:(id)arg1 title:(id)arg2 displayTitle:(id)arg3 lastVisitedTimeInterval:(double)arg4;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
@property(readonly, nonatomic) double lastVisitedTimeInterval;
@property(copy, nonatomic) NSString *alternateTitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *originalURLString;
@property(readonly, copy, nonatomic) NSString *URLString;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)initWithURLString:(id)arg1 title:(id)arg2 lastVisitedTimeInterval:(double)arg3;
- (id)init;
- (BOOL)_hasCachedPageExpired;
- (BOOL)_isInPageCache;
- (void)_setScrollPoint:(CGPoint)arg1;
- (CGPoint)_scrollPoint;
- (void)_setViewportArguments:(id)arg1;
- (id)_viewportArguments;
- (BOOL)_scaleIsInitial;
- (float)_scale;
- (void)_setScale:(float)arg1 isInitial:(BOOL)arg2;
- (id)_redirectURLs;
- (BOOL)lastVisitWasFailure;
- (id)URL;
- (id)children;
- (void)setRSSFeedReferrer:(id)arg1;
- (id)RSSFeedReferrer;
- (BOOL)isTargetItem;
- (id)target;
- (id)dictionaryRepresentationIncludingChildren:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)initWithURL:(id)arg1 title:(id)arg2;

@end

