//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PLSlalomRegionEditor;

@protocol PLSlalomRegionEditorDelegate <NSObject>
- (void)slalomRegionEditorRequestForceUnzoom:(PLSlalomRegionEditor *)arg1;
- (BOOL)slalomRegionEditorRequestForceZoom:(PLSlalomRegionEditor *)arg1;
- (void)slalomRegionEditorEndValueChanged:(PLSlalomRegionEditor *)arg1;
- (void)slalomRegionEditorStartValueChanged:(PLSlalomRegionEditor *)arg1;
- (void)slalomRegionEditorDidEndEditing:(PLSlalomRegionEditor *)arg1;
- (void)slalomRegionEditorDidBeginEditing:(PLSlalomRegionEditor *)arg1 withStartHandle:(BOOL)arg2;
@end

