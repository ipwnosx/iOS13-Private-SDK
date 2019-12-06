//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDAssetZoneKey, NSMutableDictionary, NSMutableOrderedSet;

__attribute__((visibility("hidden")))
@interface CKDAssetZone : NSObject
{
    CKDAssetZoneKey *_assetZoneKey;
    NSMutableOrderedSet *_assetRecords;
    NSMutableDictionary *_assetRecordsByRecordID;
}

@property(retain, nonatomic) NSMutableDictionary *assetRecordsByRecordID; // @synthesize assetRecordsByRecordID=_assetRecordsByRecordID;
@property(retain, nonatomic) NSMutableOrderedSet *assetRecords; // @synthesize assetRecords=_assetRecords;
@property(retain, nonatomic) CKDAssetZoneKey *assetZoneKey; // @synthesize assetZoneKey=_assetZoneKey;
// - (void).cxx_destruct;
- (id)description;
- (id)CKPropertiesDescription;
- (void)addMMCSSectionItem:(id)arg1;
- (void)addRereferencedMMCSItem:(id)arg1;
- (void)addMMCSItem:(id)arg1;
- (id)initWithAssetZoneKey:(id)arg1;

@end

