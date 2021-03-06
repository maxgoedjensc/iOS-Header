//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProvider/NSSecureCoding-Protocol.h>

@interface FPCTLTermDumper : NSObject <NSSecureCoding>
{
    int _fd;
    unsigned long long _termWidth;
    unsigned long long _usedTermWidth;
    int _curAttrs;
    int _curFg;
    int _curBg;
    _Bool _eightBitColor;
    _Bool _isatty;
    _Bool _useColor;
    _Bool _supportsEscapeSequences;
}

+ (void)execPagerOnFileFd:(int)arg1;
+ (void)setupPagerForFd:(int)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool supportsEscapeSequences; // @synthesize supportsEscapeSequences=_supportsEscapeSequences;
@property(readonly, nonatomic) _Bool useColor; // @synthesize useColor=_useColor;
@property(readonly, nonatomic) _Bool isatty; // @synthesize isatty=_isatty;
@property(readonly, nonatomic) int fd; // @synthesize fd=_fd;
- (id)annotateString:(id)arg1 markedIdentifiers:(id)arg2;
- (void)write:(id)arg1;
- (void)put:(id)arg1;
- (void)puts:(const char *)arg1;
- (void)puts:(const char *)arg1 len:(unsigned long long)arg2;
- (void)_putsAndCrop:(const char *)arg1 len:(unsigned long long)arg2;
- (void)dumpProgress:(id)arg1;
- (void)dumpImage:(id)arg1 characterWidth:(unsigned long long)arg2 characterHeight:(unsigned long long)arg3;
- (void)dumpImage:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;
- (void)changeAttributes:(int)arg1;
- (void)changeBgColor:(int)arg1;
- (void)changeFgColor:(int)arg1;
- (void)startAttributes:(int)arg1;
- (void)startBgColor:(int)arg1;
- (void)startFgColor:(int)arg1;
- (void)startBgColor:(int)arg1 attr:(int)arg2;
- (void)startFgColor:(int)arg1 attr:(int)arg2;
- (void)forgetRemainingSpace;
- (unsigned long long)remainingSpace;
- (void)endLine;
- (void)startNewLine;
- (void)cursorGotoLineStart;
- (void)cursorLeft:(unsigned int)arg1;
- (void)cursorRight:(unsigned int)arg1;
- (void)cursorDown:(unsigned int)arg1;
- (void)cursorUp:(unsigned int)arg1;
- (void)cursorRestore;
- (void)cursorSave;
- (void)eraseScreenUp;
- (void)eraseScreenDown;
- (void)eraseLine;
- (void)eraseStartOfLine;
- (void)eraseEndOfLine;
- (void)reset;
- (void)startFgColor:(int)arg1 bgColor:(int)arg2 attr:(int)arg3;
- (id)stringForReset;
- (id)startStringForFgColor:(int)arg1 bgColor:(int)arg2 attr:(int)arg3;
- (unsigned long long)_startInCString:(char [256])arg1 fgColor:(int)arg2 bgColor:(int)arg3 attr:(int)arg4;
- (void)startPager;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithFd:(int)arg1 forceColor:(_Bool)arg2;

@end

