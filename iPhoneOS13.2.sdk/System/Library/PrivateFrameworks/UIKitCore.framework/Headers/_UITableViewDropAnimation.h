//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableArray, UIDragItem;

__attribute__((visibility("hidden")))
@interface _UITableViewDropAnimation : NSObject <UIDragAnimating>
{
    BOOL _didBeginAnimation;
    UIDragItem *_dragItem;
    NSMutableArray *_animationsBlocks;
    NSMutableArray *_completionBlocks;
}

@property(retain, nonatomic) NSMutableArray *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
@property(retain, nonatomic) NSMutableArray *animationsBlocks; // @synthesize animationsBlocks=_animationsBlocks;
@property(nonatomic, getter=_didBeginAnimation, setter=_setDidBeginAnimation:) BOOL didBeginAnimation; // @synthesize didBeginAnimation=_didBeginAnimation;
@property(retain, nonatomic) UIDragItem *dragItem; // @synthesize dragItem=_dragItem;
// - (void).cxx_destruct;
- (void)_executeCompletionBlocks;
- (void)_addClientBlocksToAnimator:(id)arg1;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (void)addAnimations:(CDUnknownBlockType)arg1;
- (id)initWithDragItem:(id)arg1;

@end

