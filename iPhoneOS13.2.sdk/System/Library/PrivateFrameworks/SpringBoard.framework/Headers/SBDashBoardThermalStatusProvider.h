//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/CSThermalStatusProviding-Protocol.h>

@class SBThermalController;

@interface SBDashBoardThermalStatusProvider : NSObject <CSThermalStatusProviding>
{
    SBThermalController *_thermalController;
}

// - (void).cxx_destruct;
@property(readonly, nonatomic) long long thermalStatus;
- (id)initWithThermalController:(id)arg1;
- (id)init;

@end

