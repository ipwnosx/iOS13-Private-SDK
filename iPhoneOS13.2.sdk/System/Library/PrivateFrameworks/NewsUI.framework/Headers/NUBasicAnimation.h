//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CABasicAnimation.h>


@interface NUBasicAnimation : CABasicAnimation <CAAnimationDelegate>
{
    id /* CDUnknownBlockType */ _completion;
}

+ (id)animationWithKeyPath:(id)arg1;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completion; // @synthesize completion=_completion;
// - (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;

@end

