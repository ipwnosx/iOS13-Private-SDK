//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSISEngine, UIView;

__attribute__((visibility("hidden")))
@interface _UIViewLayoutEngineRelativeAlignmentRectOriginCache : NSObject
{
    CGPoint _cachedOrigin;
    UIView *_delegate;
    NSISEngine *_cacheEngine;
    NSUInteger _variableChangeCount;
}

@property(nonatomic) NSUInteger variableChangeCount; // @synthesize variableChangeCount=_variableChangeCount;
@property(nonatomic) __weak NSISEngine *cacheEngine; // @synthesize cacheEngine=_cacheEngine;
@property(readonly, nonatomic) __weak UIView *delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
@property(readonly, nonatomic) CGPoint origin;
@property(readonly, nonatomic) BOOL isValid;
- (id)initWithDelegate:(id)arg1;

@end
