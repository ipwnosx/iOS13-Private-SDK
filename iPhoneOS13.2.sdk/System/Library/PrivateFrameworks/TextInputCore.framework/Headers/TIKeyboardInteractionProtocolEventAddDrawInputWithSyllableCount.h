//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/TIKeyboardInteractionProtocolBase.h>

#import <TextInputCore/TIKeyboardInteractionProtocolEvent-Protocol.h>

@class NSNumber, NSString;

@interface TIKeyboardInteractionProtocolEventAddDrawInputWithSyllableCount : TIKeyboardInteractionProtocolBase <TIKeyboardInteractionProtocolEvent>
{
    NSNumber *_syllableCount;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)sendTo:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithSyllableCount:(NSUInteger)arg1 keyboardState:(id)arg2;

@end

