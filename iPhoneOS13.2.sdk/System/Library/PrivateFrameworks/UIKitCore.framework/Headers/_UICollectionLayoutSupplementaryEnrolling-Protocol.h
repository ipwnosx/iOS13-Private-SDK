//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, NSUUID;

@protocol _UICollectionLayoutSupplementaryEnrolling <NSObject>
- (void)pruneUncommitedEnrollments;
- (void)commitEnrollment:(NSUUID *)arg1;
- (long long)countForKind:(NSString *)arg1;
- (long long)kindIndexForEnrollmentIdentifier:(NSUUID *)arg1;
- (NSUUID *)enrollSupplementaryForKind:(NSString *)arg1;
@end

