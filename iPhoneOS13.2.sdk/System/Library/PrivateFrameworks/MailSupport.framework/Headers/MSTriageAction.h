//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EMMessageRepository, MSMessageListItemSelection;
@protocol MSTriageActionDelegate;

@interface MSTriageAction : NSObject
{
    id <MSTriageActionDelegate> _delegate;
    MSMessageListItemSelection *_messageListItemSelection;
}

+ (void)_performAction:(id)arg1 messageRepository:(id)arg2 undoManager:(id)arg3 actionName:(id)arg4;
+ (id)log;
@property(readonly, nonatomic) MSMessageListItemSelection *messageListItemSelection; // @synthesize messageListItemSelection=_messageListItemSelection;
@property(readonly, nonatomic) __weak id <MSTriageActionDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)performWithUndoManager:(id)arg1 actionName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_changeAction;
@property(readonly, nonatomic) EMMessageRepository *messageRepository;
- (id)initWithMessageListSelection:(id)arg1 delegate:(id)arg2;

@end

