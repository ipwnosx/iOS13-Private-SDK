//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKSample.h>

#import <HealthUI/HKDataMetadataObject-Protocol.h>

@interface HKSample (HKMostRecentValueDataProvider) <HKDataMetadataObject>
- (id)dataProviderValue;
- (id)dataForSharingWithHealthStore:(id)arg1;
- (void)fetchSubSampleTypesWithHealthStore:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)detailedReportName;
- (id)subSampleSectionTitle;
- (id)subSamplePredicate;
- (id)fixedAggregateValuesWithDisplayTypeController:(id)arg1 unitController:(id)arg2;
- (id)hk_additionalMetadataSectionsWithHealthStore:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3;
- (void)addDetailValuesToSection:(id)arg1;
@end

