//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet;
@protocol PXTilingControllerPreheatHandler;

@interface PXTilingControllerPreheatRecord : NSObject
{
    id <PXTilingControllerPreheatHandler> _preheatHandler;
    void _context;
    NSUInteger _tileGroup;
    NSIndexSet *_preheatedTileIndexes;
    UIEdgeInsets _padding;
}

@property(retain, nonatomic) NSIndexSet *preheatedTileIndexes; // @synthesize preheatedTileIndexes=_preheatedTileIndexes;
@property(nonatomic) UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) NSUInteger tileGroup; // @synthesize tileGroup=_tileGroup;
@property(readonly, nonatomic) void context; // @synthesize context=_context;
@property(readonly, nonatomic) __weak id <PXTilingControllerPreheatHandler> preheatHandler; // @synthesize preheatHandler=_preheatHandler;
// - (void).cxx_destruct;
- (id)initWithPreheatHandler:(id)arg1 context:(void )arg2;

@end

