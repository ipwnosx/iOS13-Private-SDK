//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <VideoSubscriberAccountUI/VSJSAlertAction-Protocol.h>

@class JSValue, NSString;

__attribute__((visibility("hidden")))
@interface VSJSAlertAction : IKJSObject <VSJSAlertAction>
{
    NSString *_title;
    NSString *_style;
    JSValue *_callback;
}

@property(retain, nonatomic) JSValue *callback; // @synthesize callback=_callback;
@property(copy, nonatomic) NSString *style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (id)init;

@end

