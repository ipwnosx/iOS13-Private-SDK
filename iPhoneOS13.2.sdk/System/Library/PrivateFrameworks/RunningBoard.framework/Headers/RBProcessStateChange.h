//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RBProcessState, RBSProcessIdentity;

@interface RBProcessStateChange : NSObject
{
    RBSProcessIdentity *_identity;
    RBProcessState *_originalState;
    RBProcessState *_updatedState;
}

@property(readonly, nonatomic) RBProcessState *updatedState; // @synthesize updatedState=_updatedState;
@property(readonly, nonatomic) RBProcessState *originalState; // @synthesize originalState=_originalState;
@property(readonly, nonatomic) RBSProcessIdentity *identity; // @synthesize identity=_identity;
// - (void).cxx_destruct;
- (id)changeByApplyingChange:(id)arg1;
- (id)initWithIdentity:(id)arg1 originalState:(id)arg2 updatedState:(id)arg3;

@end

