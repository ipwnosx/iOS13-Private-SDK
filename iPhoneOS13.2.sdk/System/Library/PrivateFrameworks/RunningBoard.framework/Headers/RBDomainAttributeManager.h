//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/RBDomainAttributeManaging-Protocol.h>
#import <RunningBoard/RBStateCapturing-Protocol.h>

@class NSDictionary, NSString;
@protocol RBDomainAttributeDataProviding;

@interface RBDomainAttributeManager : NSObject <RBDomainAttributeManaging, RBStateCapturing>
{
    NSDictionary *_domainAttributeTemplatesByDomain;
    id <RBDomainAttributeDataProviding> _dataProvider;
}

// - (void).cxx_destruct;
- (BOOL)_compareTargetBundleProperties:(id)arg1 withTargetProperties:(id)arg2;
- (void)_prepareAttributeTemplates;
- (id)captureState;
@property(readonly, copy, nonatomic) NSString *stateCaptureTitle;
- (BOOL)containsAttributeWithDomain:(id)arg1 andName:(id)arg2;
- (BOOL)areTargetPropertiesValid:(id)arg1 forAttributeWithDomain:(id)arg2 andName:(id)arg3;
- (NSString *)endowmentNamespaceForDomain:(id)arg1 andName:(id)arg2;
- (id)originatorEntitlementsForDomain:(id)arg1 andName:(id)arg2;
- (id)allEntitlements;
- (id)attributesForDomain:(id)arg1 andName:(id)arg2 targetProperties:(id)arg3 withError:(id )arg4;
@property(readonly, copy) NSString *debugDescription;
- (id)initWithDataProvider:(id)arg1;

@end

