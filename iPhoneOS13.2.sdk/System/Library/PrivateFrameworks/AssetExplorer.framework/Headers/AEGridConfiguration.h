//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AEGridConfiguration : NSObject
{
    BOOL _oversized;
    NSUInteger _rowCount;
    double _tileHeight;
}

+ (id)configurationForEnvironment:(id)arg1;
@property(nonatomic, getter=isOversized) BOOL oversized; // @synthesize oversized=_oversized;
@property(nonatomic) double tileHeight; // @synthesize tileHeight=_tileHeight;
@property(nonatomic) NSUInteger rowCount; // @synthesize rowCount=_rowCount;

@end

