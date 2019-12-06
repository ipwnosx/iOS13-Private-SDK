//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <ScreenTimeUI/CAStateControllerDelegate-Protocol.h>

@class CALayer, CAStateController, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface STCAPackageView : UIView <CAStateControllerDelegate>
{
    CAStateController *_stateController;
    NSMutableArray *_completionHandlers;
}

+ (id)keyPathsForValuesAffectingPackageRootLayer;
@property(readonly) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(retain) CAStateController *stateController; // @synthesize stateController=_stateController;
// - (void).cxx_destruct;
- (void)stateController:(id)arg1 transitionDidStop:(id)arg2 completed:(BOOL)arg3;
- (id)_getStateWithName:(id)arg1;
- (void)animateToStateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSString *stateName;
- (void)animateToInitialStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setInitialState;
@property(readonly, getter=isInitialState) BOOL initialState;
@property(readonly) CALayer *packageRootLayer;
- (void)_changeAppearance;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_newStateControllerWithSuperlayer:(id)arg1;
- (void)_stcaPackageViewCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

