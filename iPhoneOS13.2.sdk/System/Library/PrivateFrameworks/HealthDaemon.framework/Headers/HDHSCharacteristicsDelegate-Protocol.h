//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CBCharacteristic, CBPeripheral, NSArray, NSDate, NSError;

@protocol HDHSCharacteristicsDelegate
- (void)peripheral:(CBPeripheral *)arg1 didWriteValueForCharacteristic:(CBCharacteristic *)arg2 error:(NSError *)arg3;
- (void)peripheral:(CBPeripheral *)arg1 didUpdateValueForCharacteristic:(CBCharacteristic *)arg2 updateTime:(NSDate *)arg3 error:(NSError *)arg4;
- (void)peripheral:(CBPeripheral *)arg1 didDiscoverCharacteristic:(CBCharacteristic *)arg2;
- (void)peripheral:(CBPeripheral *)arg1 didDiscoverCharacteristics:(NSArray *)arg2;
@end

