//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/BSEventQueue.h>

@interface FBSceneEventQueue : BSEventQueue
{
}

- (void)_noteWillExecuteEvent:(id)arg1;
- (void)_noteWillPendEvents:(id)arg1 atPosition:(int)arg2;
- (void)_noteQueueDidDrain;
- (void)_noteQueueDidUnlock;

@end

