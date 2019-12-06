//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>

@class NSDate, NSString, SBFloatingDockController;

@interface SBFloatingDockBehaviorAssertion : NSObject <BSDescriptionProviding>
{
    BOOL _animated;
    BOOL _gesturePossible;
    NSUInteger _level;
    double _progress;
    NSString *_reason;
    NSDate *_timestamp;
    SBFloatingDockController *_floatingDockController;
}

@property(readonly, nonatomic) __weak SBFloatingDockController *floatingDockController; // @synthesize floatingDockController=_floatingDockController;
@property(readonly, copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) double progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) BOOL gesturePossible; // @synthesize gesturePossible=_gesturePossible;
@property(readonly, nonatomic, getter=isAnimated) BOOL animated; // @synthesize animated=_animated;
@property(readonly, nonatomic) NSUInteger level; // @synthesize level=_level;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isPinned) BOOL pinned;
- (void)modifyProgress:(double)arg1 interactive:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)invalidateWithCompletion:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithFloatingDockController:(id)arg1 visibleProgress:(double)arg2 animated:(BOOL)arg3 gesturePossible:(BOOL)arg4 atLevel:(NSUInteger)arg5 reason:(id)arg6 withCompletion:(CDUnknownBlockType)arg7;
- (id)initWithVisibleProgress:(double)arg1 gesturePossible:(BOOL)arg2 atLevel:(NSUInteger)arg3 reason:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (id)initWithPinned:(BOOL)arg1 gesturePossible:(BOOL)arg2 atLevel:(NSUInteger)arg3 reason:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (id)init;

@end

