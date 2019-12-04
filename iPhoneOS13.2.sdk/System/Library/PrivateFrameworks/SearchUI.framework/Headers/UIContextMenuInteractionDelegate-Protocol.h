//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class UIContextMenuConfiguration, UIContextMenuInteraction, UITargetedPreview;
@protocol UIContextMenuInteractionAnimating, UIContextMenuInteractionCommitAnimating;

@protocol UIContextMenuInteractionDelegate 
- (UIContextMenuConfiguration *)contextMenuInteraction:(UIContextMenuInteraction *)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;

@optional
- (void)contextMenuInteraction:(UIContextMenuInteraction *)arg1 willEndForConfiguration:(UIContextMenuConfiguration *)arg2 animator:(id <UIContextMenuInteractionAnimating>)arg3;
- (void)contextMenuInteraction:(UIContextMenuInteraction *)arg1 willDisplayMenuForConfiguration:(UIContextMenuConfiguration *)arg2 animator:(id <UIContextMenuInteractionAnimating>)arg3;
- (void)contextMenuInteraction:(UIContextMenuInteraction *)arg1 willPerformPreviewActionForMenuWithConfiguration:(UIContextMenuConfiguration *)arg2 animator:(id <UIContextMenuInteractionCommitAnimating>)arg3;
- (UITargetedPreview *)contextMenuInteraction:(UIContextMenuInteraction *)arg1 previewForDismissingMenuWithConfiguration:(UIContextMenuConfiguration *)arg2;
- (UITargetedPreview *)contextMenuInteraction:(UIContextMenuInteraction *)arg1 previewForHighlightingMenuWithConfiguration:(UIContextMenuConfiguration *)arg2;
@end
