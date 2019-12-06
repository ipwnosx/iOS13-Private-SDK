//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXWebContentScript-Protocol.h>

@class NSString, SXWebContentConfiguration, WKUserScript;

@interface SXWebContentConfigurationScript : NSObject <SXWebContentScript>
{
    WKUserScript *userScript;
    SXWebContentConfiguration *_configuration;
}

@property(readonly, copy, nonatomic) SXWebContentConfiguration *configuration; // @synthesize configuration=_configuration;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSString *executableScript;
@property(readonly, nonatomic) WKUserScript *userScript; // @synthesize userScript;
@property(readonly, nonatomic) BOOL queueable;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithConfiguration:(id)arg1;

@end

