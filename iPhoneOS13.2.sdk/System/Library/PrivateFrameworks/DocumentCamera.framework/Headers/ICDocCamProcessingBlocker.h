//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol ICDocCamProcessingBlockerDelegate;

__attribute__((visibility("hidden")))
@interface ICDocCamProcessingBlocker : NSObject
{
    id <ICDocCamProcessingBlockerDelegate> _delegate;
    NSMutableSet *_blockerSet;
}

@property(retain, nonatomic) NSMutableSet *blockerSet; // @synthesize blockerSet=_blockerSet;
@property(nonatomic) __weak id <ICDocCamProcessingBlockerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)removeBlockerOfType:(id)arg1;
- (void)addBlockerOfType:(id)arg1 clearRectangles:(BOOL)arg2 clearQueue:(BOOL)arg3;
- (BOOL)blocked;
- (id)initWithDelegate:(id)arg1;

@end

