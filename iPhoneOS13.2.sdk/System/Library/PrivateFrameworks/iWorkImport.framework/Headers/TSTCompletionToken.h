//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSTWPTokenAttachment.h>

@class NSString, TSTReferenceNode, TSUColor;
@protocol TSTCanvasReferenceProvider;

__attribute__((visibility("hidden")))
@interface TSTCompletionToken : TSTWPTokenAttachment
{
    int _renderAsTokenType;
    NSString *_completionText;
    TSTReferenceNode *_editingReferenceNode;
    TSUColor *_referenceColor;
    id <TSTCanvasReferenceProvider> _canvasReferenceProvider;
    NSRange * _prefixRange;
}

@property(nonatomic) __weak id <TSTCanvasReferenceProvider> canvasReferenceProvider; // @synthesize canvasReferenceProvider=_canvasReferenceProvider;
@property(retain, nonatomic) TSUColor *referenceColor; // @synthesize referenceColor=_referenceColor;
@property(retain, nonatomic) TSTReferenceNode *editingReferenceNode; // @synthesize editingReferenceNode=_editingReferenceNode;
@property(readonly, nonatomic) int renderAsTokenType; // @synthesize renderAsTokenType=_renderAsTokenType;
@property(nonatomic) NSRange * prefixRange; // @synthesize prefixRange=_prefixRange;
@property(retain, nonatomic) NSString *completionText; // @synthesize completionText=_completionText;
// - (void).cxx_destruct;
- (id)description;
- (void)p_createCanvasReference;
- (void)p_removeCanvasReference;
// - (void)saveToArchive:(struct CompletionTokenAttachmentArchive )arg1 archiver:(id)arg2;
// - (void)loadFromArchive:(const struct CompletionTokenAttachmentArchive )arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)copyIntoContext:(id)arg1 bakeModes:(BOOL)arg2;
- (void)dealloc;
- (id)initWithContext:(id)arg1 completionText:(id)arg2;
- (id)initWithContext:(id)arg1 expressionNode:(id)arg2;
- (void)makeTokenReflectChoice:(id)arg1;
- (id)tokenText;
- (void)setExpressionNode:(id)arg1;

@end

