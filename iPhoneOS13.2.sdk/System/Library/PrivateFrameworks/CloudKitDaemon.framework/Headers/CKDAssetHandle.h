//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKObject.h>

@class NSData, NSNumber, NSString, NSUUID;

@interface CKDAssetHandle : CKObject
{
    NSNumber *_itemID;
    NSUUID *_UUID;
    NSString *_path;
    NSNumber *_volumeIndex;
    NSNumber *_fileID;
    NSNumber *_generationID;
    NSNumber *_lastUsedTime;
    NSData *_fileSignature;
    NSNumber *_status;
    NSNumber *_modTime;
    NSNumber *_fileSize;
    NSNumber *_chunkCount;
}

+ (id)descriptionWithStatus:(long long)arg1;
+ (id)CKSQLiteClassName;
@property(retain, nonatomic) NSNumber *chunkCount; // @synthesize chunkCount=_chunkCount;
@property(retain, nonatomic) NSNumber *fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSNumber *modTime; // @synthesize modTime=_modTime;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(retain, nonatomic) NSData *fileSignature; // @synthesize fileSignature=_fileSignature;
@property(retain, nonatomic) NSNumber *lastUsedTime; // @synthesize lastUsedTime=_lastUsedTime;
@property(retain, nonatomic) NSNumber *generationID; // @synthesize generationID=_generationID;
@property(retain, nonatomic) NSNumber *fileID; // @synthesize fileID=_fileID;
@property(retain, nonatomic) NSNumber *volumeIndex; // @synthesize volumeIndex=_volumeIndex;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(retain, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
// - (void).cxx_destruct;
- (BOOL)isEqualRevisionOfAssetHandle:(id)arg1 differencesDescription:(id )arg2;
- (BOOL)isEqualToAssetHandle:(id)arg1 keys:(id)arg2 differencesDescription:(id )arg3;
- (id)initWithItemID:(id)arg1 UUID:(id)arg2 path:(id)arg3;
- (id)statusDescription;
- (id)description;
- (id)CKPropertiesDescription;
- (BOOL)mayHaveAssetCacheManagedFile;
- (BOOL)shouldBeUnregisteredBeforeDeleted;
- (BOOL)mayBeEvicted;
- (id)initWithPropertyDictionary:(id)arg1;
- (id)dictionaryPropertyEncoding;

@end

