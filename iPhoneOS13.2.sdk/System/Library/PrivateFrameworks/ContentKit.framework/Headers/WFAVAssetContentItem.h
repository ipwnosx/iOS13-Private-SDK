//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFGenericFileContentItem.h>

#import <ContentKit/WFContentItemClass-Protocol.h>

@class AVAsset;

@interface WFAVAssetContentItem : WFGenericFileContentItem <WFContentItemClass>
{
}

+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)contentCategories;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)propertyBuilders;
- (BOOL)canGenerateRepresentationForType:(id)arg1;
- (id)supportedTypes;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id )arg3;
- (void)generateFileRepresentation:(CDUnknownBlockType)arg1 forType:(id)arg2 metadata:(id)arg3 options:(id)arg4;
- (void)generateFileRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;
- (id)metadataItemForCommonKey:(id)arg1;
- (id)generateExportSessionForType:(id)arg1;
@property(readonly, nonatomic) AVAsset *asset;
- (id)preferredFileType;
- (id)duration;
- (void)getPreferredFileSize:(CDUnknownBlockType)arg1;
- (id)frameRate;
- (BOOL)getListAltText:(CDUnknownBlockType)arg1;
- (BOOL)getListSubtitle:(CDUnknownBlockType)arg1;

@end

