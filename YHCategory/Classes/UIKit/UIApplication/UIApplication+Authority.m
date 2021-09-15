//
//  UIApplication+Authority.m
//  YHCategory
//
//  Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import "UIApplication+Authority.h"
#import <CoreLocation/CoreLocation.h>
#import <AddressBook/AddressBook.h>
#import <EventKit/EventKit.h>
#import <AVFoundation/AVFoundation.h>
#import <AssetsLibrary/AssetsLibrary.h>

@implementation UIApplication (Authority)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
- (BOOL)isAccessToLocationData{
    if([CLLocationManager authorizationStatus] == kCLAuthorizationStatusAuthorized){
        return YES ;
    }
    return NO ;
}
#pragma clang diagnostic pop

- (BOOL)isAccessToAddressBook{
    if (ABAddressBookGetAuthorizationStatus() == kABAuthorizationStatusAuthorized) {
        return YES ;
    }
    return NO ;
}

- (BOOL)isAccessToCalendar{
    if ([EKEventStore authorizationStatusForEntityType:EKEntityTypeEvent] == EKAuthorizationStatusAuthorized) {
        return YES ;
    }
    return NO ;
}

- (BOOL)isAccessToReminders{
    if ([EKEventStore authorizationStatusForEntityType:EKEntityTypeReminder] == EKAuthorizationStatusAuthorized) {
        return YES ;
    }
    return NO ;
}

- (BOOL)isAccessToPhotosLibrary{
    if ([ALAssetsLibrary authorizationStatus] == ALAuthorizationStatusAuthorized) {
        return YES ;
    }
    return NO ;
}

- (BOOL)isAccessToMicrophone{
    if ([[AVAudioSession sharedInstance] recordPermission] == AVAudioSessionRecordPermissionGranted) {
        return YES ;
    }
    return NO ;
}

@end
