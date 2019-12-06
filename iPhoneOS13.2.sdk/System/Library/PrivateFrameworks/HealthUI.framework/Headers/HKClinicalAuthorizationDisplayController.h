//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKClinicalSourceAuthorizationController, HKSource;

@interface HKClinicalAuthorizationDisplayController : NSObject
{
    HKClinicalSourceAuthorizationController *_authorizationController;
}

@property(readonly, nonatomic) HKClinicalSourceAuthorizationController *authorizationController; // @synthesize authorizationController=_authorizationController;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) HKSource *source;
- (id)currentTimeTitleForReadAuthorizationModeFooterWithSelectedMode:(long long)arg1 formatBlock:(CDUnknownBlockType)arg2;
- (id)committedTitleForReadAuthorizationModeFooterWithSelectedMode:(long long)arg1 formatBlock:(CDUnknownBlockType)arg2;
- (id)currentTimeDisplayStringForReadAuthorizationFooter;
- (id)_displayStringForReadAuthorizationDate:(id)arg1;
- (id)_displayReadAuthorizationDateForMode:(long long)arg1;
- (id)initWithAuthorizationController:(id)arg1;
- (id)init;

@end

