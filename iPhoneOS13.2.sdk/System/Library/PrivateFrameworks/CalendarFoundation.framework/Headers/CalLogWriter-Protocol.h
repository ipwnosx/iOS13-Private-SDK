//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CalLogEnvelope, NSDictionary;
@protocol CalLogFormatter;

@protocol CalLogWriter <NSObject>
@property(retain, nonatomic) id <CalLogFormatter> formatter;
- (BOOL)flush;
- (void)write:(CalLogEnvelope *)arg1;
- (id)initWithParameters:(NSDictionary *)arg1;
@end

