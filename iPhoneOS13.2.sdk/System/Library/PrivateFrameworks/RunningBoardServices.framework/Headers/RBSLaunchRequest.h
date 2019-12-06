//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RunningBoardServices/RBSRequest.h>

#import <RunningBoardServices/BSXPCSecureCoding-Protocol.h>

@class NSString, RBSLaunchContext;

@interface RBSLaunchRequest : RBSRequest <BSXPCSecureCoding, NSCopying>
{
    RBSLaunchContext *_context;
}

+ (BOOL)supportsBSXPCSecureCoding;
@property(readonly, nonatomic) RBSLaunchContext *context; // @synthesize context=_context;
// - (void).cxx_destruct;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)execute:(out id )arg1;
- (BOOL)execute:(out id )arg1 error:(out id )arg2;
- (BOOL)execute:(out id )arg1 assertion:(out id )arg2 error:(out id )arg3;
- (id)initWithContext:(id)arg1;

@end

