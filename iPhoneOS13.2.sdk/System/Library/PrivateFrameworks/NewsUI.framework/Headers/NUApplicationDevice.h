//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUDevice-Protocol.h>

@class UIApplication, UIScreen;

@interface NUApplicationDevice : NSObject <NUDevice>
{
    UIApplication *_application;
    UIScreen *_screen;
}

@property(readonly, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
@property(readonly, nonatomic) UIApplication *application; // @synthesize application=_application;
// - (void).cxx_destruct;
@property(readonly, nonatomic, getter=isSplitScreen) BOOL splitScreen;
- (id)initWithApplication:(id)arg1 screen:(id)arg2;

@end

