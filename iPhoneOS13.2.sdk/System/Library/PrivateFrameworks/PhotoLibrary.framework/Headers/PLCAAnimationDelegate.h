//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface PLCAAnimationDelegate : NSObject <CAAnimationDelegate>
{
    id /* CDUnknownBlockType */ _completion;
    id /* CDUnknownBlockType */ _start;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ start; // @synthesize start=_start;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completion; // @synthesize completion=_completion;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)animationDidStart:(id)arg1;
- (void)dealloc;

@end

