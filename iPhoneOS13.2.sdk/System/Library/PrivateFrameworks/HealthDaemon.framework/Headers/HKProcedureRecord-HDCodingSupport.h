//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKProcedureRecord.h>

#import <HealthDaemon/HDCoding-Protocol.h>

@interface HKProcedureRecord (HDCodingSupport) <HDCoding>
+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;
- (BOOL)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;
@end

