//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSNumberFormatter;

@protocol PXSmartAlbumEditingContext <NSObject>
@property(readonly, nonatomic) NSArray *personNames;
@property(readonly, nonatomic) NSArray *keywordValues;
@property(readonly, nonatomic) NSArray *lensModels;
@property(readonly, nonatomic) NSArray *cameraModels;
@property(readonly, nonatomic) NSArray *albumValues;
@property(readonly, nonatomic) NSArray *conditionTypeValues;
- (NSArray *)shutterSpeedValuesWithFormatter:(NSNumberFormatter *)arg1;
- (NSArray *)ISOValuesWithFormatter:(NSNumberFormatter *)arg1;
- (NSArray *)focalLengthValuesWithFormatter:(NSNumberFormatter *)arg1;
- (NSArray *)apertureValuesWithFormatter:(NSNumberFormatter *)arg1;
@end

