//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBWelcomeController.h>

#import <WorkflowUI/WFDailyRoutineShortcutSetupQuestionChildViewController-Protocol.h>

@class WFDailyRoutineShortcutSetupIntroductionQuestion;
@protocol WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate;

@interface WFDailyRoutineShortcutSetupIntroductionQuestionViewController : OBWelcomeController <WFDailyRoutineShortcutSetupQuestionChildViewController>
{
    id <WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate> _delegate;
    WFDailyRoutineShortcutSetupIntroductionQuestion *_question;
}

@property(readonly, nonatomic) WFDailyRoutineShortcutSetupIntroductionQuestion *question; // @synthesize question=_question;
@property(nonatomic) __weak id <WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)didSelectContinueButton;
@property(readonly, nonatomic) BOOL parentShouldShowSkipButton;
- (id)initWithQuestion:(id)arg1;

@end

