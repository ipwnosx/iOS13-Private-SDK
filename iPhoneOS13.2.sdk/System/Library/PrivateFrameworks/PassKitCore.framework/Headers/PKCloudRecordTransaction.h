//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKCloudRecordObject.h>

@class PKPaymentTransaction;

@interface PKCloudRecordTransaction : PKCloudRecordObject
{
    PKPaymentTransaction *_transaction;
}

+ (BOOL)supportsSecureCoding;
+ (id)dateFormatter;
@property(retain, nonatomic) PKPaymentTransaction *transaction; // @synthesize transaction=_transaction;
// - (void).cxx_destruct;
- (id)_descriptionWithIncludeItem:(BOOL)arg1;
- (id)description;
- (id)descriptionWithItem:(BOOL)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)item;

@end

