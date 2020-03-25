//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSKDocumentObject-Protocol.h>
#import <iWorkImport/TSKPencilAnnotation-Protocol.h>
#import <iWorkImport/TSPCopying-Protocol.h>
#import <iWorkImport/TSWPOverlappingField-Protocol.h>
#import <iWorkImport/TSWPTextSpanningObject-Protocol.h>

@class NSString, TSWPStorage;
@protocol TSKPencilAnnotationStorage;

__attribute__((visibility("hidden")))
@interface TSWPPencilAnnotation : TSPObject <TSPCopying, TSKDocumentObject, TSWPTextSpanningObject, TSWPOverlappingField, TSKPencilAnnotation>
{
    TSWPStorage *_parentStorage;
    NSString *_textAttributeUUIDString;
    id <TSKPencilAnnotationStorage> _pencilAnnotationStorage;
}

@property(retain, nonatomic) id <TSKPencilAnnotationStorage> pencilAnnotationStorage; // @synthesize pencilAnnotationStorage=_pencilAnnotationStorage;
@property(readonly, nonatomic) NSString *textAttributeUUIDString; // @synthesize textAttributeUUIDString=_textAttributeUUIDString;
@property(nonatomic) __weak TSWPStorage *parentStorage; // @synthesize parentStorage=_parentStorage;
// - (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct PencilAnnotationArchive )arg1 unarchiver:(id)arg2;
@property(readonly, nonatomic) NSString *uuid;
- (BOOL)isInDocument;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEquivalentToObject:(id)arg1;
- (void)resetTextAttributeUUIDString;
@property(readonly, copy) NSString *description;
- (void)i_setTextAttributeUUIDString:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 pencilAnnotationStorage:(id)arg2;

@end
