//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSString, NTKCFaceDetailComplicationSectionController, NTKComplication;

@protocol NTKCFaceDetailComplicationSectionDelegate <NSObject>
- (void)complicationSection:(NTKCFaceDetailComplicationSectionController *)arg1 didChangeToComplication:(NTKComplication *)arg2 forSlot:(NSString *)arg3;
- (NSArray *)complicationSection:(NTKCFaceDetailComplicationSectionController *)arg1 allowedComplicationsForSlot:(NSString *)arg2;
@end

