//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDMedicalRecordEntity.h>

@interface HDDiagnosticTestReportEntity : HDMedicalRecordEntity
{
}

+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;
+ (BOOL)addCodableObject:(id)arg1 toCollection:(id)arg2;
+ (id)codableObjectsFromObjectCollection:(id)arg1;
+ (BOOL)isConcreteEntity;
+ (long long)preferredEntityType;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id )arg5;
// + (const CDStruct_4c492439 )columnDefinitionsWithCount:(NSUInteger )arg1;
+ (id)databaseTable;

@end

