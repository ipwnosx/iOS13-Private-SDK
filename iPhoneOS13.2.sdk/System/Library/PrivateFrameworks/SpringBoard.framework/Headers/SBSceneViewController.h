//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <SpringBoard/SBSceneViewControlling-Protocol.h>
#import <SpringBoard/SBSceneViewPresentationConfiguring-Protocol.h>

@class SBSceneHandle, SBSceneView, UIView;
@protocol SBScenePlaceholderContentContext;

@interface SBSceneViewController : UIViewController <SBSceneViewPresentationConfiguring, SBSceneViewControlling>
{
    SBSceneHandle *_sceneHandle;
    long long _displayMode;
    long long _contentOrientation;
    id <SBScenePlaceholderContentContext> _placeholderContentContext;
    UIView *_customContentView;
    SBSceneView *_sceneView;
    CGSize _contentRef erenceSize;
}

@property(readonly, nonatomic, getter=_sceneView) SBSceneView *sceneView; // @synthesize sceneView=_sceneView;
@property(retain, nonatomic) UIView *customContentView; // @synthesize customContentView=_customContentView;
@property(retain, nonatomic) id <SBScenePlaceholderContentContext> placeholderContentContext; // @synthesize placeholderContentContext=_placeholderContentContext;
@property(readonly, nonatomic) long long contentInterfaceOrientation; // @synthesize contentInterfaceOrientation=_contentOrientation;
@property(readonly, nonatomic) CGSize contentReferenceSize; // @synthesize contentReferenceSize=_contentRef erenceSize;
@property(readonly, nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
@property(readonly, nonatomic) SBSceneHandle *sceneHandle; // @synthesize sceneHandle=_sceneHandle;
// - (void).cxx_destruct;
- (void)viewDidLoad;
- (long long)sceneViewPresentationPriority:(id)arg1;
- (id)sceneViewPresentationIdentifier:(id)arg1;
- (void)_setSceneView:(id)arg1;
- (void)containerContentWrapperInterfaceOrientationChangedTo:(long long)arg1;
- (void)setContentReferenceSize:(CGSize)arg1 withInterfaceOrientation:(long long)arg2;
- (void)setDisplayMode:(long long)arg1 animationFactory:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)newSnapshotViewOnQueue:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)newSnapshotView;
- (id)newSnapshot;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)invalidate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSceneHandle:(id)arg1;

@end

