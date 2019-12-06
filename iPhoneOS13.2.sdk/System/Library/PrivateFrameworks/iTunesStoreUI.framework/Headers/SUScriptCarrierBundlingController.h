//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString;

@interface SUScriptCarrierBundlingController : SUScriptObject
{
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)updateLastKnownStatus:(id)arg1;
@property(readonly) NSString *statusUnlinked;
@property(readonly) NSString *statusUnknown;
@property(readonly) NSString *statusNotEligible;
@property(readonly) NSString *statusNeedsManualVerification;
@property(readonly) NSString *statusEligible;
@property(readonly) NSString *provisioningStyleOnce;
@property(readonly) NSString *provisioningStyleNever;
@property(readonly) NSString *provisioningStyleAlways;
- (id)_className;

@end

