//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplateGraphicCircular.h>

@class CLKGaugeProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicCircularClosedGaugeText : CLKComplicationTemplateGraphicCircular
{
    CLKGaugeProvider *_gaugeProvider;
    CLKTextProvider *_centerTextProvider;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CLKTextProvider *centerTextProvider; // @synthesize centerTextProvider=_centerTextProvider;
@property(copy, nonatomic) CLKGaugeProvider *gaugeProvider; // @synthesize gaugeProvider=_gaugeProvider;
- (void)_enumerateGaugeProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;

@end

