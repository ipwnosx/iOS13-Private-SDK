//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <PhotosUICore/MFMailComposeViewControllerDelegate-Protocol.h>

@class NSCountedSet, NSDictionary, NSMutableDictionary, NSString, UISegmentedControl, UITableView;

@interface PXDebugRelatedViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MFMailComposeViewControllerDelegate>
{
    UISegmentedControl *_segmentedControl;
    UITableView *_tableView;
    double _curationScore;
    double _graphScore;
    double _neighborScore;
    double _relatedScore;
    double _matchingScore;
    BOOL _isInteresting;
    NSUInteger _relatedType;
    NSString *_debugDescription;
    NSDictionary *_matchingWeight;
    NSDictionary *_matchingKeywords;
    NSDictionary *_referenceKeywords;
    NSDictionary *_relatedKeywords;
    NSMutableDictionary *_currentKeywords;
    NSCountedSet *_countedKeywords;
}

// - (void).cxx_destruct;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)_closeAction:(id)arg1;
- (void)_sendByEmailAction:(id)arg1;
- (void)_switchLogsAction:(id)arg1;
- (void)_initDataSourceWithKeywords:(id)arg1;
- (void)viewDidLoad;
- (void)_setupWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

