//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKBalloonChatItem.h>

@class NSUUID;

@interface CKTUConversationChatItem : CKBalloonChatItem
{
}

@property(readonly, nonatomic) __weak NSUUID *tuConversationUUID;
@property(readonly, nonatomic) BOOL color;
- (id)sender;
- (id)time;
- (void)configureBalloonView:(id)arg1;
- (BOOL)isFromMe;
- (BOOL)shouldCacheSize;
- (Class)balloonViewClass;

@end

