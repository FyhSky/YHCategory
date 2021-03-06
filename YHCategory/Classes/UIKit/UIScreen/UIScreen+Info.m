//
//  UIScreen+Info.m
//  YHCategory
//
// Created by FengYinghao on 2021/9/15.
//  Copyright (c) 2021 FyhSky. All rights reserved.
//

#import "UIScreen+Info.h"
#include <sys/sysctl.h>

@implementation UIScreen (Info)

+ (BOOL)isRetina{
    static BOOL isRetina;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        isRetina = [UIScreen mainScreen].scale > 1.0f;
    });
    return isRetina;
}

+ (CGFloat)screenScale {
    static CGFloat screenScale = 0.0;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        if ([NSThread isMainThread]) {
            screenScale = [[UIScreen mainScreen] scale];
        } else {
            dispatch_sync(dispatch_get_main_queue(), ^{
                screenScale = [[UIScreen mainScreen] scale];
            });
        }
    });
    return screenScale;
}


+ (CGRect)screenBounds{
    return [self screenBoundsForInterfaceOrientation:[UIApplication sharedApplication].statusBarOrientation];
}

+ (CGRect)screenBoundsForInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation{
    const CGRect bounds = [UIScreen mainScreen].bounds;
    if (UIInterfaceOrientationIsLandscape(interfaceOrientation)){
        return CGRectMake(bounds.origin.y, bounds.origin.x, bounds.size.height, bounds.size.width);
    }else{
        return bounds;
    }
}

- (CGSize)sizeInPixel {
    CGSize size = CGSizeZero;
    
    if ([[UIScreen mainScreen] isEqual:self]) {
        NSString *model = [self hardwareString];
        
        if ([model hasPrefix:@"iPhone"]) {
            if ([model isEqualToString:@"iPhone7,1"]) return CGSizeMake(1080, 1920);
            if ([model isEqualToString:@"iPhone8,2"]) return CGSizeMake(1080, 1920);
            if ([model isEqualToString:@"iPhone9,2"]) return CGSizeMake(1080, 1920);
            if ([model isEqualToString:@"iPhone9,4"]) return CGSizeMake(1080, 1920);
        }
        if ([model hasPrefix:@"iPad"]) {
            if ([model hasPrefix:@"iPad6,7"]) size = CGSizeMake(2048, 2732);
            if ([model hasPrefix:@"iPad6,8"]) size = CGSizeMake(2048, 2732);
        }
    }
    
    if (CGSizeEqualToSize(size, CGSizeZero)) {
        if ([self respondsToSelector:@selector(nativeBounds)]) {
            size = self.nativeBounds.size;
        } else {
            size = self.bounds.size;
            size.width *= self.scale;
            size.height *= self.scale;
        }
        if (size.height < size.width) {
            CGFloat tmp = size.height;
            size.height = size.width;
            size.width = tmp;
        }
    }
    return size;
}

