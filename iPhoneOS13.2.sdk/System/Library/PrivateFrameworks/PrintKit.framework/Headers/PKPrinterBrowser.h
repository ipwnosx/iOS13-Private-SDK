//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PrintKit/PKBrowserClientProtocol-Protocol.h>

@class NSMutableDictionary, NSXPCConnection;
@protocol PKPrinterBrowserDelegate;

@interface PKPrinterBrowser : NSObject <PKBrowserClientProtocol>
{
    unsigned char _originalCellFlag;
    unsigned char _originalWifiFlag;
    BOOL _delegateRespondsToProximityUpdate;
    id <PKPrinterBrowserDelegate> _delegate;
    NSXPCConnection *_pkBrowseConnection;
    NSMutableDictionary *_printers;
    NSMutableDictionary *_btDevices;
}

+ (id)browserWithDelegate:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *btDevices; // @synthesize btDevices=_btDevices;
@property(retain, nonatomic) NSMutableDictionary *printers; // @synthesize printers=_printers;
@property(retain, nonatomic) NSXPCConnection *pkBrowseConnection; // @synthesize pkBrowseConnection=_pkBrowseConnection;
@property(nonatomic) id <PKPrinterBrowserDelegate> delegate; // @synthesize delegate=_delegate;
- (void)aggdDiscoveredPrinterStatistics;
- (void)btlePrinterFound:(id)arg1;
- (void)printerRemoved:(id)arg1 more:(BOOL)arg2;
- (void)printerAdded:(id)arg1 more:(BOOL)arg2;
- (void)btleRssiUpdated:(id)arg1 rssi:(id)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

