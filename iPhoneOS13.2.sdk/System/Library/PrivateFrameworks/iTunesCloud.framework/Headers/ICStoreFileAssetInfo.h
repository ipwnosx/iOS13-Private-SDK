//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICStoreFinanceItemMetadata, NSArray, NSData, NSDictionary, NSString, NSURL;

@interface ICStoreFileAssetInfo : NSObject
{
    NSDictionary *_responseDictionary;
    NSURL *_assetURL;
    NSString *_downloadKey;
    NSArray *_fairPlayInfoList;
    long long _flavorType;
    NSString *_fileExtension;
    unsigned long long _fileSize;
    ICStoreFinanceItemMetadata *_metadata;
    NSData *_md5;
    long long _expectedProtectionType;
}

@property(nonatomic) long long expectedProtectionType; // @synthesize expectedProtectionType=_expectedProtectionType;
@property(copy, nonatomic) NSData *md5; // @synthesize md5=_md5;
@property(copy, nonatomic) ICStoreFinanceItemMetadata *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSString *fileExtension; // @synthesize fileExtension=_fileExtension;
@property(nonatomic) long long flavorType; // @synthesize flavorType=_flavorType;
@property(copy, nonatomic) NSArray *fairPlayInfoList; // @synthesize fairPlayInfoList=_fairPlayInfoList;
@property(copy, nonatomic) NSString *downloadKey; // @synthesize downloadKey=_downloadKey;
@property(copy, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
- (id)_metadataDictionary;
@property(readonly, nonatomic) long long protectionType;
@property(readonly, copy, nonatomic) NSDictionary *responseDictionary;
- (id)initWithFileAssetResponseDictionary:(id)arg1;
- (id)initWithAssetURL:(id)arg1;

@end
