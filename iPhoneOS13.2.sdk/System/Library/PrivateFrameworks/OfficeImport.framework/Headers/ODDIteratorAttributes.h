//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ODDIteratorAttributes : NSObject
{
    int mAxis;
    int mPointType;
    BOOL mHideLastTransition;
    int mStart;
    unsigned int mCount;
    int mStep;
}

- (void)setStep:(int)arg1;
- (int)step;
- (void)setCount:(unsigned int)arg1;
- (unsigned int)count;
- (void)setStart:(int)arg1;
- (int)start;
- (void)setHideLastTransition:(BOOL)arg1;
- (BOOL)hideLastTransition;
- (void)setPointType:(int)arg1;
- (int)pointType;
- (void)setAxis:(int)arg1;
- (int)axis;

@end

