//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSObject, NSString;
@protocol SGSuggestionsServiceMessagesProtocol;

@protocol SGMessagesSuggestionsServiceDelegate
- (NSArray *)suggestionsService:(NSObject<SGSuggestionsServiceMessagesProtocol> *)arg1 needsContextForConversationIdentifier:(NSString *)arg2 numberOfMessagesNeeded:(NSUInteger)arg3;
@end

