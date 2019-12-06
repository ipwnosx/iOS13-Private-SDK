//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSDContainerInfo-Protocol.h>
#import <iWorkImport/TSKDocumentObject-Protocol.h>
#import <iWorkImport/TSKTransformableObject-Protocol.h>
#import <iWorkImport/TSWPStorageParent-Protocol.h>

@class NSArray, NSObject, TSDInfoGeometry, TSWPStorage;
@protocol TSDContainerInfo, TSDOwningAttachment;

__attribute__((visibility("hidden")))
@interface KNNoteInfo : TSPObject <TSDContainerInfo, TSWPStorageParent, TSKDocumentObject, TSKTransformableObject>
{
    NSObject<TSDContainerInfo> *_parentInfo;
    BOOL _shrinkTextForPrinting;
    NSObject<TSDContainerInfo> *parentInfo;
    TSWPStorage *_containedStorage;
    NSUInteger _initialCharacterIndexForExporting;
    CGRect _frameForPrinting;
}

+ (BOOL)needsObjectUUID;
@property(nonatomic) NSUInteger initialCharacterIndexForExporting; // @synthesize initialCharacterIndexForExporting=_initialCharacterIndexForExporting;
@property(nonatomic) BOOL shrinkTextForPrinting; // @synthesize shrinkTextForPrinting=_shrinkTextForPrinting;
@property(nonatomic) CGRect frameForPrinting; // @synthesize frameForPrinting=_frameForPrinting;
@property(retain, nonatomic) TSWPStorage *containedStorage; // @synthesize containedStorage=_containedStorage;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo; // @synthesize parentInfo;
// - (void).cxx_destruct;
- (id)objectUUIDPath;
@property(readonly, nonatomic) int verticalAlignment;
@property(readonly, nonatomic) BOOL supportsMultipleColumns;
@property(readonly, nonatomic) long long contentWritingDirection;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
- (BOOL)shouldHideEmptyBullets;
@property(readonly, nonatomic) BOOL preventsChangeTracking;
@property(readonly, nonatomic) BOOL preventsComments;
@property(readonly, nonatomic) BOOL textIsLinked;
- (BOOL)textIsVerticalAtCharIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) BOOL autoListTermination;
@property(readonly, nonatomic) BOOL autoListRecognition;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (id)childEnumerator;
- (id)infoForSelectionPath:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *childInfos;
- (BOOL)isThemeContent;
- (BOOL)isSelectable;
- (Class)repClass;
- (Class)layoutClass;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property(readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property(readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property(readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property(readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
- (void)setPrimitiveGeometry:(id)arg1;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 containedStorage:(id)arg2;
// - (void)saveToArchive:(struct NoteArchive )arg1 archiver:(id)arg2;
// - (void)loadFromArchive:(const struct NoteArchive )arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;

@end

