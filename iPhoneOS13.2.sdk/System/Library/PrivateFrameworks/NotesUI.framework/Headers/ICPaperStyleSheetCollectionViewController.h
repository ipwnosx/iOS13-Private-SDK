//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesUI/ICPaperStyleCollectionViewController.h>

@protocol ICPaperStyleSheetCollectionViewControllerDelegate;

@interface ICPaperStyleSheetCollectionViewController : ICPaperStyleCollectionViewController
{
    id <ICPaperStyleSheetCollectionViewControllerDelegate> _paperStyleDelegate;
    NSUInteger _initialPaperStyleType;
}

@property(nonatomic) NSUInteger initialPaperStyleType; // @synthesize initialPaperStyleType=_initialPaperStyleType;
@property(nonatomic) __weak id <ICPaperStyleSheetCollectionViewControllerDelegate> paperStyleDelegate; // @synthesize paperStyleDelegate=_paperStyleDelegate;
// - (void).cxx_destruct;
- (BOOL)accessibilityPerformEscape;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)cancelAction:(id)arg1;
- (CGSize)preferredContentSize;
- (id)indexPathForInitialSelection;
- (void)viewDidLoad;
- (id)initWithInitialPaperStyleType:(NSUInteger)arg1 delegate:(id)arg2;

@end

