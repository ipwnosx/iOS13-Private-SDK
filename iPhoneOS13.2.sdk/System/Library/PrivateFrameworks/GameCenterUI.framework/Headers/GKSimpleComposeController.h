//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKBaseComposeController.h>

@class GKComposeHeaderWithStaticRecipients, NSArray, NSString;

@interface GKSimpleComposeController : GKBaseComposeController
{
    GKComposeHeaderWithStaticRecipients *_toField;
    NSString *_defaultMessage;
    NSArray *_players;
    id /* CDUnknownBlockType */ _doneHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ doneHandler; // @synthesize doneHandler=_doneHandler;
@property(retain, nonatomic) NSArray *players; // @synthesize players=_players;
@property(retain, nonatomic) NSString *defaultMessage; // @synthesize defaultMessage=_defaultMessage;
@property(retain, nonatomic) GKComposeHeaderWithStaticRecipients *toField; // @synthesize toField=_toField;
- (void)viewWillAppear:(BOOL)arg1;
- (void)donePressed;
- (void)pushOntoNavigationController:(id)arg1 withDoneHandler:(CDUnknownBlockType)arg2;
- (void)setupSendButton;
- (void)loadView;
- (void)dealloc;

@end

