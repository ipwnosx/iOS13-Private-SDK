//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/OCDReaderDelegate-Protocol.h>

@class CMArchiveManager, CMMapper, CMState, NSString, OCDDocument;

__attribute__((visibility("hidden")))
@interface QLTop : NSObject <OCDReaderDelegate>
{
    CMMapper *_mapper;
    CMState *_state;
    CMArchiveManager *_archiver;
    OCDDocument *_document;
    NSString *_fileName;
    NSUInteger _format;
    BOOL _forIndexing;
}

+ (BOOL)supportsProgressiveMapping;
+ (void)fillHTMLArchiveForOfficeData:(id)arg1 fileName:(id)arg2 dataFormat:(NSUInteger)arg3 archiver:(id)arg4;
+ (id)metadataForBinaryOfficeFileAtURL:(id)arg1 error:(id )arg2;
+ (void)fillHTMLArchiveForOfficeFile:(id)arg1 dataFormat:(NSUInteger)arg2 archiver:(id)arg3;
+ (void)fillHTMLArchiveForOfficeFile:(id)arg1 orData:(id)arg2 dataFileName:(id)arg3 dataFormat:(NSUInteger)arg4 archiver:(id)arg5;
@property BOOL forIndexing; // @synthesize forIndexing=_forIndexing;
@property(readonly) CMState *state; // @synthesize state=_state;
@property(readonly) CMMapper *mapper; // @synthesize mapper=_mapper;
// - (void).cxx_destruct;
- (void)readerDidEndDocument:(id)arg1;
- (void)readerDidReadElement:(id)arg1 atIndex:(NSUInteger)arg2 inDocument:(id)arg3 isLastElement:(BOOL)arg4;
- (void)readerDidStartDocument:(id)arg1 withElementCount:(long long)arg2;
- (id)documentWithFile:(id)arg1 orData:(id)arg2 isXML:(BOOL)arg3 archiver:(id)arg4;
- (void)readFile:(id)arg1 orData:(id)arg2 dataFileName:(id)arg3 format:(NSUInteger)arg4 archiver:(id)arg5 forIndexing:(BOOL)arg6;
- (void)setupMappingStateWithDocument:(id)arg1;
- (Class)readerClassForBinaryDocuments;
- (Class)readerClassForXMLDocuments;
- (Class)mapperClassForIndexing:(BOOL)arg1;
- (Class)stateClass;
- (void)initializeClasses;

@end

