//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CNContactFormatter, HMHome;

@interface HFUserNameFormatter : NSFormatter
{
    NSUInteger _style;
    HMHome *_home;
    CNContactFormatter *_contactFormatter;
}

+ (long long)_contactFormatterStyleForUserNameStyle:(NSUInteger)arg1;
@property(readonly, nonatomic) CNContactFormatter *contactFormatter; // @synthesize contactFormatter=_contactFormatter;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(nonatomic) NSUInteger style; // @synthesize style=_style;
// - (void).cxx_destruct;
- (id)stringForObjectValue:(id)arg1;
- (id)initWithHome:(id)arg1;
- (id)init;

@end

