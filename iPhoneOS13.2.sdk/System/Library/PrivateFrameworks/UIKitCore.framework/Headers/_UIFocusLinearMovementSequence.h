//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface _UIFocusLinearMovementSequence : NSObject
{
    BOOL _looping;
    BOOL _restrictEnteringSequence;
    NSArray *_items;
}

+ (id)sequenceWithItems:(id)arg1 loops:(BOOL)arg2;
+ (id)sequenceWithItems:(id)arg1 loops:(BOOL)arg2 restrictEnteringSequence:(BOOL)arg3;
@property(readonly, nonatomic, getter=restrictsEnteringSequence) BOOL restrictEnteringSequence; // @synthesize restrictEnteringSequence=_restrictEnteringSequence;
@property(readonly, nonatomic, getter=isLooping) BOOL looping; // @synthesize looping=_looping;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
// - (void).cxx_destruct;
- (id)initWithItems:(id)arg1 loops:(BOOL)arg2 restrictEnteringSequence:(BOOL)arg3;
- (id)initWithItems:(id)arg1 loops:(BOOL)arg2;
- (id)init;

@end

