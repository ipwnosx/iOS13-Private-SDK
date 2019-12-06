//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCFaceDetailSectionController.h>

@class NSDictionary, NTKCFaceDetailRowActionCell, NTKEditOptionCollection, NTKFaceView;
@protocol NTKCFaceDetailEditOptionSectionDelegate;

@interface NTKCFaceDetailEditOptionSectionController : NTKCFaceDetailSectionController
{
    NTKEditOptionCollection *_collection;
    NTKFaceView *_faceView;
    NSDictionary *_selectedOptions;
    id <NTKCFaceDetailEditOptionSectionDelegate> _delegate;
    Class _editCellClass;
    NTKCFaceDetailRowActionCell *_actionRow;
}

@property(retain, nonatomic) NTKCFaceDetailRowActionCell *actionRow; // @synthesize actionRow=_actionRow;
@property(readonly, nonatomic) Class editCellClass; // @synthesize editCellClass=_editCellClass;
@property(nonatomic) __weak id <NTKCFaceDetailEditOptionSectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *selectedOptions; // @synthesize selectedOptions=_selectedOptions;
@property(nonatomic) __weak NTKFaceView *faceView; // @synthesize faceView=_faceView;
@property(retain, nonatomic) NTKEditOptionCollection *collection; // @synthesize collection=_collection;
// - (void).cxx_destruct;
- (void)_customizeActionRow:(id)arg1 withEditOption:(id)arg2;
- (id)_actionNameForOption:(id)arg1;
- (void)_refreshActionRowContent;
- (void)_dequeueActionRow;
- (void)reloadActionRow;
- (BOOL)_handleDidSelectActionRowForOption:(id)arg1;
- (BOOL)_handleDidSelectOption:(id)arg1;
- (BOOL)_canDisplayActionRowForCustomEditMode:(long long)arg1 andOption:(id)arg2;
- (BOOL)collectionChanged:(id)arg1 withSelectedOptions:(id)arg2;
- (BOOL)_canSelectRow:(long long)arg1;
- (void)faceDidChange;
- (id)_initWithTableViewController:(id)arg1 face:(id)arg2 inGallery:(BOOL)arg3 editOptionCollection:(id)arg4 faceView:(id)arg5;
- (id)initWithTableViewController:(id)arg1 face:(id)arg2 inGallery:(BOOL)arg3 editOptionCollection:(id)arg4 faceView:(id)arg5;

@end

