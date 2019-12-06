//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group;

@interface CCUIAnimationRunner : NSObject
{
    NSObject<OS_dispatch_group> *_previousAnimationGroup;
}

+ (void)_runC2AnimationsInBatch:(id)arg1 animationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)_runCAAnimationsInBatch:(id)arg1 animationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)runner;
// - (void).cxx_destruct;
- (void)additivelyRunAnimationBatch:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)runAnimationBatch:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;

@end

