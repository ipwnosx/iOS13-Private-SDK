//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface WLKStoreOfferPeriod : NSObject
{
    NSString *_type;
    NSNumber *_duration;
}

@property(readonly, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (id)_offerPeriodForString:(id)arg1;
- (id)initWithString:(id)arg1;

@end

