/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class VKMapView;

@interface _MKMapLayerHostingView : UIView {

	VKMapView* _mapView;

}

@property (nonatomic,retain) VKMapView * mapView;              //@synthesize mapView=_mapView - In the implementation block
+(Class)layerClass;
-(VKMapView *)mapView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setMapView:(VKMapView *)arg1 ;
@end

