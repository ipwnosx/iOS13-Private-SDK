//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIContextBinding-Protocol.h>

@class FBSScene;

@interface _UIContextBinderSubstrate : NSObject <_UIContextBinding>
{
    FBSScene *_scene;
}

@property(readonly, nonatomic) FBSScene *scene; // @synthesize scene=_scene;
// - (void).cxx_destruct;
- (void)detachContext:(id)arg1;
- (void)attachContext:(id)arg1;
- (id)initWithScene:(id)arg1;

@end

