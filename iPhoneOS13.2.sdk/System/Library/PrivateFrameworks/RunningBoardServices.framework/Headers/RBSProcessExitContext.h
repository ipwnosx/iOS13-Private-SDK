//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoardServices/BSXPCSecureCoding-Protocol.h>

@class NSDate, NSString, RBSProcessExitStatus, RBSTerminateContext;

@interface RBSProcessExitContext : NSObject <BSXPCSecureCoding>
{
    NSDate *_timestamp;
    long long _type;
    RBSProcessExitStatus *_status;
    RBSTerminateContext *_terminationContext;
}

+ (BOOL)supportsBSXPCSecureCoding;
@property(retain, nonatomic) RBSTerminateContext *terminationContext; // @synthesize terminationContext=_terminationContext;
@property(retain, nonatomic) RBSProcessExitStatus *status; // @synthesize status=_status;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
// - (void).cxx_destruct;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;

@end

