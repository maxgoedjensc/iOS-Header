//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class PXPlacesMapView;

@interface PXPlacesMapInfoViewController : UIViewController
{
    PXPlacesMapView *_mapView;
}

- (void).cxx_destruct;
@property __weak PXPlacesMapView *mapView; // @synthesize mapView=_mapView;
- (long long)segmentIndexFor:(unsigned long long)arg1;
- (void)mapTypeChanged:(id)arg1;
- (void)tapped3dButton:(id)arg1;
- (void)tappedDimView:(id)arg1;
- (void)tappedDone:(id)arg1;
- (void)viewDidLoad;
- (id)initWithMapView:(id)arg1;

@end

