//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPDecoderReadCoordinatorDelegate-Protocol.h>

@class NSDictionary, TSPComponent, TSPDeepCopyObjectMap, TSPObject, TSPObjectContext;

__attribute__((visibility("hidden")))
@interface TSPDeepCopyReadAssistant : NSObject <TSPDecoderReadCoordinatorDelegate>
{
    TSPObjectContext *_context;
    TSPDeepCopyObjectMap *_objectMap;
    TSPObject *_cachedMetadataObject;
    NSDictionary *_cachedDataMap;
    TSPComponent *_component;
}

// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isCrossAppPaste;
@property(readonly, nonatomic) BOOL isCrossDocumentPaste;
@property(readonly, nonatomic) long long sourceType;
@property(readonly, nonatomic) BOOL hasDocumentVersionUUID;
@property(readonly, nonatomic) NSUInteger fileFormatVersion;
- (BOOL)shouldDecodeMissingDataAsRemote;
- (id)dataInfoForIdentifier:(long long)arg1;
- (id)cachedDataForIdentifier:(long long)arg1;
- (id)objectUUIDForExternalReferenceToIdentifier:(long long)arg1;
- (long long)objectIdentifierForUUID:(id)arg1;
- (BOOL)shouldResolveExternalReferencesUsingObjectUUID;
- (BOOL)canResolveExternalReferences;
- (id)rootObjectComponent;
- (BOOL)processMetadataObject:(id)arg1 error:(id )arg2;
- (id)metadataComponent;
- (id)cachedMetadataObject;
- (id)decodeDeepCopySerializedData:(id)arg1 options:(id)arg2 error:(id )arg3;
- (id)initWithContext:(id)arg1 objectMap:(id)arg2 cachedMetadataObject:(id)arg3 cachedDataMap:(id)arg4;
- (id)init;

@end

