//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RBSProcessHandle, RBSProcessState;

@interface RBSProcessStateUpdate : NSObject
{
    RBSProcessHandle *_process;
    RBSProcessState *_state;
    RBSProcessState *_previousState;
}

+ (id)updateWithState:(id)arg1 previousState:(id)arg2;
@property(readonly, nonatomic) RBSProcessState *previousState; // @synthesize previousState=_previousState;
@property(readonly, nonatomic) RBSProcessState *state; // @synthesize state=_state;
@property(readonly, nonatomic) RBSProcessHandle *process; // @synthesize process=_process;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;

@end

