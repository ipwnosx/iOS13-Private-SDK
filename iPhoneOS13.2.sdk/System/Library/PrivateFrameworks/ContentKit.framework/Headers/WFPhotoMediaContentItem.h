//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFGenericFileContentItem.h>

#import <ContentKit/WFContentItemClass-Protocol.h>

@class PHAsset, WFFileType;

@interface WFPhotoMediaContentItem : WFGenericFileContentItem <WFContentItemClass>
{
    WFFileType *_preferredFileType;
}

+ (BOOL)isAvailableOnPlatform:(long long)arg1;
+ (BOOL)hasLibrary;
+ (id)pluralFilterDescription;
+ (id)filterDescription;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)ownedPasteboardTypes;
+ (id)ownedTypes;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)remoteItemWithAssetIdentifier:(id)arg1 named:(id)arg2;
+ (id)propertyBuilders;
+ (id)photoAlbums;
+ (void)runQuery:(id)arg1 withItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3;
+ (id)itemsWithBurstIdentifier:(id)arg1;
+ (id)itemWithAssetIdentifier:(id)arg1 assetFile:(id)arg2 nameIfKnown:(id)arg3;
+ (id)itemWithAssetIdentifier:(id)arg1 assetFile:(id)arg2;
+ (id)itemWithAssetIdentifier:(id)arg1;
@property(retain, nonatomic) WFFileType *preferredFileType; // @synthesize preferredFileType=_preferredFileType;
// - (void).cxx_destruct;
- (id)outputTypes;
- (id)assetRepresentationTypes;
- (id)fullSizeAssetResourcesInResources:(id)arg1;
- (BOOL)canGenerateRepresentationForType:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)copyWithName:(id)arg1 zone:(_NSZone )arg2;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id )arg3;
- (void)generateObjectRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)generateAVAsset:(CDUnknownBlockType)arg1 networkAccessAllowed:(BOOL)arg2;
- (void)generateFileRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;
- (id)preferredAssetResourceForType:(id)arg1;
- (void)retrieveFileWithImageManager:(CDUnknownBlockType)arg1 forType:(id)arg2;
- (void)retrieveAssetResource:(id)arg1 withNetworkAccess:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getThumbnail:(CDUnknownBlockType)arg1 ofSize:(CGSize)arg2;
@property(readonly, nonatomic) PHAsset *asset;
- (id)orientation;
- (BOOL)isScreenshot;
- (id)mediaType;
- (id)isFavorite;
- (id)isHidden;
- (id)isLivePhoto;
- (id)isBurst;
- (id)photoTypes;
- (BOOL)isPhotoType:(id)arg1;
- (id)height;
- (id)width;
- (id)model;
- (id)make;
- (CGSize)size;
- (id)metadataIfLocallyAvailable;
- (void)getFrameRate:(CDUnknownBlockType)arg1;
- (void)getMetadata:(CDUnknownBlockType)arg1;
- (id)assetResourceManager;
- (id)imageManager;
- (id)duration;
- (void)getPreferredFileExtension:(CDUnknownBlockType)arg1;
- (void)getPreferredFileSize:(CDUnknownBlockType)arg1;
- (id)additionalRepresentationsForSerialization;
- (BOOL)getListThumbnail:(CDUnknownBlockType)arg1 forSize:(CGSize)arg2;
- (BOOL)getListSubtitle:(CDUnknownBlockType)arg1;

@end

