//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface WBSParsecSubscriptionInfo : NSObject
{
    NSDate *_expirationDate;
    NSString *_type;
}

@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
// - (void).cxx_destruct;
@property(readonly, nonatomic, getter=isExpired) BOOL expired;
- (id)_initWithDictionary:(id)arg1;
- (id)initWithString:(id)arg1;

@end

