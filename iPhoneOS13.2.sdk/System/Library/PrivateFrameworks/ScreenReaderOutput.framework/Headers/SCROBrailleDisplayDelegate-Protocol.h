//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSAttributedString, NSNumber, NSString, SCROBrailleDisplay, SCROBrailleKey;
@protocol SCROBrailleDisplayCommandDispatcherProtocol, SCROBrailleDisplayInputManagerProtocol;

@protocol SCROBrailleDisplayDelegate <NSObject>
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 copyStringToClipboard:(NSString *)arg2;
- (void)playCommandNotSupportedSoundForBrailleDisplay:(SCROBrailleDisplay *)arg1;
- (void)playBorderHitSoundForBrailleDisplay:(SCROBrailleDisplay *)arg1;
- (id <SCROBrailleDisplayCommandDispatcherProtocol>)newBrailleDisplayCommandDispatcher;
- (id <SCROBrailleDisplayInputManagerProtocol>)brailleInputManager;
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 didPanRight:(NSNumber *)arg2 elementToken:(NSNumber *)arg3 appToken:(id)arg4;
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 didPanLeft:(NSNumber *)arg2 elementToken:(NSNumber *)arg3 appToken:(id)arg4;
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 didDisplay:(NSAttributedString *)arg2;
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 memorizedKey:(SCROBrailleKey *)arg2;
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 willMemorizeKey:(SCROBrailleKey *)arg2;
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 deletedUntranslatedText:(NSString *)arg2 speakLiterally:(BOOL)arg3;
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 insertedUntranslatedText:(NSString *)arg2 speakLiterally:(BOOL)arg3;
- (void)brailleDidStartEditingWithDisplay:(SCROBrailleDisplay *)arg1;
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 didMoveSelection:(NSUInteger)arg2;
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 didReplaceRange:(NSRange *)arg2 withString:(NSString *)arg3 cursor:(NSUInteger)arg4;
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 pressedKeys:(NSArray *)arg2;
- (void)configurationChangedForBrailleDisplay:(SCROBrailleDisplay *)arg1;
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 isSleeping:(BOOL)arg2;
- (void)brailleDriverDisconnected:(SCROBrailleDisplay *)arg1;
- (void)brailleDisplay:(SCROBrailleDisplay *)arg1 driverDidLoad:(BOOL)arg2;
@end

