//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLPhotoEditPersistenceManager : NSObject
{
}

+ (BOOL)validateAdjustmentData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 error:(id )arg4;
- (id)dataFromCompositionController:(id)arg1 outFormatIdentifier:(id )arg2 outFormatVersion:(id )arg3 exportProperties:(id)arg4;
- (id)debugDescriptionForPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3;
- (id)debugDescriptionForAdjustmentData:(id)arg1;
- (void)loadMasterDimensionsFromPhotoEditData:(id)arg1 outMasterWidth:(long long )arg2 outMasterHeight:(long long )arg3;
- (id)loadPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 importProperties:(id)arg4 error:(id )arg5;
- (id)loadCompositionFrom:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 error:(id )arg4;

@end

