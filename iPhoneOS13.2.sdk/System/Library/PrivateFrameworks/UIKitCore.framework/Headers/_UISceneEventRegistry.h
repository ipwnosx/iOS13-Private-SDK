//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIMoveEvent, UIPencilEvent, UIPhysicalKeyboardEvent, UIPressesEvent, UITouchesEvent, UIWheelEvent, _UIGameControllerEvent;

__attribute__((visibility("hidden")))
@interface _UISceneEventRegistry : NSObject
{
    UIMoveEvent *_moveEvent;
    UITouchesEvent *_touchesEvent;
    UIPressesEvent *_pressesEvent;
    UIWheelEvent *_wheelEvent;
    _UIGameControllerEvent *_gameControllerEvent;
    UIPhysicalKeyboardEvent *_physicalKeyboardEvent;
    UIPencilEvent *_pencilEvent;
}

@property(readonly, nonatomic) UIPencilEvent *pencilEvent; // @synthesize pencilEvent=_pencilEvent;
@property(readonly, nonatomic) UIPhysicalKeyboardEvent *physicalKeyboardEvent; // @synthesize physicalKeyboardEvent=_physicalKeyboardEvent;
@property(readonly, nonatomic) _UIGameControllerEvent *gameControllerEvent; // @synthesize gameControllerEvent=_gameControllerEvent;
@property(readonly, nonatomic) UIWheelEvent *wheelEvent; // @synthesize wheelEvent=_wheelEvent;
@property(readonly, nonatomic) UIPressesEvent *pressesEvent; // @synthesize pressesEvent=_pressesEvent;
@property(readonly, nonatomic) UITouchesEvent *touchesEvent; // @synthesize touchesEvent=_touchesEvent;
@property(readonly, nonatomic) UIMoveEvent *moveEvent; // @synthesize moveEvent=_moveEvent;
// - (void).cxx_destruct;
- (void)addPencilEvent:(id)arg1;
- (void)addPhysicalKeyboardEvent:(id)arg1;
- (void)addGameControllerEvent:(id)arg1;
- (void)addWheelEvent:(id)arg1;
- (void)addPressesEvent:(id)arg1;
- (void)addTouchesEvent:(id)arg1;
- (void)addMoveEvent:(id)arg1;
- (void)invalidate;

@end

