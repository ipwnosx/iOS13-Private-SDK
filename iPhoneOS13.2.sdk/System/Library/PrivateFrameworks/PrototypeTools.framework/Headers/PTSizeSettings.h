//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@interface PTSizeSettings : PTSettings
{
    double _width;
    double _height;
}

+ (BOOL)ignoresKey:(id)arg1;
+ (id)settingsControllerModule;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) CGSize sizeValue;
- (id)drillDownSummary;

@end

