//
//  ShootInfoViewController.h
//  SwiftRelease
//
//  Created by beauty on 10/29/15.
//  Copyright (c) 2015 Beauty. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>


@interface ShootInfoViewController : UITableViewController <UITextFieldDelegate, CLLocationManagerDelegate>

@property (strong, nonatomic) UIDatePicker *datePicker;
@property (strong, nonatomic) CLLocationManager *locationManager;
@property (strong, nonatomic) CLLocation *currentLocation;
@property (strong, nonatomic) NSString *m_strLatitude;
@property (strong, nonatomic) NSString *m_strLongitude;
@property (strong, nonatomic) NSString *m_strCity;
@property (strong, nonatomic) NSString *m_strState;
@property (strong, nonatomic) NSString *m_strCountry;
@property (assign, nonatomic) BOOL m_bAvailableGPS;

@property (strong, nonatomic) CLGeocoder *geocoder;
@property (strong, nonatomic) CLPlacemark *placemark;

// input fields....
@property (weak, nonatomic) IBOutlet UITextField *txtPhotographerName;
@property (weak, nonatomic) IBOutlet UITextField *txtTitle;
@property (weak, nonatomic) IBOutlet UITextField *txtDescription;
@property (weak, nonatomic) IBOutlet UIButton *btnDate;

@property (weak, nonatomic) IBOutlet UITextField *txtCity;
@property (weak, nonatomic) IBOutlet UITextField *txtState;
@property (weak, nonatomic) IBOutlet UITextField *txtCountry;


// events
- (IBAction)onDownload:(id)sender;
- (IBAction)onMap:(id)sender;

- (IBAction)onDatePicker:(id)sender;

-(BOOL)checkInputDatas;


@end
