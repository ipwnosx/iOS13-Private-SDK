//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKDataProviderValue-Protocol.h>

@class NSDate, NSNumber, NSString;

@interface WDGenericDataProviderSecondaryValue : NSObject <HKDataProviderValue>
{
    NSNumber *_average;
    NSDate *_date;
    NSString *_formatString;
}

@property(retain, nonatomic) NSString *formatString; // @synthesize formatString=_formatString;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
// - (void).cxx_destruct;
- (id)lastUpdatedDescriptionWithDateCache:(id)arg1;
- (id)attributedStringWithDisplayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 dateCache:(id)arg5;
- (id)initWithAverage:(id)arg1;

@end

