//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/BSInvalidatable-Protocol.h>

@class NSString, SBRootFolderController;

@interface _SBRootFolderControllerSidebarAppearStateOverrideAssertion : NSObject <BSInvalidatable, BSDescriptionProviding>
{
    BOOL _invalidated;
    NSString *_reason;
    SBRootFolderController *_rootFolderController;
}

@property(nonatomic, getter=isInvalidated) BOOL invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, nonatomic) __weak SBRootFolderController *rootFolderController; // @synthesize rootFolderController=_rootFolderController;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)invalidate;
- (void)dealloc;
- (id)initWithRootFolderController:(id)arg1 reason:(id)arg2;

@end

