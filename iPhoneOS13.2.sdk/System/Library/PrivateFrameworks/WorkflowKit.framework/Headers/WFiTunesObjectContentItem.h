//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFContentItem.h>

#import <WorkflowKit/WFURLCoercion-Protocol.h>

@class WFiTunesObject;

@interface WFiTunesObjectContentItem : WFContentItem <WFURLCoercion>
{
}

+ (BOOL)canLowercaseTypeDescription;
+ (id)countDescription;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)contentCategories;
+ (id)outputTypes;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)propertyBuilders;
+ (void)urlItem_generateObjectRepresentations:(CDUnknownBlockType)arg1 fromiTunesURL:(id)arg2 forClass:(Class)arg3;
+ (void)urlItem_generateObjectRepresentations:(CDUnknownBlockType)arg1 fromURL:(id)arg2 forClass:(Class)arg3;
+ (BOOL)urlItem_canCoerceFromURL:(id)arg1;
+ (BOOL)parseiTunesURL:(id)arg1 itemIdentifier:(id )arg2 countryCode:(id )arg3;
+ (id)urlItem_sharingItemClassesByBundleIdentifier;
+ (id)urlItem_outputClasses;
- (BOOL)canGenerateRepresentationForType:(id)arg1;
- (id)preferredFileType;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id )arg3;
- (void)generateFileRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;
- (void)getPreferredArtworkURL:(CDUnknownBlockType)arg1;
- (void)getArtworkForSize:(CGSize)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getArtworkDataWithURLs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)possibleArtworkURLs;
@property(readonly, nonatomic) WFiTunesObject *object;

@end

