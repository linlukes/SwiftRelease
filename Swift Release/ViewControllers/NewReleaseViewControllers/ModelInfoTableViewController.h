//
//  ModelInfoTableViewController.h
//  SwiftRelease
//
//  Created by beauty on 10/30/15.
//  Copyright © 2015 Beauty. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import "NewReleaseViewController.h"

@interface ModelInfoTableViewController : UITableViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UITextFieldDelegate, CLLocationManagerDelegate>
{
    BOOL m_bEnableLocation;
}

@property BOOL b_isChild;

@property (strong, nonatomic) UIDatePicker *datePicker;
@property (strong, nonatomic) CLLocationManager *locationManager;

@property (strong, nonatomic) CLLocation *currentLocation;

@property (strong, nonatomic) NSString *m_strLatitude;
@property (strong, nonatomic) NSString *m_strLongitude;
@property (strong, nonatomic) NSString *m_strStreetAddress;
@property (strong, nonatomic) NSString *m_strCity;
@property (strong, nonatomic) NSString *m_strState;
@property (strong, nonatomic) NSString *m_strCountry;
@property (strong, nonatomic) NSString *m_strPostalCode;

@property (strong, nonatomic) CLGeocoder *geocoder;
@property (strong, nonatomic) CLPlacemark *placemark;
//////////// Input Fields //////////////////////////

@property (weak, nonatomic) IBOutlet UIImageView *imgPhoto;
@property (weak, nonatomic) IBOutlet UIButton *btnCamera;

// Personal Information
@property (weak, nonatomic) IBOutlet UITextField *txtModelName;
@property (weak, nonatomic) IBOutlet UIButton *btnDateOfBirth;

@property (weak, nonatomic) IBOutlet UISegmentedControl *segGender;

@property (weak, nonatomic) IBOutlet UITextField *txtEthnicity;

// If under 18 years old
@property (weak, nonatomic) IBOutlet UITextField *txtParentName;

// Address
@property (weak, nonatomic) IBOutlet UITextField *txtStreetAddress;
@property (weak, nonatomic) IBOutlet UITextField *txtCity;
@property (weak, nonatomic) IBOutlet UITextField *txtState;
@property (weak, nonatomic) IBOutlet UITextField *txtCountry;
@property (weak, nonatomic) IBOutlet UITextField *txtPostalCode;

// Contact Infomation
@property (weak, nonatomic) IBOutlet UITextField *txtEmail;
@property (weak, nonatomic) IBOutlet UITextField *txtPhone;
/////////////////////////////////////////////////


// button event
- (IBAction)onCamera:(id)sender;
- (IBAction)onBirth:(id)sender;
- (IBAction)onSegGender:(id)sender;
- (IBAction)onDownload:(id)sender;
- (IBAction)onSelectLocation:(id)sender;



-(BOOL)checkModelDatas;

@end
