//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/BSDescriptionProviding-Protocol.h>

@class NSMutableDictionary;

@interface RBBundlePropertiesBSXPCProvider : NSObject <BSDescriptionProviding>
{
    NSMutableDictionary *_propertiesByIdentifier;
//    struct os_unfair_lock_s _lock;
}

// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)removePropertiesForIdentifier:(id)arg1;
- (id)propertiesForIdentifier:(id)arg1;
- (id)init;

@end

