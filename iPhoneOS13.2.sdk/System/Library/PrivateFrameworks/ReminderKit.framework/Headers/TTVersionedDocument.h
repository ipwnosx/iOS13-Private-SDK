//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TTVersionedDocument : NSObject
{
    struct Document {
        /* void * CDUnknownFunctionPointerType  */;
        basic_string_a1f69cfb;
        unsigned int [1];
        int;
//         struct RepeatedPtrField<versioned_document::Version>;
        unsigned int;
    } _documentArchive;
}

+ (unsigned int)versionedDocumentSerializationVersion;
+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;
// @property(nonatomic) struct Document documentArchive; // @synthesize documentArchive=_documentArchive;
- (void)saveToArchive:(Document_0e94f2f5 )arg1;
- (id)serialize;
- (unsigned int)maxDocumentVersion;
- (NSUInteger)mergeWithVersionedDocument:(id)arg1;
// - (void)saveCurrentVersion:(struct Version )arg1;
- (id)serializeCurrentVersion:(unsigned int )arg1;
- (void)mergeVersion:(unsigned int)arg1 fromData:(id)arg2;
@property(readonly, nonatomic) NSUInteger futureVersionCount;
- (void)dealloc;
- (void)loadDocumentArchive:(Document_0e94f2f5 )arg1;
- (void)loadArchive:(const Document_0e94f2f5 )arg1;
- (void)loadData:(id)arg1;
- (id)initWithArchive:(const Document_0e94f2f5 )arg1;
- (id)initWithData:(id)arg1;

@end

