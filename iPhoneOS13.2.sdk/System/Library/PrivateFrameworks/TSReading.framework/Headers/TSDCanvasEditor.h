//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSDCanvasEditor-Protocol.h>

@class NSSet, TSDCanvasEditorHelper, TSDCanvasSelection, TSDInteractiveCanvasController, TSKSelection, TSPObject, UIView;
@protocol TSDArrangeInspectorDelegate, TSDCanvasSelection, TSDInlineFloatingWrapInspectorDelegate, TSDTextSelection;

@interface TSDCanvasEditor : NSObject <TSDCanvasEditor>
{
    TSDInteractiveCanvasController *mInteractiveCanvasController;
    TSDCanvasEditorHelper *mCanvasEditorHelper;
    TSDCanvasSelection *mSelection;
    NSObject<TSDArrangeInspectorDelegate> *mZOrderArranger;
    NSObject<TSDInlineFloatingWrapInspectorDelegate> *mInlineFloatingEditor;
    BOOL mPreventImageDataReplace;
    UIView *mInputView;
}

+ (CDUnknownBlockType)spatialInfoComparator;
+ (BOOL)physicalKeyboardIsSender:(id)arg1;
+ (Class)canvasEditorHelperClass;
+ (id)canvasSelectionWithInfos:(id)arg1 andContainer:(id)arg2;
+ (id)canvasSelectionWithInfos:(id)arg1;
- (void)p_notifyRepsForSelectionChangeFrom:(id)arg1 to:(id)arg2;
- (void)scrollToEndOfDocument:(id)arg1;
- (void)scrollToBeginningOfDocument:(id)arg1;
- (void)insertBacktab:(id)arg1;
- (void)insertTab:(id)arg1;
- (id)p_spatiallySortedDrawables;
- (id)p_nextInfoInTabSequence:(int)arg1;
- (void)connectWithConnectionLine:(id)arg1;
- (BOOL)canGroupDrawable:(id)arg1;
- (void)selectAll:(id)arg1;
@property(readonly, nonatomic) NSSet *infosForSelectAllInRoot;
- (void)select:(id)arg1;
- (void)copy:(id)arg1;
- (void)copyToPasteboard:(id)arg1 withSender:(id)arg2;
- (BOOL)canAddOrShowComment;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canvasEditorCanUngroupWithSender:(id)arg1;
- (BOOL)canUngroupWithSender:(id)arg1;
- (BOOL)canvasEditorCanGroupWithSender:(id)arg1;
- (BOOL)canGroupWithSender:(id)arg1;
- (BOOL)canvasEditorCanSelectAllWithSender:(id)arg1;
- (BOOL)canSelectAllWithSender:(id)arg1;
- (BOOL)canvasEditorCanDuplicateWithSender:(id)arg1;
- (BOOL)canvasEditorCanCopyStyleWithSender:(id)arg1;
- (BOOL)canvasEditorCanCutWithSender:(id)arg1;
- (BOOL)canvasEditorCanCopyWithSender:(id)arg1;
- (BOOL)canvasEditorCanDeleteWithSender:(id)arg1;
- (BOOL)canCopyStyle;
- (id)pasteboardController;
- (void)setSelectionToRep:(id)arg1;
- (void)setSelection:(id)arg1 withFlags:(NSUInteger)arg2;
@property(retain, nonatomic) TSKSelection *selection;
@property(readonly, retain, nonatomic) TSKSelection<TSDTextSelection> *textInputSelection;
- (BOOL)shouldPushNewEditorForNewSelection;
- (id)drawables;
- (NSUInteger)countOfDrawables;
- (BOOL)shouldUseAlternateSelectionHighlight;
- (id)editorToPopToOnEndEditing;
- (Class)editorClassForSelection;
- (id)p_filterNonDisplayedInfos:(id)arg1;
- (void)repWasCreated:(id)arg1;
- (void)canvasInfosDidChange;
@property(readonly, nonatomic) TSPObject *modelForSelection;
- (BOOL)isSelectedInfo:(id)arg1;
@property(readonly, nonatomic) TSKSelection<TSDCanvasSelection> *canvasSelection;
@property(readonly, nonatomic) TSDInteractiveCanvasController *interactiveCanvasController;
- (id)documentRoot;
@property(readonly, nonatomic) TSDCanvasEditorHelper *canvasEditorHelper;
- (void)dealloc;
- (void)teardown;
- (id)initWithInteractiveCanvasController:(id)arg1;
- (BOOL)canDeleteComment;
- (id)keyCommands;
- (BOOL)isRepSelectable:(id)arg1;
- (void)setSelectionToInfos:(id)arg1;
- (void)setSelectionToInfo:(id)arg1;
- (id)canvasSelectionWithInfos:(id)arg1 andContainer:(id)arg2;
- (id)canvasSelectionWithInfos:(id)arg1;
@property(readonly) BOOL wantsRawArrowKeyEvents;
- (void)setSelectionWithRange:(NSRange *)arg1 endOfLine:(BOOL)arg2;
- (id)selectionWithRange:(NSRange *)arg1;
- (void)clearMarkedRange;
- (NSRange *)rangeOfWordEnclosingCharIndex:(NSUInteger)arg1 backward:(BOOL)arg2;
- (void)replaceRange:(NSRange *)arg1 withText:(id)arg2;
- (void)extendSelectionRight;
- (void)extendSelectionLeft;
- (void)setMarkedText:(id)arg1 selectedRange:(NSRange *)arg2;
- (id)selectionRectsForRange:(NSRange *)arg1;
- (CGRect)firstRectForRange:(NSRange *)arg1;
- (id)textInRange:(NSRange *)arg1;
- (NSUInteger)textLength;
- (BOOL)textIsVerticalAtCharIndex:(NSUInteger)arg1;
- (void)endEditing;
- (NSRange *)editRange;
@property(readonly, nonatomic) NSRange * markedRange;
- (NSUInteger)charIndexByMovingPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3 preferPosition:(double )arg4;
- (BOOL)isCharIndex:(NSUInteger)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (BOOL)isCharIndex:(NSUInteger)arg1 withEolAffinity:(BOOL)arg2 atBoundary:(long long)arg3 inDirection:(long long)arg4;
- (id)textFontAtCharIndex:(NSUInteger)arg1;
- (id)textColorAtCharIndex:(NSUInteger)arg1;
- (long long)returnKeyType;
@property(readonly, retain) UIView *inputAccessoryView;
- (void)insertText:(id)arg1;
- (BOOL)wantsKeyboard;
@property(readonly, retain) UIView *inputView;

@end

