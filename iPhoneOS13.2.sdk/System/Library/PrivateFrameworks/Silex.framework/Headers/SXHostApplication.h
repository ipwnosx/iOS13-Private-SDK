//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXHost-Protocol.h>

@class UIApplication;

@interface SXHostApplication : NSObject <SXHost>
{
    UIApplication *_application;
}

@property(nonatomic) __weak UIApplication *application; // @synthesize application=_application;
// - (void).cxx_destruct;
- (BOOL)canOpenURL:(id)arg1;
- (void)openURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) BOOL active;
- (id)initWithApplication:(id)arg1;

@end

