//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSError, RTScenarioTrigger, RTVisit;

@protocol RTFrameworkProtocol 
- (void)onVehicleEvents:(NSArray *)arg1 error:(NSError *)arg2;
- (void)onScenarioTrigger:(RTScenarioTrigger *)arg1 withError:(NSError *)arg2;
- (void)onLeechedLowConfidenceVisit:(RTVisit *)arg1 withError:(NSError *)arg2;
- (void)onLeechedVisit:(RTVisit *)arg1 withError:(NSError *)arg2;
- (void)onVisit:(RTVisit *)arg1 withError:(NSError *)arg2;
@end
