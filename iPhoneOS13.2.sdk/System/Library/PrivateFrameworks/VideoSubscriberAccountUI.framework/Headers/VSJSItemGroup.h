//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <VideoSubscriberAccountUI/VSJSItemGroup-Protocol.h>

@protocol VSJSItemGroupBridge;

__attribute__((visibility("hidden")))
@interface VSJSItemGroup : IKJSObject <VSJSItemGroup>
{
    long long _selectedItem;
    id <VSJSItemGroupBridge> _bridge;
}

@property(retain, nonatomic) id <VSJSItemGroupBridge> bridge; // @synthesize bridge=_bridge;
// - (void).cxx_destruct;
@property(nonatomic) long long selectedItem; // @synthesize selectedItem=_selectedItem;

@end

