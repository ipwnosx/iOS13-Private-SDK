//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBHLegibility-Protocol.h>

@class SBHSidebarVisualConfiguration, WGWidgetGroupViewController;
@protocol SBHSidebarProviderDelegate;

@protocol SBHSidebarProvider <SBHLegibility>
@property(nonatomic) __weak id <SBHSidebarProviderDelegate> delegate;
@property(nonatomic) NSUInteger layoutInsetsIgnoredEdges;
@property(retain, nonatomic) SBHSidebarVisualConfiguration *sidebarVisualConfiguration;
@property(retain, nonatomic) WGWidgetGroupViewController *widgetViewController;
- (void)setEditingIcons:(BOOL)arg1;
@end

