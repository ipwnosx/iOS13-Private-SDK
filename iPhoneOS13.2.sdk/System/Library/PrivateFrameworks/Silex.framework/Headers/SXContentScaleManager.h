//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXContentScaleManager-Protocol.h>

@protocol SXContentScaleManagerDelegate;

@interface SXContentScaleManager : NSObject <SXContentScaleManager>
{
    long long _contentScale;
    double _contentScaleFactor;
    id <SXContentScaleManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <SXContentScaleManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double contentScaleFactor; // @synthesize contentScaleFactor=_contentScaleFactor;
@property(nonatomic) long long contentScale; // @synthesize contentScale=_contentScale;
// - (void).cxx_destruct;
- (void)reset;
- (void)decrease;
- (void)increase;
- (id)initWithContentScale:(long long)arg1;

@end

