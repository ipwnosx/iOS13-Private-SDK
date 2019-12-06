//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGadgetProvider.h>

@class NSArray, NSString;

@interface PXNoContentGadgetProvider : PXGadgetProvider
{
    NSArray *_noContentGadgets;
    NSString *_localizedTitle;
    NSString *_localizedMessage;
}

@property(copy, nonatomic) NSString *localizedMessage; // @synthesize localizedMessage=_localizedMessage;
@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(copy, nonatomic) NSArray *noContentGadgets; // @synthesize noContentGadgets=_noContentGadgets;
// - (void).cxx_destruct;
- (void)generateGadgets;
- (NSUInteger)estimatedNumberOfGadgets;
- (id)initWithLocalizedTitle:(id)arg1 localizedMessage:(id)arg2;

@end

