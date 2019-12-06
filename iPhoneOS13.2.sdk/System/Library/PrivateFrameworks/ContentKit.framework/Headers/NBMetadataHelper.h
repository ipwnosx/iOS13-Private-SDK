//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NBPhoneMetaData, NSString;

__attribute__((visibility("hidden")))
@interface NBMetadataHelper : NSObject
{
    NBPhoneMetaData *_cachedMetaData;
    NSString *_cachedMetaDataKey;
}

+ (BOOL)hasValue:(id)arg1;
@property(retain, nonatomic) NSString *cachedMetaDataKey; // @synthesize cachedMetaDataKey=_cachedMetaDataKey;
@property(retain, nonatomic) NBPhoneMetaData *cachedMetaData; // @synthesize cachedMetaData=_cachedMetaData;
// - (void).cxx_destruct;
- (id)getMetadataForNonGeographicalRegion:(id)arg1;
- (id)getMetadataForRegion:(id)arg1;
- (id)normalizeNonBreakingSpace:(id)arg1;
- (id)stringByTrimming:(id)arg1;
- (id)countryCodeFromRegionCode:(id)arg1;
- (id)regionCodeFromCountryCode:(id)arg1;
- (id)getAllMetadata;
- (void)clearHelper;
- (id)CCode2CNMap;
- (void)initializeHelper;

@end

