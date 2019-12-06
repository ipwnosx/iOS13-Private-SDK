//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLPrimaryResourceDataStoreKey.h>

@class NSURL;

@interface PLPrimaryResourceDataStoreReferenceFileKey : PLPrimaryResourceDataStoreKey
{
    NSURL *_cachedUrl;
    unsigned char _onceToken;
//    struct PLPrimaryDataStore_ReferenceFileStrategy_KeyStruct_V1 _keyStruct;
}

+ (id)fileURLForPayloadKeyData:(NSUInteger)arg1 assetID:(id)arg2;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;
// - (void).cxx_destruct;
- (id)uniformTypeIdentifier;
- (id)initWithKeyStruct:(const void *)arg1;
- (id)keyData;
- (id)fileURLForAssetID:(id)arg1;
- (id)fileURLForAssetID:(id)arg1 inContext:(id)arg2;
- (id)initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2;
- (id)initWithResourceType:(unsigned int)arg1;

@end

