//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/BSAction.h>

@interface SBUIRemoteAlertButtonAction : BSAction
{
}

- (id)settings:(id)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(NSUInteger)arg4;
- (id)settings:(id)arg1 keyDescriptionForSetting:(NSUInteger)arg2;
- (void)sendResponseWithUnHandledEvents:(NSUInteger)arg1;
@property(readonly, nonatomic) NSUInteger events;
- (void)sendResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithEvents:(NSUInteger)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)initWithEvents:(NSUInteger)arg1;

@end

