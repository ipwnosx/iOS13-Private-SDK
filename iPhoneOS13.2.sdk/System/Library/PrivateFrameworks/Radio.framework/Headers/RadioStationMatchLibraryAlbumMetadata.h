//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Radio/RadioStationMatchMetadata.h>

@class NSNumber, NSString;

@interface RadioStationMatchLibraryAlbumMetadata : RadioStationMatchMetadata
{
    NSString *_albumName;
    NSNumber *_albumStoreID;
    NSNumber *_representativeCloudID;
}

+ (id)metadataKey;
@property(copy, nonatomic) NSNumber *representativeCloudID; // @synthesize representativeCloudID=_representativeCloudID;
@property(copy, nonatomic) NSNumber *albumStoreID; // @synthesize albumStoreID=_albumStoreID;
@property(copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
// - (void).cxx_destruct;
- (id)copyMetadataDictionary;

@end

