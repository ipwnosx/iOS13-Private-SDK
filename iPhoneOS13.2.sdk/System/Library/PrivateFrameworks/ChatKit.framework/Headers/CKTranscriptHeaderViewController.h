//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CKConversation;

__attribute__((visibility("hidden")))
@interface CKTranscriptHeaderViewController : UIViewController
{
    BOOL _shouldInvalidateOnAddressBookChange;
    CKConversation *_conversation;
}

@property(readonly, nonatomic) BOOL shouldInvalidateOnAddressBookChange; // @synthesize shouldInvalidateOnAddressBookChange=_shouldInvalidateOnAddressBookChange;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
// - (void).cxx_destruct;
- (id)initWithConversation:(id)arg1;

@end

