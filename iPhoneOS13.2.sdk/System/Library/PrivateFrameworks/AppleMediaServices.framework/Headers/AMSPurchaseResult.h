//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSPurchase, NSDictionary, NSError, NSString;

@interface AMSPurchaseResult : NSObject
{
    NSString *_correlationID;
    NSError *_error;
    AMSPurchase *_purchase;
    NSDictionary *_responseDictionary;
}

@property(copy, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
@property(copy, nonatomic) AMSPurchase *purchase; // @synthesize purchase=_purchase;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSString *correlationID; // @synthesize correlationID=_correlationID;
// - (void).cxx_destruct;

@end

