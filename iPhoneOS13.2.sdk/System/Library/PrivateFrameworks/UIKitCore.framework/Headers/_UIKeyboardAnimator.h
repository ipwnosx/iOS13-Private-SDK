//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _UIKeyboardAnimatorAnimationStyle;

@interface _UIKeyboardAnimator : NSObject
{
    _UIKeyboardAnimatorAnimationStyle *_style;
}

// - (void).cxx_destruct;
- (void)completeAnimationWithState:(id)arg1;
- (void)runAnimationWithState:(id)arg1;
- (void)prepareForAnimationWithState:(id)arg1;
- (void)performAnimation:(CDUnknownBlockType)arg1 afterStarted:(CDUnknownBlockType)arg2 onCompletion:(CDUnknownBlockType)arg3;
- (void)applyToKeyboardOperations:(CDUnknownBlockType)arg1;
- (id)init;

@end

