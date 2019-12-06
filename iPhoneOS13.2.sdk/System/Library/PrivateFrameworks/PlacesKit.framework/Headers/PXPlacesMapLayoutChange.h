//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PXPlacesMapLayoutItem;

@interface PXPlacesMapLayoutChange : NSObject
{
    id <PXPlacesMapLayoutItem> _sourceLayoutItem;
    id <PXPlacesMapLayoutItem> _targetLayoutItem;
    long long _type;
}

@property(readonly) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) id <PXPlacesMapLayoutItem> targetLayoutItem; // @synthesize targetLayoutItem=_targetLayoutItem;
@property(readonly, nonatomic) id <PXPlacesMapLayoutItem> sourceLayoutItem; // @synthesize sourceLayoutItem=_sourceLayoutItem;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithSourceLayoutItem:(id)arg1 targetLayoutItem:(id)arg2 type:(long long)arg3;

@end

