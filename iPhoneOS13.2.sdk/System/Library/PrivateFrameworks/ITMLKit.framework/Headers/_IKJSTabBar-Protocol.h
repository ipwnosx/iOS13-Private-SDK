//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSTabBar-Protocol.h>
#import <ITMLKit/JSExport-Protocol.h>

@class IKJSTabBarItem, NSArray;

@protocol _IKJSTabBar <IKJSTabBar, JSExport>
@property(retain, nonatomic) IKJSTabBarItem *selectedTab;
@property(readonly, nonatomic) NSArray *tabs;
@end

