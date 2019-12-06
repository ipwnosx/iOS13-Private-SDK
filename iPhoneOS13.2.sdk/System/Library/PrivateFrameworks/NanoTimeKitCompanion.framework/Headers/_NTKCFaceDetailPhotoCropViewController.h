//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class CAShapeLayer, NTKCCenteringScrollView, NTKCompanionCustomPhotosEditor, NTKDigitalTimeLabel, NTKDigitalTimeLabelStyle, NTKFace, UIBarButtonItem, UIView;

@interface _NTKCFaceDetailPhotoCropViewController : UIViewController <UIScrollViewDelegate>
{
    CAShapeLayer *_reverseMask;
    NTKCCenteringScrollView *_scrollView;
    double _photoScale;
    CAShapeLayer *_mask;
    UIView *_timeContainer;
    NTKDigitalTimeLabel *_time;
    UIBarButtonItem *_deleteButton;
    UIBarButtonItem *_cancelButton;
    BOOL _cancelConfirmed;
    BOOL _deleteConfirmed;
    NSUInteger _index;
    NTKCompanionCustomPhotosEditor *_editor;
    NTKFace *_face;
    NTKDigitalTimeLabelStyle *_timeStyle;
}

@property(retain, nonatomic) NTKDigitalTimeLabelStyle *timeStyle; // @synthesize timeStyle=_timeStyle;
@property(retain, nonatomic) NTKFace *face; // @synthesize face=_face;
@property(retain, nonatomic) NTKCompanionCustomPhotosEditor *editor; // @synthesize editor=_editor;
@property(nonatomic) NSUInteger index; // @synthesize index=_index;
// - (void).cxx_destruct;
- (void)dismissWithSaving:(BOOL)arg1;
- (void)_donePressed;
- (void)_deletePressed;
- (void)_cancelPressed;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithIndex:(NSUInteger)arg1 inPhotosEditor:(id)arg2 forFace:(id)arg3 timeStyle:(id)arg4;

@end

