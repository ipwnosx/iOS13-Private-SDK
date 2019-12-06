//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <PhotosUICore/PXPeopleFlowViewController-Protocol.h>

@class PXPeopleBootstrapContext, UILabel;

@interface PXPeopleBootstrapFinalViewController : UIViewController <PXPeopleFlowViewController>
{
    id _context;
    UILabel *_promptLabel;
    UILabel *_descriptionLabel;
}

@property(readonly, nonatomic) __weak UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) __weak UILabel *promptLabel; // @synthesize promptLabel=_promptLabel;
@property(retain, nonatomic) id context; // @synthesize context=_context;
// - (void).cxx_destruct;
@property(readonly, nonatomic) CGSize preferredSize;
- (id)_localizedTitleString;
- (id)_localizedDescriptionString;
- (id)_localizedPromptString;
- (void)_updateNavigationBarForCurrentTraitCollection;
@property(readonly, nonatomic) PXPeopleBootstrapContext *bootstrapContext;
- (void)updateUI;
- (void)viewWillAppear:(BOOL)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (id)initWithContext:(id)arg1;

@end

