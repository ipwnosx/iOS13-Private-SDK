//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <PhotosUICore/PXCMMCloudViewViewDelegate-Protocol.h>
#import <PhotosUICore/PXGadget-Protocol.h>

@class NSString, PXCMMCloudView, PXGadgetSpec;
@protocol PXCMMCloudGadgetViewControllerDelegate;

@interface PXCMMCloudGadgetViewController : UIViewController <PXCMMCloudViewViewDelegate, PXGadget>
{
    BOOL _isCPLOn;
    BOOL _hasContentToDisplay;
    long long _priority;
    id <PXCMMCloudGadgetViewControllerDelegate> _delegate;
    PXGadgetSpec *_gadgetSpec;
    NSString *_gadgetTitle;
    PXCMMCloudView *_cloudView;
}

+ (id)_userDefaults;
+ (void)setDidDismissCloudGadget:(BOOL)arg1;
+ (BOOL)didDismissCloudGadget;
@property(retain, nonatomic) PXCMMCloudView *cloudView; // @synthesize cloudView=_cloudView;
@property(copy, nonatomic) NSString *gadgetTitle; // @synthesize gadgetTitle=_gadgetTitle;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
@property(nonatomic) __weak id <PXCMMCloudGadgetViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
// - (void).cxx_destruct;
- (void)_updateViewInsets;
- (NSObject )contentViewController;
@property(readonly, nonatomic) BOOL hasContentToDisplay; // @synthesize hasContentToDisplay=_hasContentToDisplay;
@property(readonly, nonatomic) NSUInteger gadgetType;
@property(readonly, nonatomic) NSString *localizedTitle;
- (void)completeMyMomentCloudPhotoViewDismissTapped:(id)arg1;
- (void)completeMyMomentCloudPhotoViewLearnMoreTapped:(id)arg1;
- (void)_accountStoreDidChange:(id)arg1;
- (void)_updateCPLStatus;
@property(nonatomic) BOOL disableDismissAction;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)viewDidLoad;
- (id)initWithSourceType:(NSUInteger)arg1;

@end

