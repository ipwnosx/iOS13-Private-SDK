//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXWebContentMessageHandler-Protocol.h>

@protocol SXWebContentLogger;

@interface SXWebContentLogMessageHandler : NSObject <SXWebContentMessageHandler>
{
    id <SXWebContentLogger> _logger;
}

@property(readonly, nonatomic) id <SXWebContentLogger> logger; // @synthesize logger=_logger;
// - (void).cxx_destruct;
- (BOOL)allowLogFromSecurityOrigin:(id)arg1;
- (void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2;
- (id)initWithLogger:(id)arg1;

@end

