//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PKInkAttributesPicker;

@protocol PKInkAttributesPickerDelegate <NSObject>

@optional
- (void)_inkAttributesPickerUserDidEndDraggingSlider:(PKInkAttributesPicker *)arg1;
- (void)_inkAttributesPickerUserDidStartDraggingSlider:(PKInkAttributesPicker *)arg1;
- (void)inkAttributesPickerDidChangeInkOpacity:(PKInkAttributesPicker *)arg1;
- (void)inkAttributesPickerDidChangeInkThickness:(PKInkAttributesPicker *)arg1;
- (void)inkAttributesPickerDidChangeSelectedInk:(PKInkAttributesPicker *)arg1;
@end

