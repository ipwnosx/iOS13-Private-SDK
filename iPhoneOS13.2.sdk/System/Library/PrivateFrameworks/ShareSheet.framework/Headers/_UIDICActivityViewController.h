//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIActivityViewController.h"

@class NSString, UIDocumentInteractionController;
@protocol _UIDICActivityViewControllerDelegate;

@interface _UIDICActivityViewController : UIActivityViewController
{
    BOOL _isPerformingActivity;
    UIDocumentInteractionController<_UIDICActivityViewControllerDelegate> *_documentInteractionActivityDelegate;
    NSUInteger _options;
    id <_UIDICActivityViewControllerDelegate> _documentInteractionActivityDelegateRetained;
    NSString *_openActivityTargetApplicationIdentifier;
}

@property(retain, nonatomic) NSString *openActivityTargetApplicationIdentifier; // @synthesize openActivityTargetApplicationIdentifier=_openActivityTargetApplicationIdentifier;
@property(retain, nonatomic) id <_UIDICActivityViewControllerDelegate> documentInteractionActivityDelegateRetained; // @synthesize documentInteractionActivityDelegateRetained=_documentInteractionActivityDelegateRetained;
@property(nonatomic) NSUInteger options; // @synthesize options=_options;
@property(nonatomic) BOOL isPerformingActivity; // @synthesize isPerformingActivity=_isPerformingActivity;
@property(nonatomic) __weak UIDocumentInteractionController<_UIDICActivityViewControllerDelegate> *documentInteractionActivityDelegate; // @synthesize documentInteractionActivityDelegate=_documentInteractionActivityDelegate;
// - (void).cxx_destruct;
- (void)_handleDidFinishPerformingActivityType:(id)arg1 completed:(BOOL)arg2 resultItems:(id)arg3 activityError:(id)arg4;
- (void)_willPerformInServiceActivityType:(id)arg1 activitySpecificMetadata:(id)arg2;
- (void)_performActivity:(id)arg1;
- (void)_prepareActivity:(id)arg1;
- (BOOL)_shouldShowSystemActivityType:(id)arg1;
- (BOOL)hidesSystemActivities;
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2 options:(NSUInteger)arg3;

@end

