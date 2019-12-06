//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenReaderOutput/SCROBrailleDisplayDelegate-Protocol.h>

@class NSAttributedString, NSMutableArray, NSMutableDictionary, NSMutableSet, SCROBrailleDisplay, SCROBrailleDisplayHistory, SCROBrailleDisplayManagedQueue, SCROBrailleDisplayManagerStatus, SCROBrailleFormatter;
@protocol OS_dispatch_queue, OS_dispatch_source, SCROSBrailleDisplayManagerDelegate;

@interface SCROBrailleDisplayManager : NSObject <SCROBrailleDisplayDelegate>
{
    NSObject<OS_dispatch_queue> *_eventQueue;
    SCROBrailleDisplayManagedQueue *_managedDisplayQueue;
    SCROBrailleDisplay *_bluetoothBrailleDisplay;
    SCROBrailleDisplay *_stealthBrailleDisplay;
    NSMutableDictionary *_detectedIOElementsDict;
    SCROBrailleFormatter *_currentBrailleFormatter;
    NSMutableSet *_loadedIOElements;
//    struct __CFDictionary _displayConfigurationDict;
    id <SCROSBrailleDisplayManagerDelegate> _delegate;
    BOOL _showDotsSevenAndEight;
    BOOL _lineDescriptorDisplayCallbackEnabled;
    int _outputContractionMode;
    int _inputContractionMode;
    BOOL _outputShowEightDot;
    BOOL _inputShowEightDot;
    BOOL _shouldBatchUpdates;
    BOOL _automaticBrailleTranslation;
    BOOL _wordWrapEnabled;
    unsigned int _persistentKeyModifiers;
    long long _uiStringCachedLineOffset;
    NSAttributedString *_uiEditingCachedString;
    NSMutableArray *_displayModeStack;
    SCROBrailleDisplayHistory *_history;
    NSAttributedString *_mainString;
    NSAttributedString *_lineString;
    NSAttributedString *_statusString;
    SCROBrailleDisplayManagerStatus *_status;
    NSObject<OS_dispatch_source> *_alertTimer;
    double _alertTimeout;
    int _alertPriority;
    BOOL _isValid;
    int _inputAccessMode;
    NSAttributedString *_blankUIString;
    id /* CDUnknownBlockType */ _eventHandled;
}

