//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSmartAlbumCondition.h>

@class NSArray, PXLabeledValue;

@interface PXSmartAlbumFlashCondition : PXSmartAlbumCondition
{
    NSArray *_flashFiredValues;
}

+ (id)defaultSingleQueryForEditingContext:(id)arg1;
// - (void).cxx_destruct;
@property(retain, nonatomic) PXLabeledValue *flashFiredValue;
@property(readonly, nonatomic) NSArray *flashFiredValues;

@end

