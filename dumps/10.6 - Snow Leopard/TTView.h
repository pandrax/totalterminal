/*
 *     Generated by class-dump 3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "TTAccessibleView.h"

#import "NSTextInput-Protocol.h"
#import "TTBlinking-Protocol.h"

@class NSAttributedString, NSColor, NSCursor, NSImage, NSInvocation, NSMenuItem, NSMutableIndexSet, NSTimer, NSURL, TTLogicalScreen, TTPane, TTProfile, TTTabController;

@interface TTView : TTAccessibleView <TTBlinking, NSTextInput>
{
    struct CGSize _cellSize;
    double _descender;
    double _leading;
    double _baselineOffset;
    TTLogicalScreen *_logicalScreen;
    TTProfile *_profile;
    unsigned long long _lowMemoryLineCountLimit;
    TTPane *pane;
    TTTabController *_controller;
    NSTimer *_needsDisplayTimer;
    BOOL _shouldUpdateDirtyFlag;
    BOOL _isDrawingThumbnail;
    CDStruct_bff1fa32 *_glyphsBuffer;
    CDStruct_bff1fa32 *_advancesBuffer;
    CDStruct_bff1fa32 *_indicesBuffer;
    BOOL _isTextBlinkActive;
    BOOL _isCursorBlinkActive;
    BOOL _shouldSuppressCursorBlink;
    BOOL _isVisualBellActive;
    BOOL _doRectangularSelection;
    BOOL _doAppendSelection;
    BOOL _doDiscontinuousSelection;
    BOOL _doPathOrURLSelection;
    NSURL *_clickedURL;
    unsigned long long _selectionStyle;
    BOOL _isTransientSelection;
    BOOL _isDraggingSelection;
    BOOL _isPrintable;
    BOOL _isHandlingContextualMenu;
    NSMenuItem *_openURLMenuItem;
    NSURL *_contextualMenuURL;
    NSMutableIndexSet *_activeTextSelection;
    NSMutableIndexSet *_textSelectionRanges;
    NSMutableIndexSet *_selectionSetDifference;
    NSMutableIndexSet *_savedTextSelectionRanges;
    CDStruct_c3ca3989 _initialSelectionPoint;
    CDStruct_c3ca3989 _endSelectionPoint;
    CDStruct_c3ca3989 _previousSelectionStart;
    CDStruct_c3ca3989 _previousSelectionEnd;
    NSCursor *_mouseCursor;
    BOOL _dragAndDropIsActive;
    unsigned long long _printRange;
    CDStruct_9b71c0a5 _ttaxLastCursorPosition;
    unsigned long long _ttaxLastLineCount;
    BOOL _hasMarkedText;
    BOOL _markedTextHasAttributes;
    NSAttributedString *_markedText;
    CDStruct_9b71c0a5 _markedTextAnchor;
    unsigned long long _markedTextWidth;
    BOOL _hasUnprocessedInsertion;
    NSInvocation *_markedTextInvocation;
    NSMutableIndexSet *_dirtyLines;
    BOOL _shouldDirtyAllLines;
    NSMutableIndexSet *_blinkingLines;
    unsigned long long _scrollingLineOffset;
    BOOL _isScrollingPinned;
    NSImage *_backgroundImage;
    NSColor *_currentBackgroundColor;
    unsigned int _alertSoundID;
    unsigned long long _alertQueueCount;
    BOOL _shouldFocusFollowMouse;
    double _accelLastEntry;
    double _accelCount;
    SEL _accelSelector;
    id _accelTarget;
}

+ (void)initialize;
+ (struct CGSize)logicalContentSizeForRect:(struct CGRect)arg1 cellSize:(struct CGSize)arg2 font:(id)arg3;
+ (struct CGSize)logicalContentSizeForRect:(struct CGRect)arg1 profile:(id)arg2 controller:(id)arg3;
+ (struct CGRect)unpaddedContentRectForProfile:(id)arg1;
+ (id)markedTextAttributes;
+ (id)trustedFontNames;
+ (struct CGSize)cellSizeForProfile:(id)arg1 controller:(id)arg2;
+ (struct CGRect)rectWithoutPadding:(struct CGRect)arg1 font:(id)arg2;
- (id)autorelease;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)removeFromSuperview;
- (void)dealloc;
- (id)controller;
- (void)setController:(id)arg1;
- (id)profile;
- (void)setProfile:(id)arg1;
- (void)setObserversForLogicalScreen:(BOOL)arg1;
- (id)logicalScreen;
- (void)setLogicalScreen:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)screenDidRewrap:(id)arg1;
- (id)string;
- (struct CGSize)cellSize;
- (struct CGSize)logicalContentSize;
- (struct CGSize)visibleContentSize;
- (struct CGSize)contentSize;
- (struct CGSize)contentMinSize;
- (unsigned long long)rowCount;
- (unsigned long long)visibleRowCount;
- (unsigned long long)visibleLineCount;
- (struct _NSRange)visibleLineRange;
- (struct CGSize)contentSizeForLogicalContentSize:(struct CGSize)arg1;
- (struct CGSize)logicalSizeForContentSize:(struct CGSize)arg1;
- (struct CGSize)roundedContentSizeForContentSize:(struct CGSize)arg1;
- (struct CGRect)unpaddedContentRect;
- (void)updateShellContentSize;
- (void)sizeToFit:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (BOOL)preservesContentDuringLiveResize;
- (void)viewDidEndLiveResize;
- (struct _NSRange)lineRangeForRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawAttributedStringsToScreen:(BOOL)arg1 inRect:(struct CGRect)arg2 selectedTextRanges:(id)arg3 selectionColor:(id)arg4;
- (void)drawAttributedString:(id)arg1 forLine:(unsigned long long)arg2 inContext:(struct CGContext *)arg3 atPoint:(struct CGPoint)arg4 isTextMarked:(BOOL)arg5 size:(unsigned long long)arg6 containsCursor:(BOOL)arg7 atColumn:(unsigned long long)arg8 selectedTextRanges:(id)arg9 selectionColor:(id)arg10;
- (void)drawCustomString:(id)arg1 inContext:(struct CGContext *)arg2 atPoint:(struct CGPoint)arg3;
- (void)drawCursor;
- (id)adjustedColorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 withBackgroundColor:(id)arg5 force:(BOOL)arg6;
- (id)adjustedColorWithColor:(id)arg1 withBackgroundColor:(id)arg2 force:(BOOL)arg3;
- (void)printColor:(unsigned long long)arg1;
- (id)colorForANSIColor:(unsigned long long)arg1;
- (id)colorForANSIColor:(unsigned long long)arg1 adjustedRelativeToColor:(id)arg2;
- (void)clearScrollback:(id)arg1;
- (void)scrollToBeginningOfDocument:(id)arg1;
- (void)scrollToEndOfDocument:(id)arg1;
- (void)scrollToTop:(id)arg1;
- (void)scrollToBottom:(id)arg1;
- (void)acceleratingApplySelector:(SEL)arg1 withTarget:(id)arg2 withObject:(id)arg3 withMaximum:(double)arg4 withGrowthRate:(double)arg5;
- (void)lineUp:(id)arg1;
- (void)lineDown:(id)arg1;
- (void)scrollPageUp:(id)arg1;
- (void)scrollPageDown:(id)arg1;
- (void)pageUp:(id)arg1;
- (void)pageDown:(id)arg1;
- (void)printTerminal:(id)arg1;
- (void)printTerminalSelection:(id)arg1;
- (void)runPrintTerminalOperation;
- (void)setProfileAsDefault:(id)arg1;
- (void)saveProfile:(id)arg1;
- (void)saveProfileAndSetAsDefault:(id)arg1;
- (void)saveProfileAsDefault:(BOOL)arg1;
- (void)profileSavePanelDidEnd:(id)arg1 returnCode:(long long)arg2;
- (void)saveProfileImmediately:(id)arg1;
- (void)applyFrontMostWindowProfileToAllShells:(id)arg1;
- (void)restoreFactoryDefaultProfile:(id)arg1;
- (void)takeProfileFrom:(id)arg1;
- (void)setSelectedProfile:(id)arg1;
- (void)performTerminalFindPanelAction:(id)arg1;
- (void)centerSelectionInVisibleArea:(id)arg1;
- (void)returnToDefaultSize:(id)arg1;
- (void)searchInSpotlight:(id)arg1;
- (void)searchInGoogle:(id)arg1;
- (void)lookUpInDictionary:(id)arg1;
- (void)selectTitleField:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)_wantsKeyDownForEvent:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)openURL:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)windowDidChangeMain:(id)arg1;
- (void)emulatorDidDecodeData:(id)arg1;
- (void)emulatorDidBeep:(id)arg1;
- (void)needsDisplayTimer:(id)arg1;
- (void)blinker:(id)arg1 didBlink:(BOOL)arg2;
- (void)changeFont:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateBlinker;
- (BOOL)isInverted;
- (CDStruct_bff1fa32 *)createUTF16FromUTF8:(CDStruct_bff1fa32 *)arg1;
- (void)setPrintRange:(unsigned long long)arg1;
- (unsigned long long)printRange;
- (void)setPrintable:(BOOL)arg1;
- (struct CGRect)boundsForPrintRange:(unsigned long long)arg1;
- (struct _NSRange)lineRangeForPrintRange:(unsigned long long)arg1;
- (struct CGSize)effectivePageSize;
- (struct CGSize)unscaledEffectivePageSize;
- (void)beginPageInRect:(struct CGRect)arg1 atPlacement:(struct CGPoint)arg2;
- (BOOL)knowsPageRange:(struct _NSRange *)arg1;
- (struct CGRect)rectForPage:(int)arg1;
- (void)printOperationDidRun:(id)arg1 success:(BOOL)arg2 contextInfo:(void *)arg3;
- (void)saveTextAs:(id)arg1;
- (void)saveSelectedTextAs:(id)arg1;
- (void)savePanelDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)didPresentSaveErrorWithRecovery:(BOOL)arg1 contextInfo:(void *)arg2;
- (void)exportSettings:(id)arg1;
- (void)exportPanelDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)selectAll:(id)arg1;
- (void)sendSoftReset:(id)arg1;
- (void)sendHardReset:(id)arg1;
- (id)allText;
- (id)selectedText;
- (id)selectedTextParagraphCounts;
- (void)copySelectedText:(id)arg1;
- (void)copy:(id)arg1;
- (void)paste:(id)arg1;
- (void)pasteSelection:(id)arg1;
- (void)pasteEscaped:(id)arg1;
- (BOOL)pasteboardHasText;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)readSelectionFromPasteboard:(id)arg1;
- (BOOL)readSelectionFromPasteboard:(id)arg1 isDragAndDrop:(BOOL)arg2 sender:(id)arg3;
- (BOOL)readSelectionFromString:(id)arg1;
- (BOOL)writeSelectionToPasteboard:(id)arg1 types:(id)arg2;
- (id)validRequestorForSendType:(id)arg1 returnType:(id)arg2;
- (void)flagsChanged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)otherMouseDown:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)scrollLinesBy:(long long)arg1;
- (unsigned long long)lastScrollableLine;
- (void)scrollLinesTo:(unsigned long long)arg1;
- (void)updateScroller;
- (BOOL)autoscroll:(id)arg1;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (void)draggingExited:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (void)insertText:(id)arg1;
- (void)doCommandBySelector:(SEL)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)unmarkText;
- (BOOL)hasMarkedText;
- (long long)conversationIdentifier;
- (id)attributedSubstringFromRange:(struct _NSRange)arg1;
- (struct _NSRange)markedRange;
- (struct _NSRange)selectedRange;
- (struct CGRect)firstRectForCharacterRange:(struct _NSRange)arg1;
- (unsigned long long)characterIndexForPoint:(struct CGPoint)arg1;
- (id)validAttributesForMarkedText;
- (void)removeMarkedText;
- (id)NSRectArrayForRanges:(id)arg1;
- (id)NSRectArrayForRange:(struct _NSRange)arg1;
- (struct CGRect)rectForLineRange:(struct _NSRange)arg1;
- (id)bezierPathForRanges:(id)arg1;
- (id)bezierPathForRanges:(id)arg1 intersectingRect:(struct CGRect)arg2;
- (void)delayedSetNeedsDisplayInLine:(unsigned long long)arg1;
- (void)delayedSetNeedsDisplayInLines:(id)arg1;
- (void)scheduleDelayedDisplayTimer:(BOOL)arg1;
- (void)delayedSetNeedsDisplay:(BOOL)arg1;
- (void)setNeedsDisplayInRanges:(id)arg1;
- (void)setNeedsImmediateDisplay;
- (void)calculateCellSize;
- (double)descenderInPixels;
- (void)drawSelectedTextRanges:(id)arg1 withColor:(id)arg2;
- (struct CGPoint)pointForDisplayPosition:(CDStruct_4bcfbbae)arg1;
- (CDStruct_4bcfbbae)displayPositionForPoint:(struct CGPoint)arg1;
- (void)handleAlertCompletion;
@property(readonly) NSMutableIndexSet *dirtyLines; // @synthesize dirtyLines=_dirtyLines;
@property BOOL scrollingIsPinned; // @synthesize scrollingIsPinned=_isScrollingPinned;
@property TTPane *pane; // @synthesize pane;

@end
