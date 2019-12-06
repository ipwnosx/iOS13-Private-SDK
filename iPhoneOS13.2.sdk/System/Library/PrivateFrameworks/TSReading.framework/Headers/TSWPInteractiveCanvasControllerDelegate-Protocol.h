//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDInteractiveCanvasControllerDelegate-Protocol.h>

@class TSDRep, TSWPFootnoteReferenceAttachment, TSWPHyperlinkField, TSWPInteractiveCanvasController, TSWPSmartField, TSWPTwoPartAction, UIDragInteraction, UIDragItem, UIView, _UINonEditableTextSelectionForceGesture;
@protocol TSDGesture, TSWPHyperlinkHostRepProtocol, UIDragSession;

@protocol TSWPInteractiveCanvasControllerDelegate <TSDInteractiveCanvasControllerDelegate>

@optional
@property(readonly, nonatomic) BOOL interactiveCanvasControllerAllowsHyperlinkInteraction;
- (BOOL)interactiveCanvasController:(TSWPInteractiveCanvasController *)arg1 tappedOnFootnoteAttachment:(TSWPFootnoteReferenceAttachment *)arg2;
- (BOOL)interactiveCanvasController:(TSWPInteractiveCanvasController *)arg1 configureHardPressGesture:(_UINonEditableTextSelectionForceGesture *)arg2;
- (BOOL)interactiveCanvasController:(TSWPInteractiveCanvasController *)arg1 allowsDragOfSmartField:(TSWPSmartField *)arg2;
- (UIDragItem *)interactiveCanvasController:(TSWPInteractiveCanvasController *)arg1 dragItemForSmartField:(TSWPSmartField *)arg2 interaction:(UIDragInteraction *)arg3 session:(id <UIDragSession>)arg4;
- (void)showInsertPageNumberUIFromRect:(CGRect)arg1 inView:(UIView *)arg2;
- (TSWPTwoPartAction *)actionForHyperlink:(TSWPHyperlinkField *)arg1 inRep:(TSDRep<TSWPHyperlinkHostRepProtocol> *)arg2 gesture:(id <TSDGesture>)arg3;
@end

