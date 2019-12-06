//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/CNInhibitor.h>

@class NSObject, NSString;
@protocol OS_os_transaction;

@interface _CNOSTransactionInhibitor : CNInhibitor
{
    NSString *_label;
    NSObject<OS_os_transaction> *_transaction;
}

@property(readonly, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
// - (void).cxx_destruct;
- (void)stop;
- (void)start;
- (id)initWithLabel:(id)arg1;

@end