+ (void)initialize;
@property(copy, nonatomic) id /* CDUnknownBlockType */ eventHandled; // @synthesize eventHandled=_eventHandled;
@property(readonly, nonatomic) SCROBrailleDisplayManagedQueue *managedDisplayQueue; // @synthesize managedDisplayQueue=_managedDisplayQueue;
// - (void).cxx_destruct;
- (id)_eventQueue_activeDisplayForToken:(int)arg1;
- (void)_enumerateActiveDisplays:(CDUnknownBlockType)arg1;
- (void)_eventQueue_setBrailleKeyDebounceTimeout:(double)arg1;
- (void)setBrailleKeyDebounceTimeout:(double)arg1;
- (void)_eventQueue_translateBrailleToClipboard;
- (void)translateBrailleToClipboard;
- (void)_eventQueue_setTextSearchModeIsOn:(BOOL)arg1;
- (void)setTextSearchModeIsOn:(BOOL)arg1;
- (void)_eventQueue_setSingleLetterInputIsOn:(BOOL)arg1;
- (void)setSingleLetterInputIsOn:(BOOL)arg1;
- (void)_eventQueue_setBatchUpdates:(BOOL)arg1;
- (void)endUpdates;
- (void)beginUpdates;
- (void)_eventQueue_prepareToMemorizeNextKey:(BOOL)arg1 immediately:(BOOL)arg2 forDisplayWithToken:(int)arg3;
- (void)setPrepareToMemorizeNextKey:(BOOL)arg1 immediate:(BOOL)arg2 forDisplayWithToken:(int)arg3;
- (void)_eventQueue_simulateKeypress:(id)arg1;
- (void)simulateKeypress:(id)arg1;
- (NSRange *)rangeOfBrailleCellRepresentingCharacterAtIndex:(NSUInteger)arg1;
- (long long)tokenForRouterIndex:(long long)arg1 location:(long long )arg2 appToken:(id )arg3 forDisplayWithToken:(int)arg4;
- (void)_eventQueue_setLineDescriptorCallbackEnabled:(BOOL)arg1;
- (BOOL)lineDescriptorDisplayCallbackEnabled;
- (void)setLineDescriptorDisplayCallbackEnabled:(BOOL)arg1;
- (void)_eventQueue_showNextAnnouncement:(BOOL)arg1;
- (void)showNextAnnouncement;
- (void)showPreviousAnnouncement;
- (void)_eventQueue_showDotsSevenAndEight:(BOOL)arg1;
- (BOOL)showDotsSevenAndEight;
- (void)setShowDotsSevenAndEight:(BOOL)arg1;
- (void)_eventQueue_setPersistentKeyModifiers:(unsigned int)arg1;
@property(nonatomic) unsigned int persistentKeyModifiers;
- (void)_eventQueue_setInputContractionMode:(int)arg1;
@property(nonatomic) int inputContractionMode;
- (void)_eventQueue_setWordWrapEnabled:(BOOL)arg1;
@property(nonatomic) BOOL wordWrapEnabled;
- (void)_eventQueue_setAutomaticBrailleTranslationEnabled:(BOOL)arg1;
- (BOOL)automaticBrailleTranslation;
- (void)setAutomaticBrailleTranslationEnabled:(BOOL)arg1;
- (void)_eventQueue_setInputEightDotBraille:(BOOL)arg1;
@property(nonatomic) BOOL inputEightDotBraille;
- (void)_eventQueue_setShowEightDotBraille:(BOOL)arg1;
- (BOOL)showEightDotBraille;
- (void)setShowEightDotBraille:(BOOL)arg1;
- (void)_eventQueue_setContractionMode:(int)arg1;
- (int)contractionMode;
- (void)setContractionMode:(int)arg1;
- (void)_eventQueue_setAlwaysUsesNemethCodeForTechnicalText:(BOOL)arg1;
- (BOOL)alwaysUsesNemethCodeForTechnicalText;
- (void)setAlwaysUsesNemethCodeForTechnicalText:(BOOL)arg1;
- (void)_eventQueue_setTableIdentifier:(id)arg1;
- (void)configureTableWithIdentifier:(id)arg1;
- (id)_eventQueue_cachedMainStringForDisplayMode:(int)arg1;
- (void)_eventQueue_popDisplayModeStack;
- (void)_eventQueue_stopAlertTimer;
- (void)_eventQueue_resetAlertTimer;
- (void)_eventQueue_alertTimeoutHandler;
- (void)_eventQueue_exitCurrentDisplayMode;
- (void)_eventQueue_doSetDisplayMode:(int)arg1;
- (void)_eventQueue_setDisplayMode:(int)arg1;
- (int)displayMode;
- (void)exitCurrentDisplayMode;
- (void)setAnnouncementsDisplayMode;
- (void)setUIDisplayMode;
- (void)_eventQueue_panDisplayLeft:(BOOL)arg1 token:(int)arg2;
- (void)panDisplayRight:(int)arg1;
- (void)panDisplayLeft:(int)arg1;
- (void)_eventQueue_setVirtualStatusAlignment:(int)arg1;
- (int)virtualStatusAlignment;
- (void)setVirtualStatusAlignment:(int)arg1;
- (void)_eventQueue_setMasterStatusCellIndex:(long long)arg1;
- (long long)masterStatusCellIndex;
- (void)setMasterStatusCellIndex:(long long)arg1;
- (void)_eventQueue_setAggregatedStatus:(id)arg1;
- (id)aggregatedStatus;
- (void)setAggregatedStatus:(id)arg1;
- (void)_eventQueue_setMainAttributedString:(id)arg1 shouldDisplay:(BOOL)arg2 forceUpdate:(BOOL)arg3;
- (id)_eventQueue_mainAttributedString;
- (id)mainAttributedString;
- (void)setMainAttributedString:(id)arg1 forceUpdate:(BOOL)arg2;
- (void)setMainAttributedString:(id)arg1;
- (void)_eventQueue_setDisplayInputAccessMode:(int)arg1;
- (int)displayInputAccessMode;
- (void)setDisplayInputAccessMode:(int)arg1;
- (void)_eventQueue_setPrimaryDisplay:(int)arg1;
- (void)setPrimaryBrailleDisplay:(int)arg1;
- (BOOL)hasActiveDisplays;
- (BOOL)isConfigured;
- (void)_blankOutDisplaysInQueue:(id)arg1;
- (void)_saveBluetoothDisplayConfiguration:(id)arg1;
- (id)_eventQueue_driverConfiguration;
- (id)driverConfiguration;
- (void)_eventQueue_unloadStealthDisplay;
- (void)_eventQueue_loadStealthDisplay;
- (void)_unloadStealthDisplay;
- (void)_loadStealthDisplay;
- (void)_resetBluetoothReconnectionTimer;
- (void)removeBluetoothDriverWithAddress:(id)arg1;
- (void)loadBluetoothDriverWithAddress:(id)arg1;
- (void)playCommandNotSupportedSoundForBrailleDisplay:(id)arg1;
- (void)playBorderHitSoundForBrailleDisplay:(id)arg1;
- (id)newBrailleDisplayCommandDispatcher;
- (id)brailleInputManager;
- (void)brailleDisplay:(id)arg1 didPanRight:(id)arg2 elementToken:(id)arg3 appToken:(id)arg4;
- (void)brailleDisplay:(id)arg1 didPanLeft:(id)arg2 elementToken:(id)arg3 appToken:(id)arg4;
- (void)brailleDisplay:(id)arg1 didDisplay:(id)arg2;
- (void)brailleDisplay:(id)arg1 memorizedKey:(id)arg2;
- (void)brailleDisplay:(id)arg1 willMemorizeKey:(id)arg2;
- (void)brailleDisplay:(id)arg1 deletedUntranslatedText:(id)arg2 speakLiterally:(BOOL)arg3;
- (void)brailleDisplay:(id)arg1 copyStringToClipboard:(id)arg2;
- (void)brailleDisplay:(id)arg1 insertedUntranslatedText:(id)arg2 speakLiterally:(BOOL)arg3;
- (void)brailleDisplay:(id)arg1 didReplaceRange:(NSRange *)arg2 withString:(id)arg3 cursor:(NSUInteger)arg4;
- (void)brailleDidStartEditingWithDisplay:(id)arg1;
- (void)brailleDisplay:(id)arg1 pressedKeys:(id)arg2;
- (void)brailleDisplay:(id)arg1 didMoveSelection:(NSUInteger)arg2;
- (void)configurationChangedForBrailleDisplay:(id)arg1;
- (void)_eventQueue_brailleDisplay:(id)arg1 isSleeping:(BOOL)arg2;
- (void)brailleDisplay:(id)arg1 isSleeping:(BOOL)arg2;
- (void)_eventQueue_brailleDriverDisconnected:(id)arg1;
- (void)brailleDriverDisconnected:(id)arg1;
- (void)_eventQueue_brailleDisplayDriverFailedToLoad:(id)arg1;
- (void)_eventQueue_brailleDisplayDriverDidLoad:(id)arg1;
- (void)brailleDisplay:(id)arg1 driverDidLoad:(BOOL)arg2;
@property(nonatomic) __weak id <SCROSBrailleDisplayManagerDelegate> delegate;
- (void)_eventQueue_loadNextDriverForIOElement:(id)arg1;
- (void)_loadNextDriverForIOElement:(id)arg1;
- (id)_displayWithIOElement:(id)arg1 driverIdentifier:(id)arg2 delegate:(id)arg3;
- (BOOL)_eventQueue_addDetectedIOElement:(id)arg1 withDriverIdentifier:(id)arg2;
- (void)_addDetectedIOElement:(id)arg1 withDriverIdentifier:(id)arg2;
- (void)_deviceConnectedHandler:(id)arg1;
- (void)_disableAutoDetect;
- (void)_enableAutoDetect;
- (void)_eventQueue_refreshEightDotEnabledOnDisplays;
- (void)_refreshEightDotEnabledOnDisplays;
- (void)tokenizeString:(id)arg1 intoFormatter:(id)arg2 selection:(NSRange * )arg3;
- (BOOL)isValid;
- (void)_eventQueue_stop;
- (void)_mainQueue_invalidate;
- (void)_eventQueue_invalidate;
- (void)invalidate;
- (id)init;

@end

