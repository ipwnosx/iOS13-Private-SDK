//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGadgetProvider.h>

#import <PhotosUICore/PXForYouRankable-Protocol.h>

@class NSArray, NSDate;
@protocol PXCMMCloudGadgetViewControllerDelegate;

@interface PXCloudWelcomeGadgetProvider : PXGadgetProvider <PXForYouRankable>
{
    NSUInteger _sourceType;
    id <PXCMMCloudGadgetViewControllerDelegate> _gadgetDelegate;
    NSArray *_contentGadgets;
}

+ (id)new;
@property(copy, nonatomic) NSArray *contentGadgets; // @synthesize contentGadgets=_contentGadgets;
@property(nonatomic) __weak id <PXCMMCloudGadgetViewControllerDelegate> gadgetDelegate; // @synthesize gadgetDelegate=_gadgetDelegate;
@property(readonly, nonatomic) NSUInteger sourceType; // @synthesize sourceType=_sourceType;
// - (void).cxx_destruct;
- (void)didUpdateCloudPhotoLibraryEnablement:(id)arg1;
- (void)presentationRequestForWelcomeCloudViewController:(id)arg1;
- (void)resetPriorityDate;
@property(readonly, nonatomic) NSUInteger gadgetType;
@property(readonly, nonatomic) long long defaultPriority;
@property(readonly, nonatomic) long long priorityType;
@property(readonly, nonatomic) NSDate *priorityDate;
- (void)generateGadgets;
- (NSUInteger)estimatedNumberOfGadgets;
- (id)initWithSourceType:(NSUInteger)arg1;
- (id)init;

@end

