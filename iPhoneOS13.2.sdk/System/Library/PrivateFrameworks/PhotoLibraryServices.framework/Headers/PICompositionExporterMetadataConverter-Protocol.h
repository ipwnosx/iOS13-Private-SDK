//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSDictionary, NSMutableDictionary, NSNumber;

@protocol PICompositionExporterMetadataConverter <NSObject>
- (BOOL)setPhotoFeatureFlags:(NSNumber *)arg1 properties:(NSMutableDictionary *)arg2 error:(id )arg3;
- (NSNumber *)photoFeatureFlags:(NSDictionary *)arg1 error:(id )arg2;
- (BOOL)setPhotoProcessingFlags:(NSNumber *)arg1 properties:(NSMutableDictionary *)arg2 error:(id )arg3;
- (NSNumber *)photoProcessingFlagsFromProperties:(NSDictionary *)arg1 error:(id )arg2;
- (BOOL)setImageVariation:(id)arg1 properties:(NSMutableDictionary *)arg2 error:(id )arg3;
- (NSArray *)videoMetadataForVariation:(id)arg1 error:(id )arg2;
@end

