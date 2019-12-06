//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <TSReading/TSDGesture-Protocol.h>

@class NSString, TSDRep;
@protocol TSDGestureDelegate, TSDGestureTarget;

@interface UIGestureRecognizer (TSDGestureDispatcher) <TSDGesture>
- (BOOL)isDone;
@property(readonly, nonatomic) int gestureState;
@property(nonatomic) id <TSDGestureDelegate> gestureDelegate;
- (CGPoint)naturalLocationForRep:(id)arg1;
- (CGPoint)boundsLocationForICC:(id)arg1;
- (CGPoint)unscaledLocationForICC:(id)arg1;
@property(retain, nonatomic) TSDRep *targetRep;
@property(retain, nonatomic) id <TSDGestureTarget> cachedGestureTarget;
@property(retain, nonatomic) NSString *gestureKind;
- (id)initWithGestureDispatcher:(id)arg1 gestureKind:(id)arg2;
@end

