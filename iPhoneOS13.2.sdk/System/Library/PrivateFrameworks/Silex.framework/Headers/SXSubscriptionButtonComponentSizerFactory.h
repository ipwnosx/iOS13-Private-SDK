//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentSizerFactory-Protocol.h>

@class NSString;
@protocol SXButtonComponentTextProvider, SXTextComponentLayoutHosting, SXTextSourceFactory;

@interface SXSubscriptionButtonComponentSizerFactory : NSObject <SXComponentSizerFactory>
{
    id <SXButtonComponentTextProvider> _textProvider;
    id <SXTextComponentLayoutHosting> _textComponentLayoutHosting;
    id <SXTextSourceFactory> _textSourceFactory;
}

@property(readonly, nonatomic) id <SXTextSourceFactory> textSourceFactory; // @synthesize textSourceFactory=_textSourceFactory;
@property(readonly, nonatomic) id <SXTextComponentLayoutHosting> textComponentLayoutHosting; // @synthesize textComponentLayoutHosting=_textComponentLayoutHosting;
@property(readonly, nonatomic) id <SXButtonComponentTextProvider> textProvider; // @synthesize textProvider=_textProvider;
// - (void).cxx_destruct;
- (id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutOptions:(id)arg3 DOMObjectProvider:(id)arg4;
@property(readonly, nonatomic) int role;
@property(readonly, nonatomic) NSString *type;
- (id)initWithTextProvider:(id)arg1 textComponentLayoutHosting:(id)arg2 textSourceFactory:(id)arg3;

@end

