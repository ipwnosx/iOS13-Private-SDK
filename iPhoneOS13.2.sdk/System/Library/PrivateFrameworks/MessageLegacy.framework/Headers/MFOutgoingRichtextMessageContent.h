//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageLegacy/MFOutgoingMessageContent.h>

@class MFPlainTextDocument, NSArray;

@interface MFOutgoingRichtextMessageContent : MFOutgoingMessageContent
{
    BOOL _textPartsAreHTML;
    MFPlainTextDocument *_plaintextAlternative;
    NSArray *_mixedContent;
}

@property(retain, nonatomic) NSArray *mixedContent; // @synthesize mixedContent=_mixedContent;
@property(retain, nonatomic) MFPlainTextDocument *plaintextAlternative; // @synthesize plaintextAlternative=_plaintextAlternative;
@property(nonatomic) BOOL textPartsAreHTML; // @synthesize textPartsAreHTML=_textPartsAreHTML;
- (id)richtextContent;
- (id)copy;
- (void)dealloc;

@end

