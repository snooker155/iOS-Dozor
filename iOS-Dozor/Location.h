//
//  Location.h
//  iOS-Dozor
//
//  Created by Anton Zubarev on 31.10.12.
//  Copyright (c) 2012 izub.anton@gmail.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Location : NSObject{
    
    int noOfLocation;
    int coordinates;
    int numberOfCodes;
}

-(int)coordinates;
-(void)setCoords:(int)coordinates;

-(int)numberOfCodes;
-(void)setNumberOfCodes:(int)numberOfCodes;

-(int)noOfLocation;
-(void)setNoOfLocation:(int)noOfLocation;

@end
