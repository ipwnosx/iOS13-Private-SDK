//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class TSUPointerKeyDictionary;

@interface TSWPSwipeGestureRecognizer : UIGestureRecognizer
{
    double mStartTime;
    NSUInteger mTouchCountAttained;
    TSUPointerKeyDictionary *mStartLocations;
    int mDirection;
    NSUInteger mNumberOfTouchesRequired;
}

@property(nonatomic) int direction; // @synthesize direction=mDirection;
@property(nonatomic) NSUInteger numberOfTouchesRequired; // @synthesize numberOfTouchesRequired=mNumberOfTouchesRequired;
- (void)dealloc;
- (void)reset;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (CGPoint)locationInView:(id)arg1;
- (BOOL)p_touchWasSwipe:(id)arg1 movedFarOut:(BOOL )arg2;
- (void)p_recordTouches:(id)arg1;
- (BOOL)p_swipeDirectionValidForXDiff:(double)arg1 yDiff:(double)arg2;
- (BOOL)p_swipeDirectionValidForAngle:(double)arg1 direction:(int)arg2;
- (double)p_angleDifferenceForAngle1:(double)arg1 angle2:(double)arg2;

@end

