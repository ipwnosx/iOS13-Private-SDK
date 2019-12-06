//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HKElectrocardiogram;
@protocol HKElectrocardiogramMetadataViewDelegate;

@interface HKElectrocardiogramMetadataView : UIView
{
    HKElectrocardiogram *_sample;
    id <HKElectrocardiogramMetadataViewDelegate> _delegate;
}

@property(nonatomic) __weak id <HKElectrocardiogramMetadataViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HKElectrocardiogram *sample; // @synthesize sample=_sample;
// - (void).cxx_destruct;
- (id)_separatorLine;
- (id)_footerLabel;
- (id)_sharePDFControl;
- (id)_bulletedTextView;
- (id)_ecgChart;
- (void)sharedPDFControlTapped:(id)arg1;
- (void)detailButtonTapped:(id)arg1;
- (void)_setupUI;
- (id)initWithSample:(id)arg1 delegate:(id)arg2;

@end

