//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFEventBuilder.h>

#import <Home/HFTimeEventBuilder-Protocol.h>

@class NSDateComponents, NSString;

@interface HFSignificantTimeEventBuilder : HFEventBuilder <HFTimeEventBuilder>
{
    NSString *_significantEvent;
    NSDateComponents *_significantEventOffset;
}

@property(copy, nonatomic) NSDateComponents *significantEventOffset; // @synthesize significantEventOffset=_significantEventOffset;
@property(copy, nonatomic) NSString *significantEvent; // @synthesize significantEvent=_significantEvent;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)performValidation;
- (id)naturalLanguageNameOfType:(NSUInteger)arg1 withHome:(id)arg2 recurrences:(id)arg3;
- (id)buildNewEventFromCurrentState;
- (id)initWithEvent:(id)arg1;

@end

