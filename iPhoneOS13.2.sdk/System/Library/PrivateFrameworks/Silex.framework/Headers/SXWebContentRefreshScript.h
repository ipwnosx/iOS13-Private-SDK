//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXWebContentScript-Protocol.h>

@class NSString, WKUserScript;

@interface SXWebContentRefreshScript : NSObject <SXWebContentScript>
{
    WKUserScript *userScript;
}

@property(readonly, nonatomic) WKUserScript *userScript; // @synthesize userScript;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSString *executableScript;
@property(readonly, nonatomic) BOOL queueable;
@property(readonly, nonatomic) NSString *identifier;

@end

