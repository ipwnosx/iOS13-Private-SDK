//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKValueDataProvider.h>

@interface HKCumulativeSumCurrentValueDataProvider : HKValueDataProvider
{
}

- (void)_sumFromDate:(id)arg1 toDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_dataProviderValueFromMostRecentSample:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_mostRecentValueQueryWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchOperationWithCompletion:(CDUnknownBlockType)arg1;
- (id)currentValue;

@end

