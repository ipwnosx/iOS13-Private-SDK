//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, ACAccountStore, NSString;

@interface AAQuotaDepletionAlert : NSObject
{
    NSString *_dataclass;
    ACAccountStore *_accountStore;
    ACAccount *_primaryAccount;
}

+ (BOOL)_isDisabledDataclass:(id)arg1;
// - (void).cxx_destruct;
- (id)_deviceSpecificLocalizedString:(id)arg1;
- (BOOL)showIfNecessaryWithHandler:(CDUnknownBlockType)arg1;
- (void)showWithHandler:(CDUnknownBlockType)arg1;
- (id)_primaryAccount;
- (id)initForDataclass:(id)arg1;
- (id)init;

@end

