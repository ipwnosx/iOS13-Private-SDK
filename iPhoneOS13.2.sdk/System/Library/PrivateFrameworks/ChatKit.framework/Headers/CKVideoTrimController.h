//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class CKMediaObject, CKUIVideoEditorController;
@protocol CKTrimControllerDelegate;

__attribute__((visibility("hidden")))
@interface CKVideoTrimController : NSObject <UIVideoEditorControllerDelegatePrivate, UINavigationControllerDelegate>
{
    CKMediaObject *_originalMediaObject;
    CKMediaObject *_trimmedMediaObject;
    CKUIVideoEditorController *_editVideoVC;
    id <CKTrimControllerDelegate> _delegate;
}

@property(retain, nonatomic) CKUIVideoEditorController *editVideoVC; // @synthesize editVideoVC=_editVideoVC;
@property(nonatomic) __weak id <CKTrimControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CKMediaObject *trimmedMediaObject; // @synthesize trimmedMediaObject=_trimmedMediaObject;
@property(retain, nonatomic) CKMediaObject *originalMediaObject; // @synthesize originalMediaObject=_originalMediaObject;
// - (void).cxx_destruct;
- (void)videoEditorController:(id)arg1 didFailWithError:(id)arg2;
- (void)videoEditorControllerDidCancel:(id)arg1;
- (void)videoEditorController:(id)arg1 didSaveEditedVideoToPath:(id)arg2;
- (void)videoEditorController:(id)arg1 didTrimVideoWithOptions:(id)arg2;
- (void)dealloc;
- (id)initWithMediaObject:(id)arg1 maxTrimDuration:(double)arg2;

@end

