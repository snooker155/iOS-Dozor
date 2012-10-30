//
//  Item.h
//  iOS-Dozor
//
//  Created by Anton Zubarev on 31.10.12.
//  Copyright (c) 2012 izub.anton@gmail.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Item : NSObject{
    
    int ID;
    NSString *name;
    int quantity;
    NSString *description;
    NSString* ownerName;
}


-(int)ID;
-(void)setID:(int)ID;

-(NSString*)name;
-(void)setName:(NSString*)name;

-(int)quantity;
-(void)setQuantity:(int)quantity;

-(NSString*)description;
-(void)setDescription:(NSString*)description;

-(NSString*)ownerName;
-(void)setOwner:(NSString*)ownerName;


-(void)addItem:(int)quantity;

-(void)removeItem:(int)quantity;

-(void)useItem;



@end