- (CGFloat)pixelsPerInch {
    if (![[UIScreen mainScreen] isEqual:self]) {
        return 326;
    }
    
    static CGFloat ppi = 0;
    static dispatch_once_t one;
    static NSString *name;
    dispatch_once(&one, ^{
        NSDictionary<NSString*, NSNumber *> *dic = @{
                                                     @"Watch1,1" : @326, //@"Apple Watch 38mm",
                                                     @"Watch1,2" : @326, //@"Apple Watch 43mm",
                                                     @"Watch2,3" : @326, //@"Apple Watch Series 2 38mm",
                                                     @"Watch2,4" : @326, //@"Apple Watch Series 2 42mm",
                                                     @"Watch2,6" : @326, //@"Apple Watch Series 1 38mm",
                                                     @"Watch1,7" : @326, //@"Apple Watch Series 1 42mm",
                                                     
                                                     @"iPod1,1" : @163, //@"iPod touch 1",
                                                     @"iPod2,1" : @163, //@"iPod touch 2",
                                                     @"iPod3,1" : @163, //@"iPod touch 3",
                                                     @"iPod4,1" : @326, //@"iPod touch 4",
                                                     @"iPod5,1" : @326, //@"iPod touch 5",
                                                     @"iPod7,1" : @326, //@"iPod touch 6",
                                                     
                                                     @"iPhone1,1" : @163, //@"iPhone 1G",
                                                     @"iPhone1,2" : @163, //@"iPhone 3G",
                                                     @"iPhone2,1" : @163, //@"iPhone 3GS",
                                                     @"iPhone3,1" : @326, //@"iPhone 4 (GSM)",
                                                     @"iPhone3,2" : @326, //@"iPhone 4",
                                                     @"iPhone3,3" : @326, //@"iPhone 4 (CDMA)",
                                                     @"iPhone4,1" : @326, //@"iPhone 4S",
                                                     @"iPhone5,1" : @326, //@"iPhone 5",
                                                     @"iPhone5,2" : @326, //@"iPhone 5",
                                                     @"iPhone5,3" : @326, //@"iPhone 5c",
                                                     @"iPhone5,4" : @326, //@"iPhone 5c",
                                                     @"iPhone6,1" : @326, //@"iPhone 5s",
                                                     @"iPhone6,2" : @326, //@"iPhone 5s",
                                                     @"iPhone7,1" : @401, //@"iPhone 6 Plus",
                                                     @"iPhone7,2" : @326, //@"iPhone 6",
                                                     @"iPhone8,1" : @326, //@"iPhone 6s",
                                                     @"iPhone8,2" : @401, //@"iPhone 6s Plus",
                                                     @"iPhone8,4" : @326, //@"iPhone SE",
                                                     @"iPhone9,1" : @326, //@"iPhone 7",
                                                     @"iPhone9,2" : @401, //@"iPhone 7 Plus",
                                                     @"iPhone9,3" : @326, //@"iPhone 7",
                                                     @"iPhone9,4" : @401, //@"iPhone 7 Plus",
                                                     
                                                     @"iPad1,1" : @132, //@"iPad 1",
                                                     @"iPad2,1" : @132, //@"iPad 2 (WiFi)",
                                                     @"iPad2,2" : @132, //@"iPad 2 (GSM)",
                                                     @"iPad2,3" : @132, //@"iPad 2 (CDMA)",
                                                     @"iPad2,4" : @132, //@"iPad 2",
                                                     @"iPad2,5" : @264, //@"iPad mini 1",
                                                     @"iPad2,6" : @264, //@"iPad mini 1",
                                                     @"iPad2,7" : @264, //@"iPad mini 1",
                                                     @"iPad3,1" : @324, //@"iPad 3 (WiFi)",
                                                     @"iPad3,2" : @324, //@"iPad 3 (4G)",
                                                     @"iPad3,3" : @324, //@"iPad 3 (4G)",
                                                     @"iPad3,4" : @324, //@"iPad 4",
                                                     @"iPad3,5" : @324, //@"iPad 4",
                                                     @"iPad3,6" : @324, //@"iPad 4",
                                                     @"iPad4,1" : @324, //@"iPad Air",
                                                     @"iPad4,2" : @324, //@"iPad Air",
                                                     @"iPad4,3" : @324, //@"iPad Air",
                                                     @"iPad4,4" : @264, //@"iPad mini 2",
                                                     @"iPad4,5" : @264, //@"iPad mini 2",
                                                     @"iPad4,6" : @264, //@"iPad mini 2",
                                                     @"iPad4,7" : @264, //@"iPad mini 3",
                                                     @"iPad4,8" : @264, //@"iPad mini 3",
                                                     @"iPad4,9" : @264, //@"iPad mini 3",
                                                     @"iPad5,1" : @264, //@"iPad mini 4",
                                                     @"iPad5,2" : @264, //@"iPad mini 4",
                                                     @"iPad5,3" : @324, //@"iPad Air 2",
                                                     @"iPad5,4" : @324, //@"iPad Air 2",
                                                     @"iPad6,3" : @324, //@"iPad Pro (9.7 inch)",
                                                     @"iPad6,4" : @324, //@"iPad Pro (9.7 inch)",
                                                     @"iPad6,7" : @264, //@"iPad Pro (12.9 inch)",
                                                     @"iPad6,8" : @264, //@"iPad Pro (12.9 inch)",
                                                     };
        NSString *model = [self hardwareString];
        if (model) {
            ppi = dic[name].doubleValue;
        }
        if (ppi == 0) ppi = 326;
    });
    return ppi;
}

- (NSString *)hardwareString{
    int name[] = {CTL_HW,HW_MACHINE};
    size_t size = 100;
    sysctl(name, 2, NULL, &size, NULL, 0);
    char *hw_machine = malloc(size);
    
    sysctl(name, 2, hw_machine, &size, NULL, 0);
    NSString *hardware = [NSString stringWithUTF8String:hw_machine];
    free(hw_machine);
    return hardware;
}

@end
