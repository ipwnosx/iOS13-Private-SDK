//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDSFoundation/IDSCKDatabaseOperation.h>

@class NSArray;

@interface IDSCKModifyRecordZonesOperation : IDSCKDatabaseOperation
{
    NSArray *_recordZonesToSave;
    NSArray *_recordZoneIDsToDelete;
    id /* CDUnknownBlockType */ _modifyRecordZonesCompletionBlock;
    long long _qualityOfService;
}

+ (id)alloc;
+ (Class)__class;
@property long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(copy, nonatomic) id /* CDUnknownBlockType */ modifyRecordZonesCompletionBlock; // @synthesize modifyRecordZonesCompletionBlock=_modifyRecordZonesCompletionBlock;
@property(copy, nonatomic) NSArray *recordZoneIDsToDelete; // @synthesize recordZoneIDsToDelete=_recordZoneIDsToDelete;
@property(copy, nonatomic) NSArray *recordZonesToSave; // @synthesize recordZonesToSave=_recordZonesToSave;
// - (void).cxx_destruct;

@end

